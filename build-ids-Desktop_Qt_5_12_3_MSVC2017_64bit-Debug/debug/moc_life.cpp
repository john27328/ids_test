/****************************************************************************
** Meta object code from reading C++ file 'life.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ids/life.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'life.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Life_t {
    QByteArrayData data[12];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Life_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Life_t qt_meta_stringdata_Life = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Life"
QT_MOC_LITERAL(1, 5, 11), // "updateFrame"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 13), // "stateSaveBCGR"
QT_MOC_LITERAL(4, 32, 11), // "lifeStartOk"
QT_MOC_LITERAL(5, 44, 9), // "startLife"
QT_MOC_LITERAL(6, 54, 8), // "stopLife"
QT_MOC_LITERAL(7, 63, 10), // "initCamera"
QT_MOC_LITERAL(8, 74, 14), // "saveBackground"
QT_MOC_LITERAL(9, 89, 1), // "n"
QT_MOC_LITERAL(10, 91, 21), // "setSubtractBackground"
QT_MOC_LITERAL(11, 113, 5) // "value"

    },
    "Life\0updateFrame\0\0stateSaveBCGR\0"
    "lifeStartOk\0startLife\0stopLife\0"
    "initCamera\0saveBackground\0n\0"
    "setSubtractBackground\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Life[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       4,    0,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   59,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    1,   62,    2, 0x0a /* Public */,
      10,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void Life::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Life *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateFrame(); break;
        case 1: _t->stateSaveBCGR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->lifeStartOk(); break;
        case 3: _t->startLife(); break;
        case 4: _t->stopLife(); break;
        case 5: _t->initCamera(); break;
        case 6: _t->saveBackground((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSubtractBackground((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Life::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Life::updateFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Life::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Life::stateSaveBCGR)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Life::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Life::lifeStartOk)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Life::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Life.data,
    qt_meta_data_Life,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Life::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Life::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Life.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Life::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Life::updateFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Life::stateSaveBCGR(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Life::lifeStartOk()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
