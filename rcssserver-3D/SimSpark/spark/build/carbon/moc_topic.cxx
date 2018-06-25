/****************************************************************************
** Meta object code from reading C++ file 'topic.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/topic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'topic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Topic[] = {

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
      14,    7,    6,    6, 0x05,
      57,   48,    6,    6, 0x05,
     109,   93,    6,    6, 0x05,
     156,    7,    6,    6, 0x25,
     216,  198,    6,    6, 0x05,
     265,   48,    6,    6, 0x25,
     331,  309,    6,    6, 0x05,
     411,  309,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
     504,  494,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Topic[] = {
    "Topic\0\0sender\0registeredSender(AbstractPlugin*)\0"
    "receiver\0registeredReceiver(AbstractPlugin*)\0"
    "sender,validPtr\0"
    "unregisteredSender(const AbstractPlugin*,bool)\0"
    "unregisteredSender(const AbstractPlugin*)\0"
    "receiver,validPtr\0"
    "unregisteredReceiver(const AbstractPlugin*,bool)\0"
    "unregisteredReceiver(const AbstractPlugin*)\0"
    "sender,receiver,topic\0"
    "connected(const AbstractPlugin*,const AbstractPlugin*,boost::shared_pt"
    "r<Topic>)\0"
    "disconnected(const AbstractPlugin*,const AbstractPlugin*,boost::shared"
    "_ptr<Topic>)\0"
    "registree\0updateObjectDeleted(QObject*)\0"
};

void Topic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Topic *_t = static_cast<Topic *>(_o);
        switch (_id) {
        case 0: _t->registeredSender((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 1: _t->registeredReceiver((*reinterpret_cast< AbstractPlugin*(*)>(_a[1]))); break;
        case 2: _t->unregisteredSender((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->unregisteredSender((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1]))); break;
        case 4: _t->unregisteredReceiver((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->unregisteredReceiver((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1]))); break;
        case 6: _t->connected((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const AbstractPlugin*(*)>(_a[2])),(*reinterpret_cast< boost::shared_ptr<Topic>(*)>(_a[3]))); break;
        case 7: _t->disconnected((*reinterpret_cast< const AbstractPlugin*(*)>(_a[1])),(*reinterpret_cast< const AbstractPlugin*(*)>(_a[2])),(*reinterpret_cast< boost::shared_ptr<Topic>(*)>(_a[3]))); break;
        case 8: _t->updateObjectDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Topic::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Topic::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Topic,
      qt_meta_data_Topic, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Topic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Topic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Topic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Topic))
        return static_cast<void*>(const_cast< Topic*>(this));
    return QObject::qt_metacast(_clname);
}

int Topic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Topic::registeredSender(AbstractPlugin * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Topic::registeredReceiver(AbstractPlugin * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Topic::unregisteredSender(const AbstractPlugin * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void Topic::unregisteredReceiver(const AbstractPlugin * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void Topic::connected(const AbstractPlugin * _t1, const AbstractPlugin * _t2, boost::shared_ptr<Topic> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Topic::disconnected(const AbstractPlugin * _t1, const AbstractPlugin * _t2, boost::shared_ptr<Topic> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
