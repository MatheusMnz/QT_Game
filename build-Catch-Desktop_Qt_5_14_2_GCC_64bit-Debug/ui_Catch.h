/********************************************************************************
** Form generated from reading UI file 'Catch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATCH_H
#define UI_CATCH_H

#include <Cell.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Catch
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    Cell *cell00;
    Cell *cell01;
    Cell *cell02;
    Cell *cell03;
    Cell *cell04;
    Cell *cell05;
    Cell *cell06;
    Cell *cell07;
    Cell *cell10;
    Cell *cell11;
    Cell *cell12;
    Cell *cell13;
    Cell *cell14;
    Cell *cell15;
    Cell *cell16;
    Cell *cell17;
    Cell *cell20;
    Cell *cell21;
    Cell *cell22;
    Cell *cell23;
    Cell *cell24;
    Cell *cell25;
    Cell *cell26;
    Cell *cell27;
    Cell *cell30;
    Cell *cell31;
    Cell *cell32;
    Cell *cell33;
    Cell *cell34;
    Cell *cell35;
    Cell *cell36;
    Cell *cell37;
    Cell *cell40;
    Cell *cell41;
    Cell *cell42;
    Cell *cell43;
    Cell *cell44;
    Cell *cell45;
    Cell *cell46;
    Cell *cell47;
    Cell *cell50;
    Cell *cell51;
    Cell *cell52;
    Cell *cell53;
    Cell *cell54;
    Cell *cell55;
    Cell *cell56;
    Cell *cell57;
    Cell *cell60;
    Cell *cell61;
    Cell *cell62;
    Cell *cell63;
    Cell *cell64;
    Cell *cell65;
    Cell *cell66;
    Cell *cell67;
    Cell *cell70;
    Cell *cell71;
    Cell *cell72;
    Cell *cell73;
    Cell *cell74;
    Cell *cell75;
    Cell *cell76;
    Cell *cell77;
    QMenuBar *menubar;
    QMenu *menuGame;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Catch)
    {
        if (Catch->objectName().isEmpty())
            Catch->setObjectName(QString::fromUtf8("Catch"));
        Catch->resize(450, 501);
        actionNew = new QAction(Catch);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionQuit = new QAction(Catch);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(Catch);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(Catch);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(450, 450));
        centralwidget->setMaximumSize(QSize(450, 450));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"  background: url(':/grid');\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(25, 25, 25, 25);
        cell00 = new Cell(centralwidget);
        cell00->setObjectName(QString::fromUtf8("cell00"));
        cell00->setMinimumSize(QSize(46, 46));
        cell00->setMaximumSize(QSize(46, 46));
        cell00->setIconSize(QSize(45, 45));
        cell00->setFlat(true);
        cell00->setProperty("row", QVariant(0));
        cell00->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell00, 0, 0, 1, 1);

        cell01 = new Cell(centralwidget);
        cell01->setObjectName(QString::fromUtf8("cell01"));
        cell01->setMinimumSize(QSize(46, 46));
        cell01->setMaximumSize(QSize(46, 46));
        cell01->setIconSize(QSize(45, 45));
        cell01->setFlat(true);
        cell01->setProperty("row", QVariant(0));
        cell01->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell01, 0, 1, 1, 1);

        cell02 = new Cell(centralwidget);
        cell02->setObjectName(QString::fromUtf8("cell02"));
        cell02->setMinimumSize(QSize(46, 46));
        cell02->setMaximumSize(QSize(46, 46));
        cell02->setIconSize(QSize(45, 45));
        cell02->setFlat(true);
        cell02->setProperty("row", QVariant(0));
        cell02->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell02, 0, 2, 1, 1);

        cell03 = new Cell(centralwidget);
        cell03->setObjectName(QString::fromUtf8("cell03"));
        cell03->setMinimumSize(QSize(46, 46));
        cell03->setMaximumSize(QSize(46, 46));
        cell03->setIconSize(QSize(45, 45));
        cell03->setFlat(true);
        cell03->setProperty("row", QVariant(0));
        cell03->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell03, 0, 3, 1, 1);

        cell04 = new Cell(centralwidget);
        cell04->setObjectName(QString::fromUtf8("cell04"));
        cell04->setMinimumSize(QSize(46, 46));
        cell04->setMaximumSize(QSize(46, 46));
        cell04->setIconSize(QSize(45, 45));
        cell04->setFlat(true);
        cell04->setProperty("row", QVariant(0));
        cell04->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell04, 0, 4, 1, 1);

        cell05 = new Cell(centralwidget);
        cell05->setObjectName(QString::fromUtf8("cell05"));
        cell05->setMinimumSize(QSize(46, 46));
        cell05->setMaximumSize(QSize(46, 46));
        cell05->setIconSize(QSize(45, 45));
        cell05->setFlat(true);
        cell05->setProperty("row", QVariant(0));
        cell05->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell05, 0, 5, 1, 1);

        cell06 = new Cell(centralwidget);
        cell06->setObjectName(QString::fromUtf8("cell06"));
        cell06->setMinimumSize(QSize(46, 46));
        cell06->setMaximumSize(QSize(46, 46));
        cell06->setIconSize(QSize(45, 45));
        cell06->setFlat(true);
        cell06->setProperty("row", QVariant(0));
        cell06->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell06, 0, 6, 1, 1);

        cell07 = new Cell(centralwidget);
        cell07->setObjectName(QString::fromUtf8("cell07"));
        cell07->setMinimumSize(QSize(46, 46));
        cell07->setMaximumSize(QSize(46, 46));
        cell07->setIconSize(QSize(45, 45));
        cell07->setFlat(true);
        cell07->setProperty("row", QVariant(0));
        cell07->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell07, 0, 7, 1, 1);

        cell10 = new Cell(centralwidget);
        cell10->setObjectName(QString::fromUtf8("cell10"));
        cell10->setMinimumSize(QSize(46, 46));
        cell10->setMaximumSize(QSize(46, 46));
        cell10->setIconSize(QSize(45, 45));
        cell10->setFlat(true);
        cell10->setProperty("row", QVariant(1));
        cell10->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell10, 1, 0, 1, 1);

        cell11 = new Cell(centralwidget);
        cell11->setObjectName(QString::fromUtf8("cell11"));
        cell11->setMinimumSize(QSize(46, 46));
        cell11->setMaximumSize(QSize(46, 46));
        cell11->setIconSize(QSize(45, 45));
        cell11->setFlat(true);
        cell11->setProperty("row", QVariant(1));
        cell11->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell11, 1, 1, 1, 1);

        cell12 = new Cell(centralwidget);
        cell12->setObjectName(QString::fromUtf8("cell12"));
        cell12->setMinimumSize(QSize(46, 46));
        cell12->setMaximumSize(QSize(46, 46));
        cell12->setIconSize(QSize(45, 45));
        cell12->setFlat(true);
        cell12->setProperty("row", QVariant(1));
        cell12->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell12, 1, 2, 1, 1);

        cell13 = new Cell(centralwidget);
        cell13->setObjectName(QString::fromUtf8("cell13"));
        cell13->setMinimumSize(QSize(46, 46));
        cell13->setMaximumSize(QSize(46, 46));
        cell13->setIconSize(QSize(45, 45));
        cell13->setFlat(true);
        cell13->setProperty("row", QVariant(1));
        cell13->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell13, 1, 3, 1, 1);

        cell14 = new Cell(centralwidget);
        cell14->setObjectName(QString::fromUtf8("cell14"));
        cell14->setMinimumSize(QSize(46, 46));
        cell14->setMaximumSize(QSize(46, 46));
        cell14->setIconSize(QSize(45, 45));
        cell14->setFlat(true);
        cell14->setProperty("row", QVariant(1));
        cell14->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell14, 1, 4, 1, 1);

        cell15 = new Cell(centralwidget);
        cell15->setObjectName(QString::fromUtf8("cell15"));
        cell15->setMinimumSize(QSize(46, 46));
        cell15->setMaximumSize(QSize(46, 46));
        cell15->setIconSize(QSize(45, 45));
        cell15->setFlat(true);
        cell15->setProperty("row", QVariant(1));
        cell15->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell15, 1, 5, 1, 1);

        cell16 = new Cell(centralwidget);
        cell16->setObjectName(QString::fromUtf8("cell16"));
        cell16->setMinimumSize(QSize(46, 46));
        cell16->setMaximumSize(QSize(46, 46));
        cell16->setIconSize(QSize(45, 45));
        cell16->setFlat(true);
        cell16->setProperty("row", QVariant(1));
        cell16->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell16, 1, 6, 1, 1);

        cell17 = new Cell(centralwidget);
        cell17->setObjectName(QString::fromUtf8("cell17"));
        cell17->setMinimumSize(QSize(46, 46));
        cell17->setMaximumSize(QSize(46, 46));
        cell17->setIconSize(QSize(45, 45));
        cell17->setFlat(true);
        cell17->setProperty("row", QVariant(1));
        cell17->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell17, 1, 7, 1, 1);

        cell20 = new Cell(centralwidget);
        cell20->setObjectName(QString::fromUtf8("cell20"));
        cell20->setMinimumSize(QSize(46, 46));
        cell20->setMaximumSize(QSize(46, 46));
        cell20->setIconSize(QSize(45, 45));
        cell20->setFlat(true);
        cell20->setProperty("row", QVariant(2));
        cell20->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell20, 2, 0, 1, 1);

        cell21 = new Cell(centralwidget);
        cell21->setObjectName(QString::fromUtf8("cell21"));
        cell21->setMinimumSize(QSize(46, 46));
        cell21->setMaximumSize(QSize(46, 46));
        cell21->setIconSize(QSize(45, 45));
        cell21->setFlat(true);
        cell21->setProperty("row", QVariant(2));
        cell21->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell21, 2, 1, 1, 1);

        cell22 = new Cell(centralwidget);
        cell22->setObjectName(QString::fromUtf8("cell22"));
        cell22->setMinimumSize(QSize(46, 46));
        cell22->setMaximumSize(QSize(46, 46));
        cell22->setIconSize(QSize(45, 45));
        cell22->setFlat(true);
        cell22->setProperty("row", QVariant(2));
        cell22->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell22, 2, 2, 1, 1);

        cell23 = new Cell(centralwidget);
        cell23->setObjectName(QString::fromUtf8("cell23"));
        cell23->setMinimumSize(QSize(46, 46));
        cell23->setMaximumSize(QSize(46, 46));
        cell23->setIconSize(QSize(45, 45));
        cell23->setFlat(true);
        cell23->setProperty("row", QVariant(2));
        cell23->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell23, 2, 3, 1, 1);

        cell24 = new Cell(centralwidget);
        cell24->setObjectName(QString::fromUtf8("cell24"));
        cell24->setMinimumSize(QSize(46, 46));
        cell24->setMaximumSize(QSize(46, 46));
        cell24->setIconSize(QSize(45, 45));
        cell24->setFlat(true);
        cell24->setProperty("row", QVariant(2));
        cell24->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell24, 2, 4, 1, 1);

        cell25 = new Cell(centralwidget);
        cell25->setObjectName(QString::fromUtf8("cell25"));
        cell25->setMinimumSize(QSize(46, 46));
        cell25->setMaximumSize(QSize(46, 46));
        cell25->setIconSize(QSize(45, 45));
        cell25->setFlat(true);
        cell25->setProperty("row", QVariant(2));
        cell25->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell25, 2, 5, 1, 1);

        cell26 = new Cell(centralwidget);
        cell26->setObjectName(QString::fromUtf8("cell26"));
        cell26->setMinimumSize(QSize(46, 46));
        cell26->setMaximumSize(QSize(46, 46));
        cell26->setIconSize(QSize(45, 45));
        cell26->setFlat(true);
        cell26->setProperty("row", QVariant(2));
        cell26->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell26, 2, 6, 1, 1);

        cell27 = new Cell(centralwidget);
        cell27->setObjectName(QString::fromUtf8("cell27"));
        cell27->setMinimumSize(QSize(46, 46));
        cell27->setMaximumSize(QSize(46, 46));
        cell27->setIconSize(QSize(45, 45));
        cell27->setFlat(true);
        cell27->setProperty("row", QVariant(2));
        cell27->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell27, 2, 7, 1, 1);

        cell30 = new Cell(centralwidget);
        cell30->setObjectName(QString::fromUtf8("cell30"));
        cell30->setMinimumSize(QSize(46, 46));
        cell30->setMaximumSize(QSize(46, 46));
        cell30->setIconSize(QSize(45, 45));
        cell30->setFlat(true);
        cell30->setProperty("row", QVariant(3));
        cell30->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell30, 3, 0, 1, 1);

        cell31 = new Cell(centralwidget);
        cell31->setObjectName(QString::fromUtf8("cell31"));
        cell31->setMinimumSize(QSize(46, 46));
        cell31->setMaximumSize(QSize(46, 46));
        cell31->setIconSize(QSize(45, 45));
        cell31->setFlat(true);
        cell31->setProperty("row", QVariant(3));
        cell31->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell31, 3, 1, 1, 1);

        cell32 = new Cell(centralwidget);
        cell32->setObjectName(QString::fromUtf8("cell32"));
        cell32->setMinimumSize(QSize(46, 46));
        cell32->setMaximumSize(QSize(46, 46));
        cell32->setIconSize(QSize(45, 45));
        cell32->setFlat(true);
        cell32->setProperty("row", QVariant(3));
        cell32->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell32, 3, 2, 1, 1);

        cell33 = new Cell(centralwidget);
        cell33->setObjectName(QString::fromUtf8("cell33"));
        cell33->setMinimumSize(QSize(46, 46));
        cell33->setMaximumSize(QSize(46, 46));
        cell33->setIconSize(QSize(45, 45));
        cell33->setFlat(true);
        cell33->setProperty("row", QVariant(3));
        cell33->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell33, 3, 3, 1, 1);

        cell34 = new Cell(centralwidget);
        cell34->setObjectName(QString::fromUtf8("cell34"));
        cell34->setMinimumSize(QSize(46, 46));
        cell34->setMaximumSize(QSize(46, 46));
        cell34->setIconSize(QSize(45, 45));
        cell34->setFlat(true);
        cell34->setProperty("row", QVariant(3));
        cell34->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell34, 3, 4, 1, 1);

        cell35 = new Cell(centralwidget);
        cell35->setObjectName(QString::fromUtf8("cell35"));
        cell35->setMinimumSize(QSize(46, 46));
        cell35->setMaximumSize(QSize(46, 46));
        cell35->setIconSize(QSize(45, 45));
        cell35->setFlat(true);
        cell35->setProperty("row", QVariant(3));
        cell35->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell35, 3, 5, 1, 1);

        cell36 = new Cell(centralwidget);
        cell36->setObjectName(QString::fromUtf8("cell36"));
        cell36->setMinimumSize(QSize(46, 46));
        cell36->setMaximumSize(QSize(46, 46));
        cell36->setIconSize(QSize(45, 45));
        cell36->setFlat(true);
        cell36->setProperty("row", QVariant(3));
        cell36->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell36, 3, 6, 1, 1);

        cell37 = new Cell(centralwidget);
        cell37->setObjectName(QString::fromUtf8("cell37"));
        cell37->setMinimumSize(QSize(46, 46));
        cell37->setMaximumSize(QSize(46, 46));
        cell37->setIconSize(QSize(45, 45));
        cell37->setFlat(true);
        cell37->setProperty("row", QVariant(3));
        cell37->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell37, 3, 7, 1, 1);

        cell40 = new Cell(centralwidget);
        cell40->setObjectName(QString::fromUtf8("cell40"));
        cell40->setMinimumSize(QSize(46, 46));
        cell40->setMaximumSize(QSize(46, 46));
        cell40->setIconSize(QSize(45, 45));
        cell40->setFlat(true);
        cell40->setProperty("row", QVariant(4));
        cell40->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell40, 4, 0, 1, 1);

        cell41 = new Cell(centralwidget);
        cell41->setObjectName(QString::fromUtf8("cell41"));
        cell41->setMinimumSize(QSize(46, 46));
        cell41->setMaximumSize(QSize(46, 46));
        cell41->setIconSize(QSize(45, 45));
        cell41->setFlat(true);
        cell41->setProperty("row", QVariant(4));
        cell41->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell41, 4, 1, 1, 1);

        cell42 = new Cell(centralwidget);
        cell42->setObjectName(QString::fromUtf8("cell42"));
        cell42->setMinimumSize(QSize(46, 46));
        cell42->setMaximumSize(QSize(46, 46));
        cell42->setIconSize(QSize(45, 45));
        cell42->setFlat(true);
        cell42->setProperty("row", QVariant(4));
        cell42->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell42, 4, 2, 1, 1);

        cell43 = new Cell(centralwidget);
        cell43->setObjectName(QString::fromUtf8("cell43"));
        cell43->setMinimumSize(QSize(46, 46));
        cell43->setMaximumSize(QSize(46, 46));
        cell43->setIconSize(QSize(45, 45));
        cell43->setFlat(true);
        cell43->setProperty("row", QVariant(4));
        cell43->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell43, 4, 3, 1, 1);

        cell44 = new Cell(centralwidget);
        cell44->setObjectName(QString::fromUtf8("cell44"));
        cell44->setMinimumSize(QSize(46, 46));
        cell44->setMaximumSize(QSize(46, 46));
        cell44->setIconSize(QSize(45, 45));
        cell44->setFlat(true);
        cell44->setProperty("row", QVariant(4));
        cell44->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell44, 4, 4, 1, 1);

        cell45 = new Cell(centralwidget);
        cell45->setObjectName(QString::fromUtf8("cell45"));
        cell45->setMinimumSize(QSize(46, 46));
        cell45->setMaximumSize(QSize(46, 46));
        cell45->setIconSize(QSize(45, 45));
        cell45->setFlat(true);
        cell45->setProperty("row", QVariant(4));
        cell45->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell45, 4, 5, 1, 1);

        cell46 = new Cell(centralwidget);
        cell46->setObjectName(QString::fromUtf8("cell46"));
        cell46->setMinimumSize(QSize(46, 46));
        cell46->setMaximumSize(QSize(46, 46));
        cell46->setIconSize(QSize(45, 45));
        cell46->setFlat(true);
        cell46->setProperty("row", QVariant(4));
        cell46->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell46, 4, 6, 1, 1);

        cell47 = new Cell(centralwidget);
        cell47->setObjectName(QString::fromUtf8("cell47"));
        cell47->setMinimumSize(QSize(46, 46));
        cell47->setMaximumSize(QSize(46, 46));
        cell47->setIconSize(QSize(45, 45));
        cell47->setFlat(true);
        cell47->setProperty("row", QVariant(4));
        cell47->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell47, 4, 7, 1, 1);

        cell50 = new Cell(centralwidget);
        cell50->setObjectName(QString::fromUtf8("cell50"));
        cell50->setMinimumSize(QSize(46, 46));
        cell50->setMaximumSize(QSize(46, 46));
        cell50->setIconSize(QSize(45, 45));
        cell50->setFlat(true);
        cell50->setProperty("row", QVariant(5));
        cell50->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell50, 5, 0, 1, 1);

        cell51 = new Cell(centralwidget);
        cell51->setObjectName(QString::fromUtf8("cell51"));
        cell51->setMinimumSize(QSize(46, 46));
        cell51->setMaximumSize(QSize(46, 46));
        cell51->setIconSize(QSize(45, 45));
        cell51->setFlat(true);
        cell51->setProperty("row", QVariant(5));
        cell51->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell51, 5, 1, 1, 1);

        cell52 = new Cell(centralwidget);
        cell52->setObjectName(QString::fromUtf8("cell52"));
        cell52->setMinimumSize(QSize(46, 46));
        cell52->setMaximumSize(QSize(46, 46));
        cell52->setIconSize(QSize(45, 45));
        cell52->setFlat(true);
        cell52->setProperty("row", QVariant(5));
        cell52->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell52, 5, 2, 1, 1);

        cell53 = new Cell(centralwidget);
        cell53->setObjectName(QString::fromUtf8("cell53"));
        cell53->setMinimumSize(QSize(46, 46));
        cell53->setMaximumSize(QSize(46, 46));
        cell53->setIconSize(QSize(45, 45));
        cell53->setFlat(true);
        cell53->setProperty("row", QVariant(5));
        cell53->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell53, 5, 3, 1, 1);

        cell54 = new Cell(centralwidget);
        cell54->setObjectName(QString::fromUtf8("cell54"));
        cell54->setMinimumSize(QSize(46, 46));
        cell54->setMaximumSize(QSize(46, 46));
        cell54->setIconSize(QSize(45, 45));
        cell54->setFlat(true);
        cell54->setProperty("row", QVariant(5));
        cell54->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell54, 5, 4, 1, 1);

        cell55 = new Cell(centralwidget);
        cell55->setObjectName(QString::fromUtf8("cell55"));
        cell55->setMinimumSize(QSize(46, 46));
        cell55->setMaximumSize(QSize(46, 46));
        cell55->setIconSize(QSize(45, 45));
        cell55->setFlat(true);
        cell55->setProperty("row", QVariant(5));
        cell55->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell55, 5, 5, 1, 1);

        cell56 = new Cell(centralwidget);
        cell56->setObjectName(QString::fromUtf8("cell56"));
        cell56->setMinimumSize(QSize(46, 46));
        cell56->setMaximumSize(QSize(46, 46));
        cell56->setIconSize(QSize(45, 45));
        cell56->setFlat(true);
        cell56->setProperty("row", QVariant(5));
        cell56->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell56, 5, 6, 1, 1);

        cell57 = new Cell(centralwidget);
        cell57->setObjectName(QString::fromUtf8("cell57"));
        cell57->setMinimumSize(QSize(46, 46));
        cell57->setMaximumSize(QSize(46, 46));
        cell57->setIconSize(QSize(45, 45));
        cell57->setFlat(true);
        cell57->setProperty("row", QVariant(5));
        cell57->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell57, 5, 7, 1, 1);

        cell60 = new Cell(centralwidget);
        cell60->setObjectName(QString::fromUtf8("cell60"));
        cell60->setMinimumSize(QSize(46, 46));
        cell60->setMaximumSize(QSize(46, 46));
        cell60->setIconSize(QSize(45, 45));
        cell60->setFlat(true);
        cell60->setProperty("row", QVariant(6));
        cell60->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell60, 6, 0, 1, 1);

        cell61 = new Cell(centralwidget);
        cell61->setObjectName(QString::fromUtf8("cell61"));
        cell61->setMinimumSize(QSize(46, 46));
        cell61->setMaximumSize(QSize(46, 46));
        cell61->setIconSize(QSize(45, 45));
        cell61->setFlat(true);
        cell61->setProperty("row", QVariant(6));
        cell61->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell61, 6, 1, 1, 1);

        cell62 = new Cell(centralwidget);
        cell62->setObjectName(QString::fromUtf8("cell62"));
        cell62->setMinimumSize(QSize(46, 46));
        cell62->setMaximumSize(QSize(46, 46));
        cell62->setIconSize(QSize(45, 45));
        cell62->setFlat(true);
        cell62->setProperty("row", QVariant(6));
        cell62->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell62, 6, 2, 1, 1);

        cell63 = new Cell(centralwidget);
        cell63->setObjectName(QString::fromUtf8("cell63"));
        cell63->setMinimumSize(QSize(46, 46));
        cell63->setMaximumSize(QSize(46, 46));
        cell63->setIconSize(QSize(45, 45));
        cell63->setFlat(true);
        cell63->setProperty("row", QVariant(6));
        cell63->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell63, 6, 3, 1, 1);

        cell64 = new Cell(centralwidget);
        cell64->setObjectName(QString::fromUtf8("cell64"));
        cell64->setMinimumSize(QSize(46, 46));
        cell64->setMaximumSize(QSize(46, 46));
        cell64->setIconSize(QSize(45, 45));
        cell64->setFlat(true);
        cell64->setProperty("row", QVariant(6));
        cell64->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell64, 6, 4, 1, 1);

        cell65 = new Cell(centralwidget);
        cell65->setObjectName(QString::fromUtf8("cell65"));
        cell65->setMinimumSize(QSize(46, 46));
        cell65->setMaximumSize(QSize(46, 46));
        cell65->setIconSize(QSize(45, 45));
        cell65->setFlat(true);
        cell65->setProperty("row", QVariant(6));
        cell65->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell65, 6, 5, 1, 1);

        cell66 = new Cell(centralwidget);
        cell66->setObjectName(QString::fromUtf8("cell66"));
        cell66->setMinimumSize(QSize(46, 46));
        cell66->setMaximumSize(QSize(46, 46));
        cell66->setIconSize(QSize(45, 45));
        cell66->setFlat(true);
        cell66->setProperty("row", QVariant(6));
        cell66->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell66, 6, 6, 1, 1);

        cell67 = new Cell(centralwidget);
        cell67->setObjectName(QString::fromUtf8("cell67"));
        cell67->setMinimumSize(QSize(46, 46));
        cell67->setMaximumSize(QSize(46, 46));
        cell67->setIconSize(QSize(45, 45));
        cell67->setFlat(true);
        cell67->setProperty("row", QVariant(6));
        cell67->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell67, 6, 7, 1, 1);

        cell70 = new Cell(centralwidget);
        cell70->setObjectName(QString::fromUtf8("cell70"));
        cell70->setMinimumSize(QSize(46, 46));
        cell70->setMaximumSize(QSize(46, 46));
        cell70->setIconSize(QSize(45, 45));
        cell70->setFlat(true);
        cell70->setProperty("row", QVariant(7));
        cell70->setProperty("col", QVariant(0));

        gridLayout->addWidget(cell70, 7, 0, 1, 1);

        cell71 = new Cell(centralwidget);
        cell71->setObjectName(QString::fromUtf8("cell71"));
        cell71->setMinimumSize(QSize(46, 46));
        cell71->setMaximumSize(QSize(46, 46));
        cell71->setIconSize(QSize(45, 45));
        cell71->setFlat(true);
        cell71->setProperty("row", QVariant(7));
        cell71->setProperty("col", QVariant(1));

        gridLayout->addWidget(cell71, 7, 1, 1, 1);

        cell72 = new Cell(centralwidget);
        cell72->setObjectName(QString::fromUtf8("cell72"));
        cell72->setMinimumSize(QSize(46, 46));
        cell72->setMaximumSize(QSize(46, 46));
        cell72->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}"));
        cell72->setIconSize(QSize(45, 45));
        cell72->setFlat(true);
        cell72->setProperty("row", QVariant(7));
        cell72->setProperty("col", QVariant(2));

        gridLayout->addWidget(cell72, 7, 2, 1, 1);

        cell73 = new Cell(centralwidget);
        cell73->setObjectName(QString::fromUtf8("cell73"));
        cell73->setMinimumSize(QSize(46, 46));
        cell73->setMaximumSize(QSize(46, 46));
        cell73->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}"));
        cell73->setIconSize(QSize(45, 45));
        cell73->setFlat(true);
        cell73->setProperty("row", QVariant(7));
        cell73->setProperty("col", QVariant(3));

        gridLayout->addWidget(cell73, 7, 3, 1, 1);

        cell74 = new Cell(centralwidget);
        cell74->setObjectName(QString::fromUtf8("cell74"));
        cell74->setMinimumSize(QSize(46, 46));
        cell74->setMaximumSize(QSize(46, 46));
        cell74->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}"));
        cell74->setIconSize(QSize(45, 45));
        cell74->setFlat(true);
        cell74->setProperty("row", QVariant(7));
        cell74->setProperty("col", QVariant(4));

        gridLayout->addWidget(cell74, 7, 4, 1, 1);

        cell75 = new Cell(centralwidget);
        cell75->setObjectName(QString::fromUtf8("cell75"));
        cell75->setMinimumSize(QSize(46, 46));
        cell75->setMaximumSize(QSize(46, 46));
        cell75->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}"));
        cell75->setIconSize(QSize(45, 45));
        cell75->setFlat(true);
        cell75->setProperty("row", QVariant(7));
        cell75->setProperty("col", QVariant(5));

        gridLayout->addWidget(cell75, 7, 5, 1, 1);

        cell76 = new Cell(centralwidget);
        cell76->setObjectName(QString::fromUtf8("cell76"));
        cell76->setMinimumSize(QSize(46, 46));
        cell76->setMaximumSize(QSize(46, 46));
        cell76->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}"));
        cell76->setIconSize(QSize(45, 45));
        cell76->setFlat(true);
        cell76->setProperty("row", QVariant(7));
        cell76->setProperty("col", QVariant(6));

        gridLayout->addWidget(cell76, 7, 6, 1, 1);

        cell77 = new Cell(centralwidget);
        cell77->setObjectName(QString::fromUtf8("cell77"));
        cell77->setMinimumSize(QSize(46, 46));
        cell77->setMaximumSize(QSize(46, 46));
        cell77->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}"));
        cell77->setIconSize(QSize(45, 45));
        cell77->setFlat(true);
        cell77->setProperty("row", QVariant(7));
        cell77->setProperty("col", QVariant(7));

        gridLayout->addWidget(cell77, 7, 7, 1, 1);

        Catch->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Catch);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 24));
        menuGame = new QMenu(menubar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Catch->setMenuBar(menubar);
        statusbar = new QStatusBar(Catch);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Catch->setStatusBar(statusbar);

        menubar->addAction(menuGame->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuGame->addAction(actionNew);
        menuGame->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(Catch);

        QMetaObject::connectSlotsByName(Catch);
    } // setupUi

    void retranslateUi(QMainWindow *Catch)
    {
        Catch->setWindowTitle(QCoreApplication::translate("Catch", "Catch", nullptr));
        actionNew->setText(QCoreApplication::translate("Catch", "Novo", nullptr));
        actionQuit->setText(QCoreApplication::translate("Catch", "Sair", nullptr));
        actionAbout->setText(QCoreApplication::translate("Catch", "Sobre", nullptr));
        cell00->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell00->setText(QString());
        cell01->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell01->setText(QString());
        cell02->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell02->setText(QString());
        cell03->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell03->setText(QString());
        cell04->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell04->setText(QString());
        cell05->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell05->setText(QString());
        cell06->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell06->setText(QString());
        cell07->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell07->setText(QString());
        cell10->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell10->setText(QString());
        cell11->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell11->setText(QString());
        cell12->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell12->setText(QString());
        cell13->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell13->setText(QString());
        cell14->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell14->setText(QString());
        cell15->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell15->setText(QString());
        cell16->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell16->setText(QString());
        cell17->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell17->setText(QString());
        cell20->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell20->setText(QString());
        cell21->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell21->setText(QString());
        cell22->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell22->setText(QString());
        cell23->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell23->setText(QString());
        cell24->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell24->setText(QString());
        cell25->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell25->setText(QString());
        cell26->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell26->setText(QString());
        cell27->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell27->setText(QString());
        cell30->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell30->setText(QString());
        cell31->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell31->setText(QString());
        cell32->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell32->setText(QString());
        cell33->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell33->setText(QString());
        cell34->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell34->setText(QString());
        cell35->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell35->setText(QString());
        cell36->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell36->setText(QString());
        cell37->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell37->setText(QString());
        cell40->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell40->setText(QString());
        cell41->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell41->setText(QString());
        cell42->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell42->setText(QString());
        cell43->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell43->setText(QString());
        cell44->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell44->setText(QString());
        cell45->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell45->setText(QString());
        cell46->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell46->setText(QString());
        cell47->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell47->setText(QString());
        cell50->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell50->setText(QString());
        cell51->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell51->setText(QString());
        cell52->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell52->setText(QString());
        cell53->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell53->setText(QString());
        cell54->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell54->setText(QString());
        cell55->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell55->setText(QString());
        cell56->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell56->setText(QString());
        cell57->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell57->setText(QString());
        cell60->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell60->setText(QString());
        cell61->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell61->setText(QString());
        cell62->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell62->setText(QString());
        cell63->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell63->setText(QString());
        cell64->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell64->setText(QString());
        cell65->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell65->setText(QString());
        cell66->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell66->setText(QString());
        cell67->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell67->setText(QString());
        cell70->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell70->setText(QString());
        cell71->setStyleSheet(QCoreApplication::translate("Catch", "QPushButton {\n"
"    border: 0px;\n"
"}\n"
"\n"
"QPushButton[empty=false] {\n"
"  background-color: #808080;\n"
"}\n"
"\n"
"QPushButton[selectable=true] {\n"
"  background-color: #00ff00;\n"
"}", nullptr));
        cell71->setText(QString());
        cell72->setText(QString());
        cell73->setText(QString());
        cell74->setText(QString());
        cell75->setText(QString());
        cell76->setText(QString());
        cell77->setText(QString());
        menuGame->setTitle(QCoreApplication::translate("Catch", "Jogo", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Catch", "Ajuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Catch: public Ui_Catch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATCH_H
