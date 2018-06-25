/********************************************************************************
** Form generated from reading UI file 'guisimplelayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISIMPLELAYOUT_H
#define UI_GUISIMPLELAYOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiSimpleLayoutClass
{
public:
    QWidget *leftWidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter_3;
    QFrame *leftFrame;
    QFrame *rightFrame;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GuiSimpleLayoutClass)
    {
        if (GuiSimpleLayoutClass->objectName().isEmpty())
            GuiSimpleLayoutClass->setObjectName(QString::fromUtf8("GuiSimpleLayoutClass"));
        GuiSimpleLayoutClass->resize(1380, 711);
        leftWidget = new QWidget(GuiSimpleLayoutClass);
        leftWidget->setObjectName(QString::fromUtf8("leftWidget"));
        gridLayout_3 = new QGridLayout(leftWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter_3 = new QSplitter(leftWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        leftFrame = new QFrame(splitter_3);
        leftFrame->setObjectName(QString::fromUtf8("leftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy);
        leftFrame->setFrameShape(QFrame::StyledPanel);
        leftFrame->setFrameShadow(QFrame::Raised);
        splitter_3->addWidget(leftFrame);
        rightFrame = new QFrame(splitter_3);
        rightFrame->setObjectName(QString::fromUtf8("rightFrame"));
        sizePolicy.setHeightForWidth(rightFrame->sizePolicy().hasHeightForWidth());
        rightFrame->setSizePolicy(sizePolicy);
        rightFrame->setFrameShape(QFrame::NoFrame);
        rightFrame->setFrameShadow(QFrame::Raised);
        rightFrame->setLineWidth(0);
        splitter_3->addWidget(rightFrame);

        gridLayout_3->addWidget(splitter_3, 0, 0, 1, 1);

        GuiSimpleLayoutClass->setCentralWidget(leftWidget);
        menuBar = new QMenuBar(GuiSimpleLayoutClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1380, 21));
        GuiSimpleLayoutClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(GuiSimpleLayoutClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GuiSimpleLayoutClass->setStatusBar(statusBar);

        retranslateUi(GuiSimpleLayoutClass);

        QMetaObject::connectSlotsByName(GuiSimpleLayoutClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiSimpleLayoutClass)
    {
        GuiSimpleLayoutClass->setWindowTitle(QApplication::translate("GuiSimpleLayoutClass", "SimSpark Gui", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiSimpleLayoutClass: public Ui_GuiSimpleLayoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISIMPLELAYOUT_H
