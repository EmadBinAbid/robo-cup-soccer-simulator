/****************************************************************************
** Meta object code from reading C++ file 'vector4widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/vector4widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vector4widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Vector4Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   14,   14,   14, 0x0a,
      56,   46,   14,   14, 0x0a,
      75,   14,   14,   14, 0x2a,
      90,   14,   14,   14, 0x0a,
     101,   14,   14,   14, 0x0a,
     108,   14,   14,   14, 0x0a,
     115,   14,   14,   14, 0x0a,
     127,  123,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Vector4Widget[] = {
    "Vector4Widget\0\0vectorChanged()\0"
    "createVector()\0skipfocus\0updateFields(bool)\0"
    "updateFields()\0negative()\0null()\0"
    "copy()\0paste()\0pos\0showCustomContextMenu(QPoint)\0"
};

void Vector4Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Vector4Widget *_t = static_cast<Vector4Widget *>(_o);
        switch (_id) {
        case 0: _t->vectorChanged(); break;
        case 1: _t->createVector(); break;
        case 2: _t->updateFields((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateFields(); break;
        case 4: _t->negative(); break;
        case 5: _t->null(); break;
        case 6: _t->copy(); break;
        case 7: _t->paste(); break;
        case 8: _t->showCustomContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Vector4Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Vector4Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Vector4Widget,
      qt_meta_data_Vector4Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Vector4Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Vector4Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Vector4Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Vector4Widget))
        return static_cast<void*>(const_cast< Vector4Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Vector4Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Vector4Widget::vectorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
