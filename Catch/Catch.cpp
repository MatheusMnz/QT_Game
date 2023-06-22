#include "Catch.h"
#include "ui_Catch.h"
#include "Player.h"

#include <QDebug>
#include <QMessageBox>
#include <QActionGroup>
#include <QSignalMapper>
#include <qqueue.h>

using namespace std;
Catch::Catch(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Catch),
      m_player(Player::player(Player::Red)) {

    ui->setupUi(this);

    QObject::connect(ui->actionNew, SIGNAL(triggered(bool)), this, SLOT(reset()));
    QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    QObject::connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAbout()));

    QSignalMapper* map = new QSignalMapper(this);
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            QString cellName = QString("cell%1%2").arg(row).arg(col);
            Cell* cell = this->findChild<Cell*>(cellName);
            Q_ASSERT(cell != nullptr);
            Q_ASSERT(cell->row() == row && cell->col() == col);

            m_board[row][col] = cell;

            int id = row * 8 + col;
            map->setMapping(cell, id);
            QObject::connect(cell, SIGNAL(clicked(bool)), map, SLOT(map()));
            QObject::connect(cell, SIGNAL(mouseOver(bool)), this, SLOT(updateSelectables(bool)));
        }
    }
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
#else
    QObject::connect(map, SIGNAL(mappedInt(int)), this, SLOT(play(int)));
#endif

    // When the turn ends, switch the player.
    QObject::connect(this, SIGNAL(turnEnded()), this, SLOT(switchPlayer()));

    this->reset();

    this->adjustSize();
    this->setFixedSize(this->size());
}

Catch::~Catch() {
    delete ui;
}

int Catch::bfs(Cell* cell, QList<Cell*>& capturedCells) {
    cell->setVisited(true);
    capturedCells.append(cell);

    QList<Cell*> neighbors = getNeighbors(cell);

    int count = 1;
    for (Cell* neighbor : neighbors) {
        if (neighbor->isEmpty() && !neighbor->isVisited()) {
            if (count > 3) {
                return count;
            }
            count += bfs(neighbor, capturedCells);
        }
    }

    return count;
}

QList<Cell*> Catch::getNeighbors(Cell* cell) {
    QList<Cell*> neighbors;
    QSet<Cell*> visited;
    QQueue<Cell*> queue;

    queue.enqueue(cell);
    visited.insert(cell);

    while (!queue.isEmpty()) {
        Cell* currentCell = queue.dequeue();

        int row = currentCell->row();
        int col = currentCell->col();

        // Adicionar vizinho superior, se existir e for empty
        if (row > 0 && m_board[row - 1][col]->isEmpty() && !visited.contains(m_board[row - 1][col])) {
            neighbors.append(m_board[row - 1][col]);
            queue.enqueue(m_board[row - 1][col]);
            visited.insert(m_board[row - 1][col]);
        }

        // Adicionar vizinho inferior, se existir e for empty
        if (row < 7 && m_board[row + 1][col]->isEmpty() && !visited.contains(m_board[row + 1][col])) {
            neighbors.append(m_board[row + 1][col]);
            queue.enqueue(m_board[row + 1][col]);
            visited.insert(m_board[row + 1][col]);
        }

        // Adicionar vizinho esquerdo, se existir e for empty
        if (col > 0 && m_board[row][col - 1]->isEmpty() && !visited.contains(m_board[row][col - 1])) {
            neighbors.append(m_board[row][col - 1]);
            queue.enqueue(m_board[row][col - 1]);
            visited.insert(m_board[row][col - 1]);
        }

        // Adicionar vizinho direito, se existir e for empty
        if (col < 7 && m_board[row][col + 1]->isEmpty() && !visited.contains(m_board[row][col + 1])) {
            neighbors.append(m_board[row][col + 1]);
            queue.enqueue(m_board[row][col + 1]);
            visited.insert(m_board[row][col + 1]);
        }
    }


    // Verificação se a célula atual é Empty e não possui vizinhos
    if (neighbors.isEmpty() && cell->isEmpty()) {
        neighbors.append(cell);
    }


    return neighbors;
}

Cell* Catch::getNeighbourCell(int id, Player::Orientation orientation) {
    int row = id / 8;
    int col = id % 8;
    Cell* neighbour = nullptr;


    // Lógica para criação da célula vizinha
    switch (orientation) {
        case Player::Vertical:
            if (row < 7) {
                neighbour = m_board[row + 1][col];
            }
            break;
        case Player::Horizontal:
            if (col < 7) {
                neighbour = m_board[row][col + 1];
            }
            break;
        default:
            Q_UNREACHABLE();
            break;
    }

    // Verificação se é uma célula válida
    if (neighbour && neighbour->row() >= 0 && neighbour->row() < 8 &&
        neighbour->col() >= 0 && neighbour->col() < 8 && neighbour->state() != Cell::Blocked) {
        return neighbour;
    } else {
        return nullptr;
    }
}

