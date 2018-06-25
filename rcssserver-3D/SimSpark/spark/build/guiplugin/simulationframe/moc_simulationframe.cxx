/****************************************************************************
** Meta object code from reading C++ file 'simulationframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/simulationframe/simulationframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimulationFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      38,   32,   16,   16, 0x0a,
      58,   16,   16,   16, 0x0a,
      68,   16,   16,   16, 0x0a,
      79,   16,   16,   16, 0x0a,
      92,   16,   16,   16, 0x0a,
     104,   16,   16,   16, 0x0a,
     119,   16,   16,   16, 0x0a,
     135,   16,   16,   16, 0x0a,
     149,   16,   16,   16, 0x0a,
     175,  166,   16,   16, 0x0a,
     217,  202,   16,   16, 0x0a,
     280,  166,   16,   16, 0x0a,
     305,  166,   16,   16, 0x0a,
     339,  332,   16,   16, 0x0a,
     386,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimulationFrame[] = {
    "SimulationFrame\0\0updateHeader()\0index\0"
    "chooseTaskType(int)\0addTask()\0runTasks()\0"
    "pauseTasks()\0stopTasks()\0restartTasks()\0"
    "collapseTasks()\0expandTasks()\0"
    "updateTaskList()\0index,id\0"
    "updateTaskDisplay(int,int)\0index,id,state\0"
    "updateTaskDisplay(int,int,SimulationTask::ETaskExecutionState)\0"
    "updateTaskAdded(int,int)\0"
    "updateTaskRemoved(int,int)\0widget\0"
    "chooseWidget(SimulationFrameUtil::TaskWidget*)\0"
    "cleanup()\0"
};

void SimulationFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationFrame *_t = static_cast<SimulationFrame *>(_o);
        switch (_id) {
        case 0: _t->updateHeader(); break;
        case 1: _t->chooseTaskType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addTask(); break;
        case 3: _t->runTasks(); break;
        case 4: _t->pauseTasks(); break;
        case 5: _t->stopTasks(); break;
        case 6: _t->restartTasks(); break;
        case 7: _t->collapseTasks(); break;
        case 8: _t->expandTasks(); break;
        case 9: _t->updateTaskList(); break;
        case 10: _t->updateTaskDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->updateTaskDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< SimulationTask::ETaskExecutionState(*)>(_a[3]))); break;
        case 12: _t->updateTaskAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->updateTaskRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->chooseWidget((*reinterpret_cast< SimulationFrameUtil::TaskWidget*(*)>(_a[1]))); break;
        case 15: _t->cleanup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimulationFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimulationFrame::staticMetaObject = {
    { &AttachableFrame::staticMetaObject, qt_meta_stringdata_SimulationFrame,
      qt_meta_data_SimulationFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimulationFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimulationFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimulationFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimulationFrame))
        return static_cast<void*>(const_cast< SimulationFrame*>(this));
    return AttachableFrame::qt_metacast(_clname);
}

int SimulationFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AttachableFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
