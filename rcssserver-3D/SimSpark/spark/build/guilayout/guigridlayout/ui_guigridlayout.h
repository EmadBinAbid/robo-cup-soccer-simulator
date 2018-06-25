/********************************************************************************
** Form generated from reading UI file 'guigridlayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIGRIDLAYOUT_H
#define UI_GUIGRIDLAYOUT_H

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

class Ui_GuiGridLayoutClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter_3;
    QFrame *controlFrame;
    QFrame *right_frame;
    QGridLayout *gridLayout_2;
    QSplitter *splitter_2;
    QFrame *topright_frame;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QFrame *monitorFrame;
    QFrame *editorFrame;
    QFrame *consoleFrame;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GuiGridLayoutClass)
    {
        if (GuiGridLayoutClass->objectName().isEmpty())
            GuiGridLayoutClass->setObjectName(QString::fromUtf8("GuiGridLayoutClass"));
        GuiGridLayoutClass->resize(1380, 711);
        centralWidget = new QWidget(GuiGridLayoutClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        splitter_3 = new QSplitter(centralWidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        controlFrame = new QFrame(splitter_3);
        controlFrame->setObjectName(QString::fromUtf8("controlFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(controlFrame->sizePolicy().hasHeightForWidth());
        controlFrame->setSizePolicy(sizePolicy);
        controlFrame->setFrameShape(QFrame::StyledPanel);
        controlFrame->setFrameShadow(QFrame::Raised);
        splitter_3->addWidget(controlFrame);
        right_frame = new QFrame(splitter_3);
        right_frame->setObjectName(QString::fromUtf8("right_frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(70);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(right_frame->sizePolicy().hasHeightForWidth());
        right_frame->setSizePolicy(sizePolicy1);
        right_frame->setFrameShape(QFrame::NoFrame);
        right_frame->setFrameShadow(QFrame::Raised);
        right_frame->setLineWidth(0);
        gridLayout_2 = new QGridLayout(right_frame);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter_2 = new QSplitter(right_frame);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        topright_frame = new QFrame(splitter_2);
        topright_frame->setObjectName(QString::fromUtf8("topright_frame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(3);
        sizePolicy2.setHeightForWidth(topright_frame->sizePolicy().hasHeightForWidth());
        topright_frame->setSizePolicy(sizePolicy2);
        topright_frame->setFrameShape(QFrame::NoFrame);
        topright_frame->setFrameShadow(QFrame::Raised);
        topright_frame->setLineWidth(0);
        gridLayout = new QGridLayout(topright_frame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(topright_frame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        monitorFrame = new QFrame(splitter);
        monitorFrame->setObjectName(QString::fromUtf8("monitorFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(monitorFrame->sizePolicy().hasHeightForWidth());
        monitorFrame->setSizePolicy(sizePolicy3);
        monitorFrame->setFrameShape(QFrame::StyledPanel);
        monitorFrame->setFrameShadow(QFrame::Raised);
        splitter->addWidget(monitorFrame);
        editorFrame = new QFrame(splitter);
        editorFrame->setObjectName(QString::fromUtf8("editorFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(editorFrame->sizePolicy().hasHeightForWidth());
        editorFrame->setSizePolicy(sizePolicy4);
        editorFrame->setFrameShape(QFrame::StyledPanel);
        editorFrame->setFrameShadow(QFrame::Raised);
        splitter->addWidget(editorFrame);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        splitter_2->addWidget(topright_frame);
        consoleFrame = new QFrame(splitter_2);
        consoleFrame->setObjectName(QString::fromUtf8("consoleFrame"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(consoleFrame->sizePolicy().hasHeightForWidth());
        consoleFrame->setSizePolicy(sizePolicy5);
        consoleFrame->setFrameShape(QFrame::StyledPanel);
        consoleFrame->setFrameShadow(QFrame::Raised);
        splitter_2->addWidget(consoleFrame);

        gridLayout_2->addWidget(splitter_2, 0, 0, 1, 1);

        splitter_3->addWidget(right_frame);

        gridLayout_3->addWidget(splitter_3, 0, 0, 1, 1);

        GuiGridLayoutClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GuiGridLayoutClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1380, 21));
        GuiGridLayoutClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(GuiGridLayoutClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GuiGridLayoutClass->setStatusBar(statusBar);

        retranslateUi(GuiGridLayoutClass);

        QMetaObject::connectSlotsByName(GuiGridLayoutClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiGridLayoutClass)
    {
        GuiGridLayoutClass->setWindowTitle(QApplication::translate("GuiGridLayoutClass", "SimSpark Gui", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GuiGridLayoutClass: public Ui_GuiGridLayoutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIGRIDLAYOUT_H