bool Catch::possibleMoves() {
    Player::Orientation nextOrientation = m_player->other()->orientation();

    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* cell = m_board[row][col];
            if (cell->isEmpty()) {
                if (nextOrientation == Player::Vertical) {
                    // Verificar acima
                    if (row > 0 && m_board[row - 1][col]->isEmpty())
                        return true;

                    // Verificar abaixo
                    if (row < 7 && m_board[row + 1][col]->isEmpty())
                        return true;
                } else {
                    // Verificar a esquerda
                    if (col > 0 && m_board[row][col - 1]->isEmpty())
                        return true;

                    // Verificar a direita
                    if (col < 7 && m_board[row][col + 1]->isEmpty())
                        return true;
                }
            }
        }
    }

    return false;
}


void Catch::play(int id) {
    Player::Orientation o = m_player->orientation();
    Cell* neighbour = getNeighbourCell(id, o);
    Cell* cell = m_board[id / 8][id % 8];

    if (cell == nullptr || !cell->isSelectable()) {
        return;
    }

    cell->setState(Cell::Blocked);
    neighbour->setState(Cell::Blocked);

    QList<Cell*> capturedCells;
    int count = 0;

    // Percorro toda a matriz, aplicando o BFS para cada célula que for vazia e não visitada
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* currentCell = m_board[row][col];
            if (currentCell->isEmpty() && !currentCell->isVisited()) {
                count = bfs(currentCell, capturedCells);
                if (count <= 3) {
                    // Capturo as células vizinhas para o player atual
                    for (Cell* capturedCell : capturedCells) {
                        QList<Cell*> neighbors = getNeighbors(capturedCell);
                        for (Cell* neighbor : neighbors) {
                            if (neighbor->isEmpty() && neighbor->icon().isNull()) {
                                neighbor->setState(Cell::Blocked);
                                neighbor->setIcon(m_player->getPlayerPixmap());
                            }
                        }
                      m_player->incrementCount(neighbors.size());
                    }
                }
                capturedCells.clear();
            }
        }
    }

    // Limpar o estado de visitado das células
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* currentCell = m_board[row][col];
            currentCell->setVisited(false);
        }
    }


    // Verifico se existe jogadas possíveis
    qDebug() << possibleMoves() << m_player->orientation();
    if (!possibleMoves()) {

        updateStatusBar();
         Player::Orientation orientation = m_player->orientation();

        if (m_player->count() > m_player->other()->count()) {
            if (orientation == Player::Vertical) {
                QMessageBox::information(nullptr, nullptr, tr("Parabéns, o Jogador Azul venceu por %1 a %2.").arg(m_player->count()).arg(m_player->other()->count()));
            }else{
                QMessageBox::information(nullptr, nullptr, tr("Parabéns, o Jogador Vermelho venceu por %1 a %2.").arg(m_player->count()).arg(m_player->other()->count()));
            }
        }else if (m_player->count() < m_player->other()->count()){
            if (orientation == Player::Vertical) {
                QMessageBox::information(nullptr, nullptr, tr("Parabéns, o Jogador Azul venceu por %1 a %2.").arg(m_player->other()->count()).arg(m_player->count()));
            }else{
                QMessageBox::information(nullptr, nullptr, tr("Parabéns, o Jogador Vermelho venceu por %1 a %2.").arg(m_player->other()->count()).arg(m_player->count()));
            }
        }
        else{
            QMessageBox::information(nullptr, nullptr, tr("O jogo empatou em %1 a %2.").arg(m_player->other()->count()).arg(m_player->count()));
        }
    }


    emit turnEnded();
}

void Catch::switchPlayer() {
    // Switch the player.
    m_player = m_player->other();

    // Finally, update the status bar.
    this->updateStatusBar();
}

void Catch::reset() {
    // Reset board.
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* cell = m_board[row][col];
            cell->reset();
        }
    }

    // Reset the players.
    Player* red = Player::player(Player::Red);
    red->reset();

    Player* blue = Player::player(Player::Blue);
    blue->reset();

    m_player = red;

    // Finally, update the status bar.
    this->updateStatusBar();
}

void Catch::showAbout() {
    QMessageBox::information(this, tr("Sobre"), tr("Catch\n\nMatheus Costa de Menezes"));
}

void Catch::updateSelectables(bool over) {
    Cell* cell = qobject_cast<Cell*>(QObject::sender());
    Q_ASSERT(cell != nullptr);

    Player::Orientation orientation = m_player->orientation();
    Cell* neighbor = getNeighbourCell(cell->row() * 8 + cell->col(), orientation);

    // Valido se estou sobre a célula
    if (over) {

        // Verifico se o neighbor retornado é diferente de nullptr e se é uma célula vazia
        if (cell->isEmpty() && neighbor && neighbor->isEmpty()) {
            neighbor->setState(Cell::Selectable);
            cell->setState(Cell::Selectable);
        }
    } else {
        if (cell->isSelectable() && neighbor && neighbor->isSelectable()) {
            cell->setState(Cell::Empty);
            neighbor->setState(Cell::Empty);
        }
    }
}

void Catch::updateStatusBar() {
    ui->statusbar->showMessage(tr("Vez do %1 (%2 a %3)")
        .arg(m_player->name()).arg(m_player->count()).arg(m_player->other()->count()));
}
