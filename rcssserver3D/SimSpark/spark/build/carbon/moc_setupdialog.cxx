/****************************************************************************
** Meta object code from reading C++ file 'setupdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/setupdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setupdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DefineSetupDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   19,   18,   18, 0x0a,
      50,   41,   18,   18, 0x0a,
      75,   67,   18,   18, 0x0a,
      95,   18,   18,   18, 0x2a,
     108,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DefineSetupDialog[] = {
    "DefineSetupDialog\0\0name\0setName(QString)\0"
    "filepath\0setFile(QString)\0message\0"
    "setMessage(QString)\0setMessage()\0"
    "loadFile()\0"
};

void DefineSetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DefineSetupDialog *_t = static_cast<DefineSetupDialog *>(_o);
        switch (_id) {
        case 0: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setMessage(); break;
        case 4: _t->loadFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DefineSetupDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DefineSetupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DefineSetupDialog,
      qt_meta_data_DefineSetupDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DefineSetupDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DefineSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DefineSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DefineSetupDialog))
        return static_cast<void*>(const_cast< DefineSetupDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DefineSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
