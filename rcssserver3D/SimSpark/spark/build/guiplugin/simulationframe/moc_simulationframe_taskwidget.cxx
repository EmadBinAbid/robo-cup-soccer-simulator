/****************************************************************************
** Meta object code from reading C++ file 'simulationframe_taskwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/simulationframe/simulationframe_taskwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationframe_taskwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimulationFrameUtil__TaskWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      46,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      62,   52,   32,   32, 0x0a,
      82,   32,   32,   32, 0x2a,
      98,   32,   32,   32, 0x0a,
     121,  115,   32,   32, 0x0a,
     176,  170,   32,   32, 0x0a,
     206,  200,   32,   32, 0x0a,
     225,   32,   32,   32, 0x0a,
     238,  200,   32,   32, 0x0a,
     258,   32,   32,   32, 0x0a,
     272,  200,   32,   32, 0x0a,
     293,   32,   32,   32, 0x0a,
     308,  200,   32,   32, 0x0a,
     328,   32,   32,   32, 0x0a,
     346,  342,   32,   32, 0x0a,
     377,  372,   32,   32, 0x0a,
     416,  342,   32,   32, 0x0a,
     443,  372,   32,   32, 0x0a,
     483,   32,   32,   32, 0x0a,
     499,   32,   32,   32, 0x0a,
     524,  512,   32,   32, 0x0a,
     539,   32,   32,   32, 0x2a,
     550,   32,   32,   32, 0x0a,
     561,   32,   32,   32, 0x0a,
     575,  572,   32,   32, 0x0a,
     591,   32,   32,   32, 0x0a,
     614,  115,   32,   32, 0x0a,
     633,   32,   32,   32, 0x0a,
     650,  115,   32,   32, 0x0a,
     665,  115,   32,   32, 0x0a,
     690,  686,   32,   32, 0x0a,
     719,  686,   32,   32, 0x0a,
     749,  686,   32,   32, 0x0a,
     784,  778,   32,   32, 0x0a,
     817,  572,   32,   32, 0x0a,
     846,  778,   32,   32, 0x0a,
     880,  572,   32,   32, 0x0a,
     910,  778,   32,   32, 0x0a,
     943,  572,   32,   32, 0x0a,
     972,  686,   32,   32, 0x0a,
    1005,  778,   32,   32, 0x0a,
    1042,  572,   32,   32, 0x0a,
    1075,  686,   32,   32, 0x0a,
    1109,  778,   32,   32, 0x0a,
    1147,  572,   32,   32, 0x0a,
    1181,  686,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimulationFrameUtil__TaskWidget[] = {
    "SimulationFrameUtil::TaskWidget\0\0"
    "chooseThisWidget()\0updateAll\0"
    "updateDisplay(bool)\0updateDisplay()\0"
    "updateListSize()\0state\0"
    "updateState(SimulationTask::ETaskExecutionState)\0"
    "index\0changeTaskPriority(int)\0value\0"
    "checkName(QString)\0changeName()\0"
    "checkFirst(QString)\0changeFirst()\0"
    "checkSecond(QString)\0changeSecond()\0"
    "checkThird(QString)\0changeThird()\0row\0"
    "chooseFirstListEntry(int)\0item\0"
    "changeFirstListEntry(QListWidgetItem*)\0"
    "chooseSecondListEntry(int)\0"
    "changeSecondListEntry(QListWidgetItem*)\0"
    "toggleRunning()\0deleteTask()\0unique_name\0"
    "copyTask(bool)\0copyTask()\0stopTask()\0"
    "loadTask()\0id\0onLoadTask(int)\0"
    "clearActionReceivers()\0toggleDetail(bool)\0"
    "toggleLongInfo()\0showInfo(bool)\0"
    "showLoadButton(bool)\0pos\0"
    "showFirstContextMenu(QPoint)\0"
    "showSecondContextMenu(QPoint)\0"
    "showThirdContextMenu(QPoint)\0entry\0"
    "onFirstContextMenuClick(QString)\0"
    "onFirstContextMenuClick(int)\0"
    "onSecondContextMenuClick(QString)\0"
    "onSecondContextMenuClick(int)\0"
    "onThirdContextMenuClick(QString)\0"
    "onThirdContextMenuClick(int)\0"
    "showFirstListContextMenu(QPoint)\0"
    "onFirstListContextMenuClick(QString)\0"
    "onFirstListContextMenuClick(int)\0"
    "showSecondListContextMenu(QPoint)\0"
    "onSecondListContextMenuClick(QString)\0"
    "onSecondListContextMenuClick(int)\0"
    "showWidgetContextMenu(QPoint)\0"
};

void SimulationFrameUtil::TaskWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TaskWidget *_t = static_cast<TaskWidget *>(_o);
        switch (_id) {
        case 0: _t->chooseThisWidget(); break;
        case 1: _t->updateDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateDisplay(); break;
        case 3: _t->updateListSize(); break;
        case 4: _t->updateState((*reinterpret_cast< SimulationTask::ETaskExecutionState(*)>(_a[1]))); break;
        case 5: _t->changeTaskPriority((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->checkName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->changeName(); break;
        case 8: _t->checkFirst((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->changeFirst(); break;
        case 10: _t->checkSecond((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->changeSecond(); break;
        case 12: _t->checkThird((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->changeThird(); break;
        case 14: _t->chooseFirstListEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->changeFirstListEntry((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 16: _t->chooseSecondListEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->changeSecondListEntry((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 18: _t->toggleRunning(); break;
        case 19: _t->deleteTask(); break;
        case 20: _t->copyTask((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->copyTask(); break;
        case 22: _t->stopTask(); break;
        case 23: _t->loadTask(); break;
        case 24: _t->onLoadTask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->clearActionReceivers(); break;
        case 26: _t->toggleDetail((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->toggleLongInfo(); break;
        case 28: _t->showInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->showLoadButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->showFirstContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 31: _t->showSecondContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 32: _t->showThirdContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 33: _t->onFirstContextMenuClick((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->onFirstContextMenuClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->onSecondContextMenuClick((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->onSecondContextMenuClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->onThirdContextMenuClick((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->onThirdContextMenuClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->showFirstListContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 40: _t->onFirstListContextMenuClick((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->onFirstListContextMenuClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->showSecondListContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 43: _t->onSecondListContextMenuClick((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->onSecondListContextMenuClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->showWidgetContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimulationFrameUtil::TaskWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimulationFrameUtil::TaskWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SimulationFrameUtil__TaskWidget,
      qt_meta_data_SimulationFrameUtil__TaskWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimulationFrameUtil::TaskWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimulationFrameUtil::TaskWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimulationFrameUtil::TaskWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimulationFrameUtil__TaskWidget))
        return static_cast<void*>(const_cast< TaskWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SimulationFrameUtil::TaskWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 46)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 46;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
