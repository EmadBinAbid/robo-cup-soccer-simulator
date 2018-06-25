/****************************************************************************
** Meta object code from reading C++ file 'menumanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/menumanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menumanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      20,   12,   12,   12, 0x0a,
      27,   12,   12,   12, 0x0a,
      36,   12,   12,   12, 0x0a,
      48,   12,   12,   12, 0x0a,
      60,   12,   12,   12, 0x0a,
      74,   12,   12,   12, 0x0a,
      81,   12,   12,   12, 0x0a,
      96,   90,   12,   12, 0x0a,
     111,   12,   12,   12, 0x0a,
     139,   12,   12,   12, 0x0a,
     155,   12,   12,   12, 0x0a,
     172,   12,   12,   12, 0x0a,
     190,   12,   12,   12, 0x0a,
     210,   12,   12,   12, 0x0a,
     217,   12,   12,   12, 0x0a,
     225,   12,   12,   12, 0x0a,
     237,   12,   12,   12, 0x0a,
     256,   12,   12,   12, 0x0a,
     280,   12,   12,   12, 0x0a,
     303,   12,   12,   12, 0x0a,
     329,   12,   12,   12, 0x0a,
     359,  353,   12,   12, 0x0a,
     397,  381,   12,   12, 0x0a,
     463,  452,   12,   12, 0x0a,
     495,   12,   12,   12, 0x0a,
     510,   12,   12,   12, 0x0a,
     532,  524,   12,   12, 0x0a,
     550,   12,   12,   12, 0x0a,
     572,   12,   12,   12, 0x0a,
     601,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MenuManager[] = {
    "MenuManager\0\0load()\0save()\0saveAs()\0"
    "loadClean()\0saveClean()\0saveCleanAs()\0"
    "exit()\0reload()\0index\0openSetup(int)\0"
    "updateSimulationSetupList()\0runSimulation()\0"
    "stopSimulation()\0pauseSimulation()\0"
    "restartSimulation()\0help()\0about()\0"
    "whatsThis()\0sendInitMessages()\0"
    "setSparkLogLevelDebug()\0setSparkLogLevelInfo()\0"
    "setSparkLogLevelWarning()\0"
    "setSparkLogLevelError()\0level\0"
    "setSparkLogLevel(int)\0source,logLevel\0"
    "updateSparkLogLevel(SparkController*,Logger::LogLevel)\0"
    "controller\0removeSparkController(QObject*)\0"
    "showSettings()\0showPlugins()\0classId\0"
    "createPlugin(int)\0updatePluginToolBar()\0"
    "clearCreatePluginReceivers()\0cleanup()\0"
};

void MenuManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MenuManager *_t = static_cast<MenuManager *>(_o);
        switch (_id) {
        case 0: _t->load(); break;
        case 1: _t->save(); break;
        case 2: _t->saveAs(); break;
        case 3: _t->loadClean(); break;
        case 4: _t->saveClean(); break;
        case 5: _t->saveCleanAs(); break;
        case 6: _t->exit(); break;
        case 7: _t->reload(); break;
        case 8: _t->openSetup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateSimulationSetupList(); break;
        case 10: _t->runSimulation(); break;
        case 11: _t->stopSimulation(); break;
        case 12: _t->pauseSimulation(); break;
        case 13: _t->restartSimulation(); break;
        case 14: _t->help(); break;
        case 15: _t->about(); break;
        case 16: _t->whatsThis(); break;
        case 17: _t->sendInitMessages(); break;
        case 18: _t->setSparkLogLevelDebug(); break;
        case 19: _t->setSparkLogLevelInfo(); break;
        case 20: _t->setSparkLogLevelWarning(); break;
        case 21: _t->setSparkLogLevelError(); break;
        case 22: _t->setSparkLogLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->updateSparkLogLevel((*reinterpret_cast< SparkController*(*)>(_a[1])),(*reinterpret_cast< Logger::LogLevel(*)>(_a[2]))); break;
        case 24: _t->removeSparkController((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 25: _t->showSettings(); break;
        case 26: _t->showPlugins(); break;
        case 27: _t->createPlugin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->updatePluginToolBar(); break;
        case 29: _t->clearCreatePluginReceivers(); break;
        case 30: _t->cleanup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MenuManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MenuManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuManager,
      qt_meta_data_MenuManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuManager))
        return static_cast<void*>(const_cast< MenuManager*>(this));
    return QObject::qt_metacast(_clname);
}

int MenuManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
