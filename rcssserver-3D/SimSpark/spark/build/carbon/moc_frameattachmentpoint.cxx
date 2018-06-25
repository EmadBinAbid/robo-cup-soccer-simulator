/****************************************************************************
** Meta object code from reading C++ file 'frameattachmentpoint.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/frameattachmentpoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frameattachmentpoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrameAttachmentPoint[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   22,   21,   21, 0x0a,
      69,   55,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrameAttachmentPoint[] = {
    "FrameAttachmentPoint\0\0position\0"
    "showContextMenu(QPoint)\0child,command\0"
    "onContextMenuClick(int,int)\0"
};

void FrameAttachmentPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FrameAttachmentPoint *_t = static_cast<FrameAttachmentPoint *>(_o);
        switch (_id) {
        case 0: _t->showContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 1: _t->onContextMenuClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FrameAttachmentPoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FrameAttachmentPoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FrameAttachmentPoint,
      qt_meta_data_FrameAttachmentPoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrameAttachmentPoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrameAttachmentPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrameAttachmentPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrameAttachmentPoint))
        return static_cast<void*>(const_cast< FrameAttachmentPoint*>(this));
    return QObject::qt_metacast(_clname);
}

int FrameAttachmentPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
