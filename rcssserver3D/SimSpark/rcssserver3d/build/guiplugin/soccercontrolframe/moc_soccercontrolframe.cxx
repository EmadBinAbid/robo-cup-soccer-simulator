/****************************************************************************
** Meta object code from reading C++ file 'soccercontrolframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/soccercontrolframe/soccercontrolframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soccercontrolframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SoccerFrameUpdateControl[] = {

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
      26,   25,   25,   25, 0x05,
      44,   25,   25,   25, 0x05,
      60,   25,   25,   25, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_SoccerFrameUpdateControl[] = {
    "SoccerFrameUpdateControl\0\0stateStartCycle()\0"
    "stateEndCycle()\0stateWaitCycle()\0"
};

void SoccerFrameUpdateControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SoccerFrameUpdateControl *_t = static_cast<SoccerFrameUpdateControl *>(_o);
        switch (_id) {
        case 0: _t->stateStartCycle(); break;
        case 1: _t->stateEndCycle(); break;
        case 2: _t->stateWaitCycle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SoccerFrameUpdateControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SoccerFrameUpdateControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SoccerFrameUpdateControl,
      qt_meta_data_SoccerFrameUpdateControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SoccerFrameUpdateControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SoccerFrameUpdateControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SoccerFrameUpdateControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoccerFrameUpdateControl))
        return static_cast<void*>(const_cast< SoccerFrameUpdateControl*>(this));
    if (!strcmp(_clname, "SparkCommand::CommandQueue"))
        return static_cast< SparkCommand::CommandQueue*>(const_cast< SoccerFrameUpdateControl*>(this));
    return QObject::qt_metacast(_clname);
}

int SoccerFrameUpdateControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SoccerFrameUpdateControl::stateStartCycle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SoccerFrameUpdateControl::stateEndCycle()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SoccerFrameUpdateControl::stateWaitCycle()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
static const uint qt_meta_data_SoccerControlFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x09,
      91,   80,   19,   19, 0x09,
     128,   19,   19,   19, 0x09,
     146,   19,   19,   19, 0x0a,
     160,   19,   19,   19, 0x0a,
     176,   19,   19,   19, 0x0a,
     198,   19,   19,   19, 0x0a,
     213,   19,   19,   19, 0x0a,
     229,   19,   19,   19, 0x0a,
     246,   19,   19,   19, 0x0a,
     263,   19,   19,   19, 0x0a,
     284,   19,   19,   19, 0x0a,
     311,  305,   19,   19, 0x0a,
     331,   19,   19,   19, 0x0a,
     348,   19,   19,   19, 0x0a,
     358,   19,   19,   19, 0x0a,
     373,  305,   19,   19, 0x0a,
     391,   19,   19,   19, 0x0a,
     405,   19,   19,   19, 0x0a,
     423,   19,   19,   19, 0x0a,
     438,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SoccerControlFrame[] = {
    "SoccerControlFrame\0\0server\0"
    "updateServerCreated(boost::shared_ptr<ServerThread>)\0"
    "controller\0updateSparkRunning(SparkController*)\0"
    "onCycleFinished()\0readyUpdate()\0"
    "updateDisplay()\0updatePlayerDisplay()\0"
    "editGameTime()\0resetGameTime()\0"
    "editTeam1Goals()\0editTeam2Goals()\0"
    "editTeam1Penalties()\0editTeam2Penalties()\0"
    "index\0selectPlayMode(int)\0changePlayMode()\0"
    "kickOff()\0clearPlayers()\0selectPlayer(int)\0"
    "editBattery()\0editTemperature()\0"
    "resetBattery()\0resetTemperature()\0"
};

void SoccerControlFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SoccerControlFrame *_t = static_cast<SoccerControlFrame *>(_o);
        switch (_id) {
        case 0: _t->updateServerCreated((*reinterpret_cast< boost::shared_ptr<ServerThread>(*)>(_a[1]))); break;
        case 1: _t->updateSparkRunning((*reinterpret_cast< SparkController*(*)>(_a[1]))); break;
        case 2: _t->onCycleFinished(); break;
        case 3: _t->readyUpdate(); break;
        case 4: _t->updateDisplay(); break;
        case 5: _t->updatePlayerDisplay(); break;
        case 6: _t->editGameTime(); break;
        case 7: _t->resetGameTime(); break;
        case 8: _t->editTeam1Goals(); break;
        case 9: _t->editTeam2Goals(); break;
        case 10: _t->editTeam1Penalties(); break;
        case 11: _t->editTeam2Penalties(); break;
        case 12: _t->selectPlayMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->changePlayMode(); break;
        case 14: _t->kickOff(); break;
        case 15: _t->clearPlayers(); break;
        case 16: _t->selectPlayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->editBattery(); break;
        case 18: _t->editTemperature(); break;
        case 19: _t->resetBattery(); break;
        case 20: _t->resetTemperature(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SoccerControlFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SoccerControlFrame::staticMetaObject = {
    { &AttachableFrame::staticMetaObject, qt_meta_stringdata_SoccerControlFrame,
      qt_meta_data_SoccerControlFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SoccerControlFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SoccerControlFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SoccerControlFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SoccerControlFrame))
        return static_cast<void*>(const_cast< SoccerControlFrame*>(this));
    return AttachableFrame::qt_metacast(_clname);
}

int SoccerControlFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AttachableFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
