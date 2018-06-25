/****************************************************************************
** Meta object code from reading C++ file 'guisettings_pluginsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/guisettings_pluginsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guisettings_pluginsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuiSettings__PluginSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   29,   28,   28, 0x0a,
      57,   28,   28,   28, 0x0a,
      75,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GuiSettings__PluginSettings[] = {
    "GuiSettings::PluginSettings\0\0name\0"
    "updateSetting(QString)\0editPluginPaths()\0"
    "editPluginFiles()\0"
};

void GuiSettings::PluginSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PluginSettings *_t = static_cast<PluginSettings *>(_o);
        switch (_id) {
        case 0: _t->updateSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->editPluginPaths(); break;
        case 2: _t->editPluginFiles(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GuiSettings::PluginSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GuiSettings::PluginSettings::staticMetaObject = {
    { &SettingsWidget::staticMetaObject, qt_meta_stringdata_GuiSettings__PluginSettings,
      qt_meta_data_GuiSettings__PluginSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiSettings::PluginSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiSettings::PluginSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiSettings::PluginSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiSettings__PluginSettings))
        return static_cast<void*>(const_cast< PluginSettings*>(this));
    return SettingsWidget::qt_metacast(_clname);
}

int GuiSettings::PluginSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
