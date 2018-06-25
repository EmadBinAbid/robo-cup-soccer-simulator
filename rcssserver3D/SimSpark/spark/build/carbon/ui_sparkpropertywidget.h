/********************************************************************************
** Form generated from reading UI file 'sparkpropertywidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPARKPROPERTYWIDGET_H
#define UI_SPARKPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "sparkpropertytablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_PropertyWidget
{
public:
    QVBoxLayout *verticalLayout;
    SparkProperty::PropertyTableWidget *propertyTableWidget;
    QFrame *propertyEditFrame;

    void setupUi(QWidget *PropertyWidget)
    {
        if (PropertyWidget->objectName().isEmpty())
            PropertyWidget->setObjectName(QString::fromUtf8("PropertyWidget"));
        PropertyWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(PropertyWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        propertyTableWidget = new SparkProperty::PropertyTableWidget(PropertyWidget);
        if (propertyTableWidget->columnCount() < 2)
            propertyTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        propertyTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        propertyTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        propertyTableWidget->setObjectName(QString::fromUtf8("propertyTableWidget"));
        propertyTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        propertyTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        propertyTableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        propertyTableWidget->horizontalHeader()->setDefaultSectionSize(120);
        propertyTableWidget->horizontalHeader()->setMinimumSectionSize(40);
        propertyTableWidget->horizontalHeader()->setStretchLastSection(true);
        propertyTableWidget->verticalHeader()->setDefaultSectionSize(20);
        propertyTableWidget->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout->addWidget(propertyTableWidget);

        propertyEditFrame = new QFrame(PropertyWidget);
        propertyEditFrame->setObjectName(QString::fromUtf8("propertyEditFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(propertyEditFrame->sizePolicy().hasHeightForWidth());
        propertyEditFrame->setSizePolicy(sizePolicy);
        propertyEditFrame->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(propertyEditFrame);


        retranslateUi(PropertyWidget);

        QMetaObject::connectSlotsByName(PropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *PropertyWidget)
    {
        PropertyWidget->setWindowTitle(QApplication::translate("PropertyWidget", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = propertyTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PropertyWidget", "Property", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = propertyTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PropertyWidget", "Value", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PropertyWidget: public Ui_PropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPARKPROPERTYWIDGET_H
