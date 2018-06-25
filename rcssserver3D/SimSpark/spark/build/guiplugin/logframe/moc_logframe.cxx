/****************************************************************************
** Meta object code from reading C++ file 'logframe.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/logframe/logframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x0a,
      35,   10,    9,    9, 0x0a,
      53,   10,    9,    9, 0x0a,
      74,   10,    9,    9, 0x0a,
      93,   10,    9,    9, 0x0a,
     111,   10,    9,    9, 0x0a,
     131,   10,    9,    9, 0x0a,
     150,   10,    9,    9, 0x0a,
     168,   10,    9,    9, 0x0a,
     186,   10,    9,    9, 0x0a,
     204,   10,    9,    9, 0x0a,
     231,  225,    9,    9, 0x0a,
     250,  225,    9,    9, 0x0a,
     276,  271,    9,    9, 0x0a,
     307,  271,    9,    9, 0x0a,
     330,    9,    9,    9, 0x0a,
     353,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LogFrame[] = {
    "LogFrame\0\0state\0debugToggled(bool)\0"
    "infoToggled(bool)\0warningToggled(bool)\0"
    "errorToggled(bool)\0timeToggled(bool)\0"
    "sourceToggled(bool)\0levelToggled(bool)\0"
    "fileToggled(bool)\0lineToggled(bool)\0"
    "nameToggled(bool)\0messageToggled(bool)\0"
    "index\0outputChanged(int)\0logLevelChanged(int)\0"
    "name\0updateInstanceSetting(QString)\0"
    "updateSetting(QString)\0updateLogSourceAdded()\0"
    "cleanup()\0"
};

void LogFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogFrame *_t = static_cast<LogFrame *>(_o);
        switch (_id) {
        case 0: _t->debugToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->infoToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->warningToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->errorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->timeToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sourceToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->levelToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fileToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->lineToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->nameToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->messageToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->outputChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->logLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->updateInstanceSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->updateSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->updateLogSourceAdded(); break;
        case 16: _t->cleanup(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LogFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogFrame::staticMetaObject = {
    { &AttachableFrame::staticMetaObject, qt_meta_stringdata_LogFrame,
      qt_meta_data_LogFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogFrame))
        return static_cast<void*>(const_cast< LogFrame*>(this));
    if (!strcmp(_clname, "IMessageReceiver"))
        return static_cast< IMessageReceiver*>(const_cast< LogFrame*>(this));
    return AttachableFrame::qt_metacast(_clname);
}

int LogFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AttachableFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
