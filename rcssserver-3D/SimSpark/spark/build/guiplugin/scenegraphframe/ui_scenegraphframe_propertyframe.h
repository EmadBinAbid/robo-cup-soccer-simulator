/********************************************************************************
** Form generated from reading UI file 'scenegraphframe_propertyframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEGRAPHFRAME_PROPERTYFRAME_H
#define UI_SCENEGRAPHFRAME_PROPERTYFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropertyFrame
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *propertyWidgetContainer;

    void setupUi(QFrame *PropertyFrame)
    {
        if (PropertyFrame->objectName().isEmpty())
            PropertyFrame->setObjectName(QString::fromUtf8("PropertyFrame"));
        PropertyFrame->resize(400, 300);
        PropertyFrame->setFrameShape(QFrame::StyledPanel);
        PropertyFrame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(PropertyFrame);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        propertyWidgetContainer = new QWidget(PropertyFrame);
        propertyWidgetContainer->setObjectName(QString::fromUtf8("propertyWidgetContainer"));

        verticalLayout->addWidget(propertyWidgetContainer);


        retranslateUi(PropertyFrame);

        QMetaObject::connectSlotsByName(PropertyFrame);
    } // setupUi

    void retranslateUi(QFrame *PropertyFrame)
    {
        PropertyFrame->setWindowTitle(QApplication::translate("PropertyFrame", "Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        propertyWidgetContainer->setWhatsThis(QApplication::translate("PropertyFrame", "The property area displays properties of the currently selected scene graph node.\n"
"The amount, type and interaction capabilities of the properties in this list can be extended with a gui plugin. \n"
"See the system documentation or wiki for more information.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class PropertyFrame: public Ui_PropertyFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEGRAPHFRAME_PROPERTYFRAME_H
