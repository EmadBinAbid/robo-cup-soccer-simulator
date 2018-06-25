/****************************************************************************
** Meta object code from reading C++ file 'matrixwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/matrixwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matrixwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MatrixWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      30,   13,   13,   13, 0x0a,
      55,   45,   13,   13, 0x0a,
      74,   13,   13,   13, 0x2a,
      89,   13,   13,   13, 0x0a,
      98,   13,   13,   13, 0x0a,
     110,   13,   13,   13, 0x0a,
     129,   13,   13,   13, 0x0a,
     146,   13,   13,   13, 0x0a,
     159,   13,   13,   13, 0x0a,
     171,   13,   13,   13, 0x0a,
     178,   13,   13,   13, 0x0a,
     190,  186,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MatrixWidget[] = {
    "MatrixWidget\0\0matrixChanged()\0"
    "createMatrix()\0skipfocus\0updateFields(bool)\0"
    "updateFields()\0invert()\0transpose()\0"
    "inverseTranspose()\0identityMatrix()\0"
    "zeroMatrix()\0oneMatrix()\0copy()\0paste()\0"
    "pos\0showCustomContextMenu(QPoint)\0"
};

void MatrixWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MatrixWidget *_t = static_cast<MatrixWidget *>(_o);
        switch (_id) {
        case 0: _t->matrixChanged(); break;
        case 1: _t->createMatrix(); break;
        case 2: _t->updateFields((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateFields(); break;
        case 4: _t->invert(); break;
        case 5: _t->transpose(); break;
        case 6: _t->inverseTranspose(); break;
        case 7: _t->identityMatrix(); break;
        case 8: _t->zeroMatrix(); break;
        case 9: _t->oneMatrix(); break;
        case 10: _t->copy(); break;
        case 11: _t->paste(); break;
        case 12: _t->showCustomContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MatrixWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MatrixWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MatrixWidget,
      qt_meta_data_MatrixWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MatrixWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MatrixWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MatrixWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MatrixWidget))
        return static_cast<void*>(const_cast< MatrixWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MatrixWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MatrixWidget::matrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
