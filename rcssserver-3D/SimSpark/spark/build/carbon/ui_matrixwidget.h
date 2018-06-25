/********************************************************************************
** Form generated from reading UI file 'matrixwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIXWIDGET_H
#define UI_MATRIXWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>
#include "typedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_MatrixWidget
{
public:
    QGridLayout *gridLayout;
    TypedLineEdit *lineEdit11;
    TypedLineEdit *lineEdit12;
    TypedLineEdit *lineEdit13;
    TypedLineEdit *lineEdit14;
    TypedLineEdit *lineEdit21;
    TypedLineEdit *lineEdit22;
    TypedLineEdit *lineEdit23;
    TypedLineEdit *lineEdit24;
    TypedLineEdit *lineEdit31;
    TypedLineEdit *lineEdit32;
    TypedLineEdit *lineEdit33;
    TypedLineEdit *lineEdit34;
    TypedLineEdit *lineEdit41;
    TypedLineEdit *lineEdit42;
    TypedLineEdit *lineEdit43;
    TypedLineEdit *lineEdit44;

    void setupUi(QWidget *MatrixWidget)
    {
        if (MatrixWidget->objectName().isEmpty())
            MatrixWidget->setObjectName(QString::fromUtf8("MatrixWidget"));
        MatrixWidget->resize(236, 116);
        MatrixWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        gridLayout = new QGridLayout(MatrixWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit11 = new TypedLineEdit(MatrixWidget);
        lineEdit11->setObjectName(QString::fromUtf8("lineEdit11"));
        lineEdit11->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit11, 0, 0, 1, 1);

        lineEdit12 = new TypedLineEdit(MatrixWidget);
        lineEdit12->setObjectName(QString::fromUtf8("lineEdit12"));
        lineEdit12->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit12, 0, 1, 1, 1);

        lineEdit13 = new TypedLineEdit(MatrixWidget);
        lineEdit13->setObjectName(QString::fromUtf8("lineEdit13"));
        lineEdit13->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit13, 0, 2, 1, 1);

        lineEdit14 = new TypedLineEdit(MatrixWidget);
        lineEdit14->setObjectName(QString::fromUtf8("lineEdit14"));
        lineEdit14->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit14, 0, 3, 1, 1);

        lineEdit21 = new TypedLineEdit(MatrixWidget);
        lineEdit21->setObjectName(QString::fromUtf8("lineEdit21"));
        lineEdit21->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit21, 1, 0, 1, 1);

        lineEdit22 = new TypedLineEdit(MatrixWidget);
        lineEdit22->setObjectName(QString::fromUtf8("lineEdit22"));
        lineEdit22->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit22, 1, 1, 1, 1);

        lineEdit23 = new TypedLineEdit(MatrixWidget);
        lineEdit23->setObjectName(QString::fromUtf8("lineEdit23"));
        lineEdit23->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit23, 1, 2, 1, 1);

        lineEdit24 = new TypedLineEdit(MatrixWidget);
        lineEdit24->setObjectName(QString::fromUtf8("lineEdit24"));
        lineEdit24->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit24, 1, 3, 1, 1);

        lineEdit31 = new TypedLineEdit(MatrixWidget);
        lineEdit31->setObjectName(QString::fromUtf8("lineEdit31"));
        lineEdit31->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit31, 2, 0, 1, 1);

        lineEdit32 = new TypedLineEdit(MatrixWidget);
        lineEdit32->setObjectName(QString::fromUtf8("lineEdit32"));
        lineEdit32->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit32, 2, 1, 1, 1);

        lineEdit33 = new TypedLineEdit(MatrixWidget);
        lineEdit33->setObjectName(QString::fromUtf8("lineEdit33"));
        lineEdit33->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit33, 2, 2, 1, 1);

        lineEdit34 = new TypedLineEdit(MatrixWidget);
        lineEdit34->setObjectName(QString::fromUtf8("lineEdit34"));
        lineEdit34->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit34, 2, 3, 1, 1);

        lineEdit41 = new TypedLineEdit(MatrixWidget);
        lineEdit41->setObjectName(QString::fromUtf8("lineEdit41"));
        lineEdit41->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit41, 3, 0, 1, 1);

        lineEdit42 = new TypedLineEdit(MatrixWidget);
        lineEdit42->setObjectName(QString::fromUtf8("lineEdit42"));
        lineEdit42->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit42, 3, 1, 1, 1);

        lineEdit43 = new TypedLineEdit(MatrixWidget);
        lineEdit43->setObjectName(QString::fromUtf8("lineEdit43"));
        lineEdit43->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit43, 3, 2, 1, 1);

        lineEdit44 = new TypedLineEdit(MatrixWidget);
        lineEdit44->setObjectName(QString::fromUtf8("lineEdit44"));
        lineEdit44->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(lineEdit44, 3, 3, 1, 1);


        retranslateUi(MatrixWidget);
        QObject::connect(MatrixWidget, SIGNAL(customContextMenuRequested(QPoint)), MatrixWidget, SLOT(showCustomContextMenu(QPoint)));

        QMetaObject::connectSlotsByName(MatrixWidget);
    } // setupUi

    void retranslateUi(QWidget *MatrixWidget)
    {
        MatrixWidget->setWindowTitle(QApplication::translate("MatrixWidget", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        MatrixWidget->setWhatsThis(QApplication::translate("MatrixWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Widget containing a matrix.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">You can invert, transpose, copy or past matrices with the context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class MatrixWidget: public Ui_MatrixWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIXWIDGET_H
