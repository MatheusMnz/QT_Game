/****************************************************************************
** Meta object code from reading C++ file 'Cell.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Catch/Cell.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cell.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cell_t {
    QByteArrayData data[23];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cell_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cell_t qt_meta_stringdata_Cell = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Cell"
QT_MOC_LITERAL(1, 5, 9), // "mouseOver"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "over"
QT_MOC_LITERAL(4, 21, 12), // "stateChanged"
QT_MOC_LITERAL(5, 34, 11), // "Cell::State"
QT_MOC_LITERAL(6, 46, 5), // "state"
QT_MOC_LITERAL(7, 52, 13), // "playerChanged"
QT_MOC_LITERAL(8, 66, 7), // "Player*"
QT_MOC_LITERAL(9, 74, 6), // "player"
QT_MOC_LITERAL(10, 81, 5), // "reset"
QT_MOC_LITERAL(11, 87, 10), // "updateCell"
QT_MOC_LITERAL(12, 98, 3), // "row"
QT_MOC_LITERAL(13, 102, 3), // "col"
QT_MOC_LITERAL(14, 106, 5), // "empty"
QT_MOC_LITERAL(15, 112, 10), // "selectable"
QT_MOC_LITERAL(16, 123, 7), // "blocked"
QT_MOC_LITERAL(17, 131, 8), // "captured"
QT_MOC_LITERAL(18, 140, 5), // "State"
QT_MOC_LITERAL(19, 146, 5), // "Empty"
QT_MOC_LITERAL(20, 152, 10), // "Selectable"
QT_MOC_LITERAL(21, 163, 7), // "Blocked"
QT_MOC_LITERAL(22, 171, 8) // "Captured"

    },
    "Cell\0mouseOver\0\0over\0stateChanged\0"
    "Cell::State\0state\0playerChanged\0Player*\0"
    "player\0reset\0updateCell\0row\0col\0empty\0"
    "selectable\0blocked\0captured\0State\0"
    "Empty\0Selectable\0Blocked\0Captured"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cell[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   50, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   48,    2, 0x0a /* Public */,
      11,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Int, 0x00095103,
       6, 0x80000000 | 5, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      14, QMetaType::Bool, 0x00095001,
      15, QMetaType::Bool, 0x00095001,
      16, QMetaType::Bool, 0x00095001,
      17, QMetaType::Bool, 0x00095001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      18,   18, 0x0,    4,   87,

 // enum data: key, value
      19, uint(Cell::Empty),
      20, uint(Cell::Selectable),
      21, uint(Cell::Blocked),
      22, uint(Cell::Captured),

       0        // eod
};

void Cell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Cell *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseOver((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< Cell::State(*)>(_a[1]))); break;
        case 2: _t->playerChanged((*reinterpret_cast< Player*(*)>(_a[1]))); break;
        case 3: _t->reset(); break;
        case 4: _t->updateCell(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Player* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Cell::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell::mouseOver)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Cell::*)(Cell::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Cell::*)(Player * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Cell::playerChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Player* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Cell *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->row(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->col(); break;
        case 2: *reinterpret_cast< Cell::State*>(_v) = _t->state(); break;
        case 3: *reinterpret_cast< Player**>(_v) = _t->player(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isEmpty(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSelectable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isBlocked(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isCaptured(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Cell *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRow(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCol(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setState(*reinterpret_cast< Cell::State*>(_v)); break;
        case 3: _t->setPlayer(*reinterpret_cast< Player**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cell::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_Cell.data,
    qt_meta_data_Cell,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Cell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cell.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int Cell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cell::mouseOver(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cell::stateChanged(Cell::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cell::playerChanged(Player * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
