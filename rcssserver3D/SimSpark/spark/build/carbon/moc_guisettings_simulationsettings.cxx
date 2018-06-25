/****************************************************************************
** Meta object code from reading C++ file 'guisettings_simulationsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../carbon/guisettings_simulationsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guisettings_simulationsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GuiSettings__SimulationSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   33,   32,   32, 0x0a,
      61,   32,   32,   32, 0x0a,
      83,   32,   32,   32, 0x0a,
     105,   32,   32,   32, 0x0a,
     123,   32,   32,   32, 0x0a,
     141,   32,   32,   32, 0x0a,
     158,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GuiSettings__SimulationSettings[] = {
    "GuiSettings::SimulationSettings\0\0name\0"
    "updateSetting(QString)\0editExecutablePaths()\0"
    "editExecutableFiles()\0editScriptPaths()\0"
    "editScriptFiles()\0editSetupPaths()\0"
    "editSetupFiles()\0"
};

void GuiSettings::SimulationSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SimulationSettings *_t = static_cast<SimulationSettings *>(_o);
        switch (_id) {
        case 0: _t->updateSetting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->editExecutablePaths(); break;
        case 2: _t->editExecutableFiles(); break;
        case 3: _t->editScriptPaths(); break;
        case 4: _t->editScriptFiles(); break;
        case 5: _t->editSetupPaths(); break;
        case 6: _t->editSetupFiles(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GuiSettings::SimulationSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GuiSettings::SimulationSettings::staticMetaObject = {
    { &SettingsWidget::staticMetaObject, qt_meta_stringdata_GuiSettings__SimulationSettings,
      qt_meta_data_GuiSettings__SimulationSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GuiSettings::SimulationSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GuiSettings::SimulationSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GuiSettings::SimulationSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GuiSettings__SimulationSettings))
        return static_cast<void*>(const_cast< SimulationSettings*>(this));
    return SettingsWidget::qt_metacast(_clname);
}

int GuiSettings::SimulationSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
