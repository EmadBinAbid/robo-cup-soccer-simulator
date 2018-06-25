/****************************************************************************
** Meta object code from reading C++ file 'scenegraphframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/scenegraphframe/scenegraphframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scenegraphframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SceneGraphFrame[] = {

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
      22,   17,   16,   16, 0x0a,
      51,   40,   16,   16, 0x0a,
      67,   16,   16,   16, 0x0a,
      83,   16,   16,   16, 0x0a,
     105,   16,   16,   16, 0x0a,
     131,  122,   16,   16, 0x0a,
     156,  122,   16,   16, 0x0a,
     198,  183,   16,   16, 0x0a,
     260,  254,   16,   16, 0x0a,
     297,  254,   16,   16, 0x0a,
     335,   16,   16,   16, 0x0a,
     348,   16,   16,   16, 0x0a,
     362,   16,   16,   16, 0x0a,
     380,  374,   16,   16, 0x0a,
     398,   16,   16,   16, 0x0a,
     410,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SceneGraphFrame[] = {
    "SceneGraphFrame\0\0path\0pickLeaf(QString)\0"
    "localindex\0chooseTask(int)\0updateCurrent()\0"
    "updatePropertyFrame()\0updateTaskList()\0"
    "index,id\0updateTaskAdded(int,int)\0"
    "updateTaskRemoved(int,int)\0index,id,state\0"
    "updateTask(int,int,SimulationTask::ETaskExecutionState)\0"
    "spark\0updateSparkRunning(SparkController*)\0"
    "updateSparkFinished(SparkController*)\0"
    "updateData()\0collapseAll()\0expandAll()\0"
    "state\0toggleTimer(bool)\0timerTick()\0"
    "cleanup()\0"
};

void SceneGraphFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SceneGraphFrame *_t = static_cast<SceneGraphFrame *>(_o);
        switch (_id) {
        case 0: _t->pickLeaf((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->chooseTask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->updateCurrent(); break;
        case 3: _t->updatePropertyFrame(); break;
        case 4: _t->updateTaskList(); break;
        case 5: _t->updateTaskAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateTaskRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->updateTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< SimulationTask::ETaskExecutionState(*)>(_a[3]))); break;
        case 8: _t->updateSparkRunning((*reinterpret_cast< SparkController*(*)>(_a[1]))); break;
        case 9: _t->updateSparkFinished((*reinterpret_cast< SparkController*(*)>(_a[1]))); break;
        case 10: _t->updateData(); break;
        case 11: _t->collapseAll(); break;
        case 12: _t->expandAll(); break;
        case 13: _t->toggleTimer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->timerTick(); break;
        case 15: _t->cleanup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SceneGraphFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SceneGraphFrame::staticMetaObject = {
    { &AttachableFrame::staticMetaObject, qt_meta_stringdata_SceneGraphFrame,
      qt_meta_data_SceneGraphFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SceneGraphFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SceneGraphFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SceneGraphFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SceneGraphFrame))
        return static_cast<void*>(const_cast< SceneGraphFrame*>(this));
    return AttachableFrame::qt_metacast(_clname);
}

int SceneGraphFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
