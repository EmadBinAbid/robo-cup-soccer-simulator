/****************************************************************************
** Meta object code from reading C++ file 'pluginthread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/pluginthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x0a,
      30,   13,   13,   13, 0x0a,
      45,   13,   13,   13, 0x0a,
      69,   62,   13,   13, 0x0a,
     105,   62,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PluginThread[] = {
    "PluginThread\0\0pluginRunning()\0"
    "pluginPaused()\0pluginFinished()\0plugin\0"
    "updatePluginRemove(AbstractPlugin*)\0"
    "updatePluginDelete(AbstractPlugin*)\0"
};

void PluginThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginThread *_t = static_cast<PluginThread *>(_o);
        switch (_id) {
        case 0: _t->pluginRunning(); break;
        case 1: _t->pluginPaused(); break;
        case 2: _t->pluginFinished(); break;
        case 3: _t->updatePluginRemove((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 4: _t->updatePluginDelete((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginThread::staticMetaObject = {
    { &SimulationThread::staticMetaObject, qt_meta_stringdata_PluginThread,
      qt_meta_data_PluginThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginThread))
        return static_cast<void*>(const_cast< PluginThread*>(this));
    return SimulationThread::qt_metacast(_clname);
}

int PluginThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimulationThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
