/****************************************************************************
** Meta object code from reading C++ file 'attachableframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/attachableframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'attachableframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AttachableFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      26,   16,   16,   16, 0x05,
      37,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   47,   16,   16, 0x0a,
      70,   47,   16,   16, 0x0a,
      87,   47,   16,   16, 0x0a,
     107,   47,   16,   16, 0x0a,
     125,   47,   16,   16, 0x0a,
     156,  143,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AttachableFrame[] = {
    "AttachableFrame\0\0paused()\0finished()\0"
    "running()\0text\0logDebug(QString)\0"
    "logInfo(QString)\0logWarning(QString)\0"
    "logError(QString)\0logFatal(QString)\0"
    "port,message\0sendMessage(int,QString)\0"
};

void AttachableFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AttachableFrame *_t = static_cast<AttachableFrame *>(_o);
        switch (_id) {
        case 0: _t->paused(); break;
        case 1: _t->finished(); break;
        case 2: _t->running(); break;
        case 3: _t->logDebug((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->logInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->logWarning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->logError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->logFatal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sendMessage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AttachableFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AttachableFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AttachableFrame,
      qt_meta_data_AttachableFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AttachableFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AttachableFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AttachableFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AttachableFrame))
        return static_cast<void*>(const_cast< AttachableFrame*>(this));
    if (!strcmp(_clname, "AbstractPlugin"))
        return static_cast< AbstractPlugin*>(const_cast< AttachableFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int AttachableFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
void AttachableFrame::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AttachableFrame::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AttachableFrame::running()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
