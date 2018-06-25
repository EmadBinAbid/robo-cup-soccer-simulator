/****************************************************************************
** Meta object code from reading C++ file 'simulationsetup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/simulationsetup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationsetup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimulationSetup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   17,   16,   16, 0x0a,
      77,   16,   16,   16, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_SimulationSetup[] = {
    "SimulationSetup\0\0field\0dataChanged(ESetupData)\0"
    "updateDataChanged(ESetupData)\0"
    "updateDataChanged()\0"
};

void SimulationSetup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationSetup *_t = static_cast<SimulationSetup *>(_o);
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< ESetupData(*)>(_a[1]))); break;
        case 1: _t->updateDataChanged((*reinterpret_cast< ESetupData(*)>(_a[1]))); break;
        case 2: _t->updateDataChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimulationSetup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimulationSetup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimulationSetup,
      qt_meta_data_SimulationSetup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimulationSetup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimulationSetup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimulationSetup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimulationSetup))
        return static_cast<void*>(const_cast< SimulationSetup*>(this));
    return QObject::qt_metacast(_clname);
}

int SimulationSetup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SimulationSetup::dataChanged(ESetupData _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
