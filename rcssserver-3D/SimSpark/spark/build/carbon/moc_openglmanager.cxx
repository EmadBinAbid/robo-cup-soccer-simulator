/****************************************************************************
** Meta object code from reading C++ file 'openglmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/openglmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openglmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OpenGLManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OpenGLManager[] = {
    "OpenGLManager\0\0widget\0glWidgetDestroyed(QObject*)\0"
};

void OpenGLManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OpenGLManager *_t = static_cast<OpenGLManager *>(_o);
        switch (_id) {
        case 0: _t->glWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OpenGLManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OpenGLManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenGLManager,
      qt_meta_data_OpenGLManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OpenGLManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OpenGLManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OpenGLManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGLManager))
        return static_cast<void*>(const_cast< OpenGLManager*>(this));
    return QObject::qt_metacast(_clname);
}

int OpenGLManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_GLHandle[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   10,    9,    9, 0x05,
      79,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     148,  141,    9,    9, 0x0a,
     190,  141,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLHandle[] = {
    "GLHandle\0\0widget,signal\0"
    "glStateSignal(GLWidget*,OpenGLManager::EGLStateSignal)\0"
    "glStateSignalBlocked(GLWidget*,OpenGLManager::EGLStateSignal)\0"
    "signal\0emitSignal(OpenGLManager::EGLStateSignal)\0"
    "emitSignalBlocked(OpenGLManager::EGLStateSignal)\0"
};

void GLHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GLHandle *_t = static_cast<GLHandle *>(_o);
        switch (_id) {
        case 0: _t->glStateSignal((*reinterpret_cast< GLWidget*(*)>(_a[1])),(*reinterpret_cast< OpenGLManager::EGLStateSignal(*)>(_a[2]))); break;
        case 1: _t->glStateSignalBlocked((*reinterpret_cast< GLWidget*(*)>(_a[1])),(*reinterpret_cast< OpenGLManager::EGLStateSignal(*)>(_a[2]))); break;
        case 2: _t->emitSignal((*reinterpret_cast< OpenGLManager::EGLStateSignal(*)>(_a[1]))); break;
        case 3: _t->emitSignalBlocked((*reinterpret_cast< OpenGLManager::EGLStateSignal(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GLHandle::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GLHandle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GLHandle,
      qt_meta_data_GLHandle, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLHandle::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLHandle))
        return static_cast<void*>(const_cast< GLHandle*>(this));
    return QObject::qt_metacast(_clname);
}

int GLHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void GLHandle::glStateSignal(GLWidget * _t1, OpenGLManager::EGLStateSignal _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLHandle::glStateSignalBlocked(GLWidget * _t1, OpenGLManager::EGLStateSignal _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
