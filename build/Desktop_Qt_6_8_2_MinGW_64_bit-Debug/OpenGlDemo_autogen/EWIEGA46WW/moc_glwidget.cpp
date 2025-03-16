/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../glwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8GlWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8GlWidgetE = QtMocHelpers::stringData(
    "GlWidget",
    "xRotationChanged",
    "",
    "angle",
    "yRotationChanged",
    "zRotationChanged",
    "setXRotation",
    "setYRotation",
    "setZRotation",
    "setRed",
    "value",
    "setGreen",
    "setBlue",
    "setAlpha"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8GlWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    1,   77,    2, 0x06,    3 /* Public */,
       5,    1,   80,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   83,    2, 0x0a,    7 /* Public */,
       7,    1,   86,    2, 0x0a,    9 /* Public */,
       8,    1,   89,    2, 0x0a,   11 /* Public */,
       9,    1,   92,    2, 0x0a,   13 /* Public */,
      11,    1,   95,    2, 0x0a,   15 /* Public */,
      12,    1,   98,    2, 0x0a,   17 /* Public */,
      13,    1,  101,    2, 0x0a,   19 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject GlWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN8GlWidgetE.offsetsAndSizes,
    qt_meta_data_ZN8GlWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8GlWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GlWidget, std::true_type>,
        // method 'xRotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'yRotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zRotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setXRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setYRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setZRotation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setGreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBlue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setAlpha'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void GlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GlWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->xRotationChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->yRotationChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->zRotationChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setXRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setYRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setZRotation((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setRed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setGreen((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setBlue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->setAlpha((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (GlWidget::*)(int );
            if (_q_method_type _q_method = &GlWidget::xRotationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (GlWidget::*)(int );
            if (_q_method_type _q_method = &GlWidget::yRotationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (GlWidget::*)(int );
            if (_q_method_type _q_method = &GlWidget::zRotationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *GlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8GlWidgetE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int GlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GlWidget::xRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlWidget::yRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GlWidget::zRotationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
