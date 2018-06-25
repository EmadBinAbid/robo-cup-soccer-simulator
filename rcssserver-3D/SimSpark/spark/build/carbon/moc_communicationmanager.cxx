/****************************************************************************
** Meta object code from reading C++ file 'communicationmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/communicationmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'communicationmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CommunicationManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      49,   22,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      93,   71,   21,   21, 0x0a,
     159,  146,   21,   21, 0x2a,
     223,  207,   21,   21, 0x0a,
     275,  268,   21,   21, 0x2a,
     339,  315,   21,   21, 0x0a,
     409,  394,   21,   21, 0x2a,
     477,  459,   21,   21, 0x0a,
     533,  524,   21,   21, 0x2a,
     600,  575,   21,   21, 0x0a,
     663,  647,   21,   21, 0x2a,
     724,  705,   21,   21, 0x0a,
     773,  763,   21,   21, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_CommunicationManager[] = {
    "CommunicationManager\0\0name\0"
    "topicCreated(QString)\0topicRemoved(QString)\0"
    "sender,topic,validPtr\0"
    "unregisterSender(const AbstractPlugin*,QString,bool)\0"
    "sender,topic\0"
    "unregisterSender(const AbstractPlugin*,QString)\0"
    "sender,validPtr\0"
    "unregisterSender(const AbstractPlugin*,bool)\0"
    "sender\0unregisterSender(const AbstractPlugin*)\0"
    "receiver,topic,validPtr\0"
    "unregisterReceiver(const AbstractPlugin*,QString,bool)\0"
    "receiver,topic\0"
    "unregisterReceiver(const AbstractPlugin*,QString)\0"
    "receiver,validPtr\0"
    "unregisterReceiver(const AbstractPlugin*,bool)\0"
    "receiver\0unregisterReceiver(const AbstractPlugin*)\0"
    "registree,topic,validPtr\0"
    "unregister(const AbstractPlugin*,QString,bool)\0"
    "registree,topic\0"
    "unregister(const AbstractPlugin*,QString)\0"
    "registree,validPtr\0"
    "unregister(const AbstractPlugin*,bool)\0"
    "registree\0unregister(const AbstractPlugin*)\0"
};

void CommunicationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CommunicationManager *_t = static_cast<CommunicationManager *>(_o);
        switch (_id) {
        case 0: _t->topicCreated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->topicRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->unregisterSender((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->unregisterSender((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->unregisterSender((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->unregisterSender((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1]))); break;
        case 6: _t->unregisterReceiver((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->unregisterReceiver((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->unregisterReceiver((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->unregisterReceiver((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1]))); break;
        case 10: _t->unregister((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->unregister((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->unregister((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->unregister((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CommunicationManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CommunicationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CommunicationManager,
      qt_meta_data_CommunicationManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CommunicationManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CommunicationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CommunicationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CommunicationManager))
        return static_cast<void*>(const_cast< CommunicationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CommunicationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void CommunicationManager::topicCreated(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CommunicationManager::topicRemoved(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
