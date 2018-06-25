/****************************************************************************
** Meta object code from reading C++ file 'simulationtask.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/simulationtask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationtask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimulationTaskMessenger[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   25,   24,   24, 0x05,
      45,   25,   24,   24, 0x05,
      58,   25,   24,   24, 0x05,
      70,   25,   24,   24, 0x05,
      84,   25,   24,   24, 0x05,
      97,   25,   24,   24, 0x05,
     122,  113,   24,   24, 0x05,
     185,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     212,   24,   24,   24, 0x0a,
     232,   24,   24,   24, 0x0a,
     254,  248,   24,   24, 0x0a,
     273,   24,   24,   24, 0x0a,
     288,   24,   24,   24, 0x0a,
     304,   24,   24,   24, 0x0a,
     321,   24,   24,   24, 0x0a,
     340,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimulationTaskMessenger[] = {
    "SimulationTaskMessenger\0\0id\0"
    "initialized(int)\0running(int)\0paused(int)\0"
    "finished(int)\0stopped(int)\0terminated(int)\0"
    "id,state\0"
    "executionStateChanged(int,SimulationTask::ETaskExecutionState)\0"
    "taskDefinitionChanged(int)\0"
    "updateInitialized()\0updateRunning()\0"
    "state\0updatePaused(bool)\0updatePaused()\0"
    "updateStopped()\0updateFinished()\0"
    "updateTerminated()\0updateDefinitionChanged()\0"
};

void SimulationTaskMessenger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationTaskMessenger *_t = static_cast<SimulationTaskMessenger *>(_o);
        switch (_id) {
        case 0: _t->initialized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->running((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->paused((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->stopped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->terminated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->executionStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SimulationTask::ETaskExecutionState(*)>(_a[2]))); break;
        case 7: _t->taskDefinitionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateInitialized(); break;
        case 9: _t->updateRunning(); break;
        case 10: _t->updatePaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->updatePaused(); break;
        case 12: _t->updateStopped(); break;
        case 13: _t->updateFinished(); break;
        case 14: _t->updateTerminated(); break;
        case 15: _t->updateDefinitionChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimulationTaskMessenger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimulationTaskMessenger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimulationTaskMessenger,
      qt_meta_data_SimulationTaskMessenger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimulationTaskMessenger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimulationTaskMessenger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimulationTaskMessenger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimulationTaskMessenger))
        return static_cast<void*>(const_cast< SimulationTaskMessenger*>(this));
    return QObject::qt_metacast(_clname);
}

int SimulationTaskMessenger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SimulationTaskMessenger::initialized(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimulationTaskMessenger::running(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimulationTaskMessenger::paused(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimulationTaskMessenger::finished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SimulationTaskMessenger::stopped(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SimulationTaskMessenger::terminated(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SimulationTaskMessenger::executionStateChanged(int _t1, SimulationTask::ETaskExecutionState _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SimulationTaskMessenger::taskDefinitionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
