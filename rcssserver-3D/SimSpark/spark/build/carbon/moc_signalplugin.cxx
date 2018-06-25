/****************************************************************************
** Meta object code from reading C++ file 'signalplugin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/signalplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SignalPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      23,   13,   13,   13, 0x05,
      34,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SignalPlugin[] = {
    "SignalPlugin\0\0paused()\0finished()\0"
    "running()\0"
};

void SignalPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SignalPlugin *_t = static_cast<SignalPlugin *>(_o);
        switch (_id) {
        case 0: _t->paused(); break;
        case 1: _t->finished(); break;
        case 2: _t->running(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SignalPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SignalPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SignalPlugin,
      qt_meta_data_SignalPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SignalPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SignalPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SignalPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SignalPlugin))
        return static_cast<void*>(const_cast< SignalPlugin*>(this));
    if (!strcmp(_clname, "AbstractPlugin"))
        return static_cast< AbstractPlugin*>(const_cast< SignalPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int SignalPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SignalPlugin::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SignalPlugin::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SignalPlugin::running()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
