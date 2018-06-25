/****************************************************************************
** Meta object code from reading C++ file 'sparkpropertywidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/sparkpropertywidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sparkpropertywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SparkProperty__PropertyWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x0a,
      79,   54,   30,   30, 0x0a,
     145,  140,   30,   30, 0x0a,
     187,  181,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SparkProperty__PropertyWidget[] = {
    "SparkProperty::PropertyWidget\0\0"
    "updateFromEditWidget()\0currentItem,previousItem\0"
    "currentTableItemChanged(QTableWidgetItem*,QTableWidgetItem*)\0"
    "item\0tableItemChanged(QTableWidgetItem*)\0"
    "index\0onPropertyChanged(int)\0"
};

void SparkProperty::PropertyWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyWidget *_t = static_cast<PropertyWidget *>(_o);
        switch (_id) {
        case 0: _t->updateFromEditWidget(); break;
        case 1: _t->currentTableItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 2: _t->tableItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->onPropertyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SparkProperty::PropertyWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SparkProperty::PropertyWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SparkProperty__PropertyWidget,
      qt_meta_data_SparkProperty__PropertyWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SparkProperty::PropertyWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SparkProperty::PropertyWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SparkProperty::PropertyWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SparkProperty__PropertyWidget))
        return static_cast<void*>(const_cast< PropertyWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int SparkProperty::PropertyWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
