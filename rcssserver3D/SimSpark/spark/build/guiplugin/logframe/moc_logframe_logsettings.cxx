/****************************************************************************
** Meta object code from reading C++ file 'logframe_logsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/logframe/logframe_logsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logframe_logsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LogFrameUtil__LogSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   27,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LogFrameUtil__LogSettings[] = {
    "LogFrameUtil::LogSettings\0\0name\0"
    "updateSetting(QString)\0"
};

void LogFrameUtil::LogSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LogSettings *_t = static_cast<LogSettings *>(_o);
        switch (_id) {
        case 0: _t->updateSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LogFrameUtil::LogSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LogFrameUtil::LogSettings::staticMetaObject = {
    { &SettingsWidget::staticMetaObject, qt_meta_stringdata_LogFrameUtil__LogSettings,
      qt_meta_data_LogFrameUtil__LogSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LogFrameUtil::LogSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LogFrameUtil::LogSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LogFrameUtil::LogSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LogFrameUtil__LogSettings))
        return static_cast<void*>(const_cast< LogSettings*>(this));
    return SettingsWidget::qt_metacast(_clname);
}

int LogFrameUtil::LogSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
