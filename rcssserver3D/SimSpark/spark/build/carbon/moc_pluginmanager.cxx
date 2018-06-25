/****************************************************************************
** Meta object code from reading C++ file 'pluginmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/pluginmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   15,   14,   14, 0x05,
      53,   44,   14,   14, 0x05,
      77,   70,   14,   14, 0x05,
     106,   44,   14,   14, 0x05,
     133,  125,   14,   14, 0x05,
     157,  125,   14,   14, 0x05,
     183,   14,   14,   14, 0x05,
     220,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     257,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PluginManager[] = {
    "PluginManager\0\0name\0settingChanged(QString)\0"
    "pluginId\0pluginAdded(int)\0plugin\0"
    "pluginAdded(AbstractPlugin*)\0"
    "pluginRemoved(int)\0classId\0"
    "pluginOfClassAdded(int)\0"
    "pluginOfClassRemoved(int)\0"
    "aboutToDeletePlugin(AbstractPlugin*)\0"
    "aboutToRemovePlugin(AbstractPlugin*)\0"
    "updateSetting(QString)\0"
};

void PluginManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginManager *_t = static_cast<PluginManager *>(_o);
        switch (_id) {
        case 0: _t->settingChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->pluginAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pluginAdded((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 3: _t->pluginRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->pluginOfClassAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pluginOfClassRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->aboutToDeletePlugin((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 7: _t->aboutToRemovePlugin((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 8: _t->updateSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PluginManager,
      qt_meta_data_PluginManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginManager))
        return static_cast<void*>(const_cast< PluginManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PluginManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PluginManager::settingChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginManager::pluginAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PluginManager::pluginAdded(AbstractPlugin * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PluginManager::pluginRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PluginManager::pluginOfClassAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PluginManager::pluginOfClassRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PluginManager::aboutToDeletePlugin(AbstractPlugin * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PluginManager::aboutToRemovePlugin(AbstractPlugin * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
static const uint qt_meta_data_PluginTableModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x05,
      81,   63,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     136,  130,   17,   17, 0x0a,
     155,   17,   17,   17, 0x0a,
     184,  175,   17,   17, 0x0a,
     207,  175,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PluginTableModel[] = {
    "PluginTableModel\0\0plugin\0"
    "pluginCaptionChanged(AbstractPlugin*)\0"
    "plugin,attachment\0"
    "pluginAttachmentChanged(AbstractPlugin*,QString)\0"
    "index\0updateCaption(int)\0updatePluginAdded()\0"
    "pluginId\0updatePluginAdded(int)\0"
    "updatePluginRemoved(int)\0"
};

void PluginTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginTableModel *_t = static_cast<PluginTableModel *>(_o);
        switch (_id) {
        case 0: _t->pluginCaptionChanged((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 1: _t->pluginAttachmentChanged((*reinterpret_cast< AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->updateCaption((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updatePluginAdded(); break;
        case 4: _t->updatePluginAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updatePluginRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginTableModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_PluginTableModel,
      qt_meta_data_PluginTableModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginTableModel))
        return static_cast<void*>(const_cast< PluginTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int PluginTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
void PluginTableModel::pluginCaptionChanged(AbstractPlugin * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginTableModel::pluginAttachmentChanged(AbstractPlugin * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
