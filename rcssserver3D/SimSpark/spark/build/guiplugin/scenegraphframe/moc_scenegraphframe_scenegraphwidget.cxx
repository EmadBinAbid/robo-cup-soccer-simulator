/****************************************************************************
** Meta object code from reading C++ file 'scenegraphframe_scenegraphwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/scenegraphframe/scenegraphframe_scenegraphwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scenegraphframe_scenegraphwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SceneGraphFrameUtil__SceneGraphWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x0a,
      57,   38,   38,   38, 0x0a,
      71,   38,   38,   38, 0x0a,
      87,   83,   38,   38, 0x0a,
     123,  115,   38,   38, 0x0a,
     157,  151,   38,   38, 0x0a,
     193,  182,   38,   38, 0x0a,
     217,  182,   38,   38, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SceneGraphFrameUtil__SceneGraphWidget[] = {
    "SceneGraphFrameUtil::SceneGraphWidget\0"
    "\0updateModelData()\0collapseAll()\0"
    "expandAll()\0pos\0showItemContextMenu(QPoint)\0"
    "command\0onItemContextMenuClick(int)\0"
    "index\0onItemClick(QModelIndex)\0"
    "id,success\0onImportScene(int,bool)\0"
    "onRemoveLeaf(int,bool)\0"
};

void SceneGraphFrameUtil::SceneGraphWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SceneGraphWidget *_t = static_cast<SceneGraphWidget *>(_o);
        switch (_id) {
        case 0: _t->updateModelData(); break;
        case 1: _t->collapseAll(); break;
        case 2: _t->expandAll(); break;
        case 3: _t->showItemContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->onItemContextMenuClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onItemClick((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 6: _t->onImportScene((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->onRemoveLeaf((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SceneGraphFrameUtil::SceneGraphWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SceneGraphFrameUtil::SceneGraphWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SceneGraphFrameUtil__SceneGraphWidget,
      qt_meta_data_SceneGraphFrameUtil__SceneGraphWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SceneGraphFrameUtil::SceneGraphWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SceneGraphFrameUtil::SceneGraphWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SceneGraphFrameUtil::SceneGraphWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SceneGraphFrameUtil__SceneGraphWidget))
        return static_cast<void*>(const_cast< SceneGraphWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SceneGraphFrameUtil::SceneGraphWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
