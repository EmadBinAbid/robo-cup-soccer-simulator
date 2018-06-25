/****************************************************************************
** Meta object code from reading C++ file 'sparkpropertycontrol.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/sparkpropertycontrol.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sparkpropertycontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SparkProperty__PropertyControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   32,   31,   31, 0x09,
      94,   32,   31,   31, 0x09,
     164,  151,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SparkProperty__PropertyControl[] = {
    "SparkProperty::PropertyControl\0\0prop\0"
    "acceptChange(boost::shared_ptr<SparkProperty::Property>)\0"
    "rejectChange(boost::shared_ptr<SparkProperty::Property>)\0"
    "prop,success\0"
    "updated(boost::shared_ptr<SparkProperty::Property>,bool)\0"
};

void SparkProperty::PropertyControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyControl *_t = static_cast<PropertyControl *>(_o);
        switch (_id) {
        case 0: _t->acceptChange((*reinterpret_cast< boost::shared_ptr<SparkProperty::Property>(*)>(_a[1]))); break;
        case 1: _t->rejectChange((*reinterpret_cast< boost::shared_ptr<SparkProperty::Property>(*)>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast< boost::shared_ptr<SparkProperty::Property>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SparkProperty::PropertyControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SparkProperty::PropertyControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SparkProperty__PropertyControl,
      qt_meta_data_SparkProperty__PropertyControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SparkProperty::PropertyControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SparkProperty::PropertyControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SparkProperty::PropertyControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SparkProperty__PropertyControl))
        return static_cast<void*>(const_cast< PropertyControl*>(this));
    return QObject::qt_metacast(_clname);
}

int SparkProperty::PropertyControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
