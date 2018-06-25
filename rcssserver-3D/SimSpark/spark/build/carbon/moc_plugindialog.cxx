/****************************************************************************
** Meta object code from reading C++ file 'plugindialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/plugindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   14,   13,   13, 0x05,
      58,   14,   13,   13, 0x05,
      94,   85,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     126,  120,   13,   13, 0x0a,
     155,   13,   13,   13, 0x0a,
     177,   13,   13,   13, 0x0a,
     202,   13,   13,   13, 0x0a,
     230,   13,   13,   13, 0x0a,
     252,   13,   13,   13, 0x0a,
     280,  120,   13,   13, 0x0a,
     312,  120,   13,   13, 0x0a,
     343,   13,   13,   13, 0x0a,
     360,   13,   13,   13, 0x0a,
     380,  120,   13,   13, 0x0a,
     406,  120,   13,   13, 0x0a,
     435,   13,   13,   13, 0x0a,
     450,   13,   13,   13, 0x0a,
     468,   13,   13,   13, 0x0a,
     483,   13,   13,   13, 0x0a,
     499,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PluginDialog[] = {
    "PluginDialog\0\0pluginId,className\0"
    "pluginAdded(int,QString)\0"
    "pluginDeleted(int,QString)\0pluginId\0"
    "pluginCaptionChanged(int)\0value\0"
    "changePluginCaption(QString)\0"
    "changePluginCaption()\0changePluginParameters()\0"
    "changeNewPluginParameters()\0"
    "updatePluginCaption()\0updateAttachmentPointList()\0"
    "changeNewPluginCaption(QString)\0"
    "changeAttachmentPoint(QString)\0"
    "unchoosePlugin()\0unchooseNewPlugin()\0"
    "choosePlugin(QModelIndex)\0"
    "chooseNewPlugin(QModelIndex)\0"
    "createPlugin()\0createExtension()\0"
    "deletePlugin()\0addPluginFile()\0"
    "addPluginDirectory()\0"
};

void PluginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginDialog *_t = static_cast<PluginDialog *>(_o);
        switch (_id) {
        case 0: _t->pluginAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->pluginDeleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->pluginCaptionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changePluginCaption((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->changePluginCaption(); break;
        case 5: _t->changePluginParameters(); break;
        case 6: _t->changeNewPluginParameters(); break;
        case 7: _t->updatePluginCaption(); break;
        case 8: _t->updateAttachmentPointList(); break;
        case 9: _t->changeNewPluginCaption((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->changeAttachmentPoint((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->unchoosePlugin(); break;
        case 12: _t->unchooseNewPlugin(); break;
        case 13: _t->choosePlugin((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 14: _t->chooseNewPlugin((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 15: _t->createPlugin(); break;
        case 16: _t->createExtension(); break;
        case 17: _t->deletePlugin(); break;
        case 18: _t->addPluginFile(); break;
        case 19: _t->addPluginDirectory(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PluginDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PluginDialog,
      qt_meta_data_PluginDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginDialog))
        return static_cast<void*>(const_cast< PluginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PluginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void PluginDialog::pluginAdded(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginDialog::pluginDeleted(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PluginDialog::pluginCaptionChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
static const uint qt_meta_data_PluginTableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PluginTableView[] = {
    "PluginTableView\0"
};

void PluginTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData PluginTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PluginTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_PluginTableView,
      qt_meta_data_PluginTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginTableView))
        return static_cast<void*>(const_cast< PluginTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int PluginTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
