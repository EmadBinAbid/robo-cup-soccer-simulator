/****************************************************************************
** Meta object code from reading C++ file 'vector2x3widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/vector2x3widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vector2x3widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Vector2x3Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   16,   16,   16, 0x09,
      56,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Vector2x3Widget[] = {
    "Vector2x3Widget\0\0id\0vectorChanged(int)\0"
    "widget1Changed()\0widget2Changed()\0"
};

void Vector2x3Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Vector2x3Widget *_t = static_cast<Vector2x3Widget *>(_o);
        switch (_id) {
        case 0: _t->vectorChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->widget1Changed(); break;
        case 2: _t->widget2Changed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Vector2x3Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Vector2x3Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vector2x3Widget,
      qt_meta_data_Vector2x3Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Vector2x3Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Vector2x3Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Vector2x3Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Vector2x3Widget))
        return static_cast<void*>(const_cast< Vector2x3Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Vector2x3Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Vector2x3Widget::vectorChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
