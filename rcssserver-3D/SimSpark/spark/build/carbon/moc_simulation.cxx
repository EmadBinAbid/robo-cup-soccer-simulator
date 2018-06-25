/****************************************************************************
** Meta object code from reading C++ file 'simulation.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/simulation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Simulation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      26,   11,   11,   11, 0x05,
      36,   11,   11,   11, 0x05,
      55,   11,   11,   11, 0x05,
      65,   11,   11,   11, 0x05,
      79,   74,   11,   11, 0x05,
     103,   94,   11,   11, 0x05,
     122,   94,   11,   11, 0x05,
     143,   11,   11,   11, 0x05,
     176,  161,   11,   11, 0x05,
     238,   94,   11,   11, 0x05,
     269,   11,   11,   11, 0x05,
     296,  289,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     352,  343,   11,   11, 0x0a,
     415,  412,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Simulation[] = {
    "Simulation\0\0initialized()\0running()\0"
    "aboutToBeStopped()\0stopped()\0paused()\0"
    "path\0saved(QString)\0index,id\0"
    "taskAdded(int,int)\0taskRemoved(int,int)\0"
    "taskListChanged()\0index,id,state\0"
    "taskStateChanged(int,int,SimulationTask::ETaskExecutionState)\0"
    "taskDefinitionChanged(int,int)\0"
    "pluginListChanged()\0server\0"
    "serverCreated(boost::shared_ptr<ServerThread>)\0"
    "id,state\0"
    "onTaskStateChanged(int,SimulationTask::ETaskExecutionState)\0"
    "id\0onTaskDefinitionChanged(int)\0"
};

void Simulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Simulation *_t = static_cast<Simulation *>(_o);
        switch (_id) {
        case 0: _t->initialized(); break;
        case 1: _t->running(); break;
        case 2: _t->aboutToBeStopped(); break;
        case 3: _t->stopped(); break;
        case 4: _t->paused(); break;
        case 5: _t->saved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->taskAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->taskRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->taskListChanged(); break;
        case 9: _t->taskStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< SimulationTask::ETaskExecutionState(*)>(_a[3]))); break;
        case 10: _t->taskDefinitionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->pluginListChanged(); break;
        case 12: _t->serverCreated((*reinterpret_cast< boost::shared_ptr<ServerThread>(*)>(_a[1]))); break;
        case 13: _t->onTaskStateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SimulationTask::ETaskExecutionState(*)>(_a[2]))); break;
        case 14: _t->onTaskDefinitionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Simulation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Simulation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Simulation,
      qt_meta_data_Simulation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Simulation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Simulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Simulation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Simulation))
        return static_cast<void*>(const_cast< Simulation*>(this));
    return QObject::qt_metacast(_clname);
}

int Simulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Simulation::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Simulation::running()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Simulation::aboutToBeStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Simulation::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Simulation::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Simulation::saved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Simulation::taskAdded(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Simulation::taskRemoved(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Simulation::taskListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void Simulation::taskStateChanged(int _t1, int _t2, SimulationTask::ETaskExecutionState _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Simulation::taskDefinitionChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Simulation::pluginListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void Simulation::serverCreated(boost::shared_ptr<ServerThread> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
