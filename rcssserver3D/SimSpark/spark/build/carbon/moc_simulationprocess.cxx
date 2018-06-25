/****************************************************************************
** Meta object code from reading C++ file 'simulationprocess.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/simulationprocess.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimulationProcess[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      39,   18,   18,   18, 0x0a,
      80,   60,   18,   18, 0x0a,
     126,  121,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SimulationProcess[] = {
    "SimulationProcess\0\0fetchErrorMessage()\0"
    "fetchOutputMessage()\0exitCode,exitStatus\0"
    "updateFinished(int,QProcess::ExitStatus)\0"
    "type\0logError(QProcess::ProcessError)\0"
};

void SimulationProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationProcess *_t = static_cast<SimulationProcess *>(_o);
        switch (_id) {
        case 0: _t->fetchErrorMessage(); break;
        case 1: _t->fetchOutputMessage(); break;
        case 2: _t->updateFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->logError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimulationProcess::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimulationProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_SimulationProcess,
      qt_meta_data_SimulationProcess, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimulationProcess::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimulationProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimulationProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimulationProcess))
        return static_cast<void*>(const_cast< SimulationProcess*>(this));
    if (!strcmp(_clname, "SimulationTask"))
        return static_cast< SimulationTask*>(const_cast< SimulationProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int SimulationProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
