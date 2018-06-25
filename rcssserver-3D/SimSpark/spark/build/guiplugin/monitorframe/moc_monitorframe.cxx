/****************************************************************************
** Meta object code from reading C++ file 'monitorframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/monitorframe/monitorframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitorframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MonitorFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   13,   13,   13, 0x0a,
      74,   59,   13,   13, 0x0a,
      88,   13,   13,   13, 0x2a,
     112,   98,   13,   13, 0x0a,
     174,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MonitorFrame[] = {
    "MonitorFrame\0\0path\0renderNodePick(QString)\0"
    "initRendering()\0fromDestructor\0"
    "cleanup(bool)\0cleanup()\0widget,signal\0"
    "receiveGLStateSignal(GLWidget*,OpenGLManager::EGLStateSignal)\0"
    "toggleReadyState()\0"
};

void MonitorFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MonitorFrame *_t = static_cast<MonitorFrame *>(_o);
        switch (_id) {
        case 0: _t->renderNodePick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->initRendering(); break;
        case 2: _t->cleanup((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->cleanup(); break;
        case 4: _t->receiveGLStateSignal((*reinterpret_cast< GLWidget*(*)>(_a[1])),(*reinterpret_cast< OpenGLManager::EGLStateSignal(*)>(_a[2]))); break;
        case 5: _t->toggleReadyState(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MonitorFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MonitorFrame::staticMetaObject = {
    { &AttachableFrame::staticMetaObject, qt_meta_stringdata_MonitorFrame,
      qt_meta_data_MonitorFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MonitorFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MonitorFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MonitorFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MonitorFrame))
        return static_cast<void*>(const_cast< MonitorFrame*>(this));
    return AttachableFrame::qt_metacast(_clname);
}

int MonitorFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AttachableFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MonitorFrame::renderNodePick(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
