/********************************************************************************
** Form generated from reading UI file 'vector3widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTOR3WIDGET_H
#define UI_VECTOR3WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "typedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_Vector3Widget
{
public:
    QGridLayout *gridLayout;
    TypedLineEdit *lineEdit11;
    TypedLineEdit *lineEdit12;
    TypedLineEdit *lineEdit13;

    void setupUi(QWidget *Vector3Widget)
    {
        if (Vector3Widget->objectName().isEmpty())
            Vector3Widget->setObjectName(QString::fromUtf8("Vector3Widget"));
        Vector3Widget->resize(236, 38);
        Vector3Widget->setContextMenuPolicy(Qt::CustomContextMenu);
        gridLayout = new QGridLayout(Vector3Widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit11 = new TypedLineEdit(Vector3Widget);
        lineEdit11->setObjectName(QString::fromUtf8("lineEdit11"));
        lineEdit11->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit11, 0, 0, 1, 1);

        lineEdit12 = new TypedLineEdit(Vector3Widget);
        lineEdit12->setObjectName(QString::fromUtf8("lineEdit12"));
        lineEdit12->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit12, 0, 1, 1, 1);

        lineEdit13 = new TypedLineEdit(Vector3Widget);
        lineEdit13->setObjectName(QString::fromUtf8("lineEdit13"));
        lineEdit13->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit13, 0, 2, 1, 1);


        retranslateUi(Vector3Widget);

        QMetaObject::connectSlotsByName(Vector3Widget);
    } // setupUi

    void retranslateUi(QWidget *Vector3Widget)
    {
        Vector3Widget->setWindowTitle(QApplication::translate("Vector3Widget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Vector3Widget->setWhatsThis(QApplication::translate("Vector3Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Widget containing a 3d vector.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">You can invert, copy or past vectors with the context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class Vector3Widget: public Ui_Vector3Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTOR3WIDGET_H
