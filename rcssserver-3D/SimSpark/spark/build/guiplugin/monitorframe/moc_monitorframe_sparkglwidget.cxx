/****************************************************************************
** Meta object code from reading C++ file 'monitorframe_sparkglwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../guiplugin/monitorframe/monitorframe_sparkglwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitorframe_sparkglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MonitorFrameUtil__SparkGLWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   33,   32,   32, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MonitorFrameUtil__SparkGLWidget[] = {
    "MonitorFrameUtil::SparkGLWidget\0\0path\0"
    "renderNodePick(QString)\0"
};

void MonitorFrameUtil::SparkGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SparkGLWidget *_t = static_cast<SparkGLWidget *>(_o);
        switch (_id) {
        case 0: _t->renderNodePick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MonitorFrameUtil::SparkGLWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MonitorFrameUtil::SparkGLWidget::staticMetaObject = {
    { &GLWidget::staticMetaObject, qt_meta_stringdata_MonitorFrameUtil__SparkGLWidget,
      qt_meta_data_MonitorFrameUtil__SparkGLWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MonitorFrameUtil::SparkGLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MonitorFrameUtil::SparkGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MonitorFrameUtil::SparkGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MonitorFrameUtil__SparkGLWidget))
        return static_cast<void*>(const_cast< SparkGLWidget*>(this));
    return GLWidget::qt_metacast(_clname);
}

int MonitorFrameUtil::SparkGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MonitorFrameUtil::SparkGLWidget::renderNodePick(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
