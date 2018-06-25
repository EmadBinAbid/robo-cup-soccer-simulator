/****************************************************************************
** Meta object code from reading C++ file 'sparkcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/sparkcontroller.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sparkcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SparkController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x05,
      59,   17,   16,   16, 0x05,
      91,   17,   16,   16, 0x05,
     138,  121,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     200,  189,   16,   16, 0x09,
     252,  189,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SparkController[] = {
    "SparkController\0\0controller\0"
    "sparkRunning(SparkController*)\0"
    "sparkFinished(SparkController*)\0"
    "sparkPaused(SparkController*)\0"
    "controller,level\0"
    "logLevelChanged(SparkController*,Logger::LogLevel)\0"
    "id,success\0"
    "checkReleaseRuntimeAccessDelayedExclusive(int,bool)\0"
    "checkReleaseRuntimeAccessDelayed(int,bool)\0"
};

void SparkController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SparkController *_t = static_cast<SparkController *>(_o);
        switch (_id) {
        case 0: _t->sparkRunning((*reinterpret_cast< SparkController*(*)>(_a[1]))); break;
        case 1: _t->sparkFinished((*reinterpret_cast< SparkController*(*)>(_a[1]))); break;
        case 2: _t->sparkPaused((*reinterpret_cast< SparkController*(*)>(_a[1]))); break;
        case 3: _t->logLevelChanged((*reinterpret_cast< SparkController*(*)>(_a[1])),(*reinterpret_cast< Logger::LogLevel(*)>(_a[2]))); break;
        case 4: _t->checkReleaseRuntimeAccessDelayedExclusive((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->checkReleaseRuntimeAccessDelayed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SparkController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SparkController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SparkController,
      qt_meta_data_SparkController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SparkController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SparkController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SparkController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SparkController))
        return static_cast<void*>(const_cast< SparkController*>(this));
    return QObject::qt_metacast(_clname);
}

int SparkController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SparkController::sparkRunning(SparkController * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SparkController::sparkFinished(SparkController * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SparkController::sparkPaused(SparkController * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SparkController::logLevelChanged(SparkController * _t1, Logger::LogLevel _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
