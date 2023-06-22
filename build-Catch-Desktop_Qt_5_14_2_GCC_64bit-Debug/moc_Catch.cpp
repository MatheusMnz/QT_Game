/****************************************************************************
** Meta object code from reading C++ file 'Catch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Catch/Catch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Catch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Catch_t {
    QByteArrayData data[22];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Catch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Catch_t qt_meta_stringdata_Catch = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Catch"
QT_MOC_LITERAL(1, 6, 9), // "turnEnded"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "play"
QT_MOC_LITERAL(4, 22, 2), // "id"
QT_MOC_LITERAL(5, 25, 12), // "switchPlayer"
QT_MOC_LITERAL(6, 38, 12), // "getNeighbors"
QT_MOC_LITERAL(7, 51, 12), // "QList<Cell*>"
QT_MOC_LITERAL(8, 64, 5), // "Cell*"
QT_MOC_LITERAL(9, 70, 4), // "cell"
QT_MOC_LITERAL(10, 75, 5), // "reset"
QT_MOC_LITERAL(11, 81, 13), // "possibleMoves"
QT_MOC_LITERAL(12, 95, 3), // "bfs"
QT_MOC_LITERAL(13, 99, 13), // "QList<Cell*>&"
QT_MOC_LITERAL(14, 113, 13), // "capturedCells"
QT_MOC_LITERAL(15, 127, 9), // "showAbout"
QT_MOC_LITERAL(16, 137, 17), // "updateSelectables"
QT_MOC_LITERAL(17, 155, 4), // "over"
QT_MOC_LITERAL(18, 160, 15), // "updateStatusBar"
QT_MOC_LITERAL(19, 176, 16), // "getNeighbourCell"
QT_MOC_LITERAL(20, 193, 19), // "Player::Orientation"
QT_MOC_LITERAL(21, 213, 11) // "orientation"

    },
    "Catch\0turnEnded\0\0play\0id\0switchPlayer\0"
    "getNeighbors\0QList<Cell*>\0Cell*\0cell\0"
    "reset\0possibleMoves\0bfs\0QList<Cell*>&\0"
    "capturedCells\0showAbout\0updateSelectables\0"
    "over\0updateStatusBar\0getNeighbourCell\0"
    "Player::Orientation\0orientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Catch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   70,    2, 0x08 /* Private */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    1,   74,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    2,   79,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    1,   85,    2, 0x08 /* Private */,
      18,    0,   88,    2, 0x08 /* Private */,
      19,    2,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    0x80000000 | 7, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Int, 0x80000000 | 8, 0x80000000 | 13,    9,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    0x80000000 | 8, QMetaType::Int, 0x80000000 | 20,    4,   21,

       0        // eod
};

void Catch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Catch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->turnEnded(); break;
        case 1: _t->play((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->switchPlayer(); break;
        case 3: { QList<Cell*> _r = _t->getNeighbors((*reinterpret_cast< Cell*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<Cell*>*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->reset(); break;
        case 5: { bool _r = _t->possibleMoves();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->bfs((*reinterpret_cast< Cell*(*)>(_a[1])),(*reinterpret_cast< QList<Cell*>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->showAbout(); break;
        case 8: _t->updateSelectables((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->updateStatusBar(); break;
        case 10: { Cell* _r = _t->getNeighbourCell((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Player::Orientation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Cell**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cell* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cell* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Catch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Catch::turnEnded)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Catch::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Catch.data,
    qt_meta_data_Catch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Catch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Catch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Catch.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Catch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Catch::turnEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
