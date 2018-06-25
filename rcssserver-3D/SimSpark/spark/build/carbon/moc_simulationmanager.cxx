/****************************************************************************
** Meta object code from reading C++ file 'simulationmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/simulationmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SimulationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x05,
      56,   19,   18,   18, 0x05,
      89,   19,   18,   18, 0x05,
     114,   19,   18,   18, 0x05,
     141,   19,   18,   18, 0x05,
     168,   18,   18,   18, 0x05,
     188,   18,   18,   18, 0x05,
     223,  213,   18,   18, 0x05,
     263,  213,   18,   18, 0x05,
     302,  297,   18,   18, 0x05,
     324,  297,   18,   18, 0x05,
     346,  297,   18,   18, 0x05,
     367,  213,   18,   18, 0x05,
     395,  297,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     419,   18,   18,   18, 0x0a,
     429,  297,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SimulationManager[] = {
    "SimulationManager\0\0index\0"
    "setupListSingleEntryAdded(int)\0"
    "setupListSingleEntryRemoved(int)\0"
    "setupListEntryAdded(int)\0"
    "setupListEntryRemoved(int)\0"
    "setupListEntryChanged(int)\0"
    "setupListReloaded()\0aboutToReloadSetupList()\0"
    "name,path\0aboutToInitializeSetup(QString,QString)\0"
    "setupInitialized(QString,QString)\0"
    "name\0setupRunning(QString)\0"
    "setupStopped(QString)\0setupPaused(QString)\0"
    "setupSaved(QString,QString)\0"
    "settingChanged(QString)\0cleanup()\0"
    "updateSetting(QString)\0"
};

void SimulationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationManager *_t = static_cast<SimulationManager *>(_o);
        switch (_id) {
        case 0: _t->setupListSingleEntryAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setupListSingleEntryRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setupListEntryAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setupListEntryRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setupListEntryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setupListReloaded(); break;
        case 6: _t->aboutToReloadSetupList(); break;
        case 7: _t->aboutToInitializeSetup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->setupInitialized((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->setupRunning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setupStopped((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setupPaused((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setupSaved((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->settingChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->cleanup(); break;
        case 15: _t->updateSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SimulationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SimulationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SimulationManager,
      qt_meta_data_SimulationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SimulationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SimulationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SimulationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SimulationManager))
        return static_cast<void*>(const_cast< SimulationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SimulationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SimulationManager::setupListSingleEntryAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SimulationManager::setupListSingleEntryRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SimulationManager::setupListEntryAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SimulationManager::setupListEntryRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SimulationManager::setupListEntryChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SimulationManager::setupListReloaded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void SimulationManager::aboutToReloadSetupList()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void SimulationManager::aboutToInitializeSetup(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SimulationManager::setupInitialized(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SimulationManager::setupRunning(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SimulationManager::setupStopped(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SimulationManager::setupPaused(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SimulationManager::setupSaved(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SimulationManager::settingChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
