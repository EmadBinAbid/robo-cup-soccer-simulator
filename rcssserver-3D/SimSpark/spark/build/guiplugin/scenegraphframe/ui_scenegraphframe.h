/********************************************************************************
** Form generated from reading UI file 'scenegraphframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEGRAPHFRAME_H
#define UI_SCENEGRAPHFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "scenegraphframe_propertyframe.h"

QT_BEGIN_NAMESPACE

class Ui_SceneGraphFrame
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *headerWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *headerLayout;
    QLabel *taskLabel;
    QComboBox *taskComboBox;
    QWidget *toolButtonWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *updateButton;
    QToolButton *expandButton;
    QToolButton *collapseButton;
    QCheckBox *updateCheckBox;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QWidget *contentWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *contentSplitter;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    SceneGraphFrameUtil::PropertyFrame *propertyFrame;

    void setupUi(QWidget *SceneGraphFrame)
    {
        if (SceneGraphFrame->objectName().isEmpty())
            SceneGraphFrame->setObjectName(QString::fromUtf8("SceneGraphFrame"));
        SceneGraphFrame->resize(331, 529);
        verticalLayout_2 = new QVBoxLayout(SceneGraphFrame);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        headerWidget = new QWidget(SceneGraphFrame);
        headerWidget->setObjectName(QString::fromUtf8("headerWidget"));
        verticalLayout = new QVBoxLayout(headerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 0);
        headerLayout = new QHBoxLayout();
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        taskLabel = new QLabel(headerWidget);
        taskLabel->setObjectName(QString::fromUtf8("taskLabel"));

        headerLayout->addWidget(taskLabel);

        taskComboBox = new QComboBox(headerWidget);
        taskComboBox->setObjectName(QString::fromUtf8("taskComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(taskComboBox->sizePolicy().hasHeightForWidth());
        taskComboBox->setSizePolicy(sizePolicy);

        headerLayout->addWidget(taskComboBox);


        verticalLayout->addLayout(headerLayout);

        toolButtonWidget = new QWidget(headerWidget);
        toolButtonWidget->setObjectName(QString::fromUtf8("toolButtonWidget"));
        horizontalLayout = new QHBoxLayout(toolButtonWidget);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        updateButton = new QToolButton(toolButtonWidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_refresh"), QSize(), QIcon::Normal, QIcon::Off);
        updateButton->setIcon(icon);

        horizontalLayout->addWidget(updateButton);

        expandButton = new QToolButton(toolButtonWidget);
        expandButton->setObjectName(QString::fromUtf8("expandButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/arrow_expand"), QSize(), QIcon::Normal, QIcon::Off);
        expandButton->setIcon(icon1);

        horizontalLayout->addWidget(expandButton);

        collapseButton = new QToolButton(toolButtonWidget);
        collapseButton->setObjectName(QString::fromUtf8("collapseButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/arrow_collapse"), QSize(), QIcon::Normal, QIcon::Off);
        collapseButton->setIcon(icon2);

        horizontalLayout->addWidget(collapseButton);

        updateCheckBox = new QCheckBox(toolButtonWidget);
        updateCheckBox->setObjectName(QString::fromUtf8("updateCheckBox"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/alarm"), QSize(), QIcon::Normal, QIcon::Off);
        updateCheckBox->setIcon(icon3);

        horizontalLayout->addWidget(updateCheckBox);

        horizontalSpacer = new QSpacerItem(189, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(toolButtonWidget);

        line = new QFrame(headerWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        verticalLayout_2->addWidget(headerWidget);

        contentWidget = new QWidget(SceneGraphFrame);
        contentWidget->setObjectName(QString::fromUtf8("contentWidget"));
        verticalLayout_3 = new QVBoxLayout(contentWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        contentSplitter = new QSplitter(contentWidget);
        contentSplitter->setObjectName(QString::fromUtf8("contentSplitter"));
        contentSplitter->setOrientation(Qt::Vertical);
        stackedWidget = new QStackedWidget(contentSplitter);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setLineWidth(0);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        contentSplitter->addWidget(stackedWidget);
        propertyFrame = new SceneGraphFrameUtil::PropertyFrame(contentSplitter);
        propertyFrame->setObjectName(QString::fromUtf8("propertyFrame"));
        propertyFrame->setFrameShape(QFrame::NoFrame);
        propertyFrame->setFrameShadow(QFrame::Plain);
        propertyFrame->setLineWidth(0);
        contentSplitter->addWidget(propertyFrame);

        verticalLayout_3->addWidget(contentSplitter);


        verticalLayout_2->addWidget(contentWidget);


        retranslateUi(SceneGraphFrame);
        QObject::connect(expandButton, SIGNAL(clicked()), SceneGraphFrame, SLOT(expandAll()));
        QObject::connect(collapseButton, SIGNAL(clicked()), SceneGraphFrame, SLOT(collapseAll()));
        QObject::connect(updateButton, SIGNAL(clicked()), SceneGraphFrame, SLOT(updateData()));
        QObject::connect(updateCheckBox, SIGNAL(clicked(bool)), SceneGraphFrame, SLOT(toggleTimer(bool)));
        QObject::connect(taskComboBox, SIGNAL(currentIndexChanged(int)), SceneGraphFrame, SLOT(chooseTask(int)));

        QMetaObject::connectSlotsByName(SceneGraphFrame);
    } // setupUi

    void retranslateUi(QWidget *SceneGraphFrame)
    {
        SceneGraphFrame->setWindowTitle(QApplication::translate("SceneGraphFrame", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        SceneGraphFrame->setWhatsThis(QApplication::translate("SceneGraphFrame", "The scene graph frame displays and grants access to the scene graph of a task.\n"
"It is separated in a header area, where you can select the task to show the scene graph from, the scene graph area in the center, where you can explore the single nodes of the graph, and the property area at the bottom, where you can inspect and change properties of selected nodes in the scene graph.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        taskLabel->setText(QApplication::translate("SceneGraphFrame", "Task:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        taskComboBox->setWhatsThis(QApplication::translate("SceneGraphFrame", "Select the task to display a scene graph from.\n"
"Currently only spark server thread scene graphs can be displayed.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        updateButton->setToolTip(QApplication::translate("SceneGraphFrame", "Update all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateButton->setWhatsThis(QApplication::translate("SceneGraphFrame", "Update the whole scene graph.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        updateButton->setText(QApplication::translate("SceneGraphFrame", "Update", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        expandButton->setToolTip(QApplication::translate("SceneGraphFrame", "Expand all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        expandButton->setWhatsThis(QApplication::translate("SceneGraphFrame", "Expands all scene graph nodes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        expandButton->setText(QApplication::translate("SceneGraphFrame", "Expand All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        collapseButton->setToolTip(QApplication::translate("SceneGraphFrame", "Collapse all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        collapseButton->setWhatsThis(QApplication::translate("SceneGraphFrame", "Collapses all scene graph nodes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        collapseButton->setText(QApplication::translate("SceneGraphFrame", "Collapse All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        updateCheckBox->setToolTip(QApplication::translate("SceneGraphFrame", "Automatic update On/Off", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        updateCheckBox->setWhatsThis(QApplication::translate("SceneGraphFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Activates or deactivates automatic updating of the whole scene graph.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        updateCheckBox->setText(QString());
#ifndef QT_NO_WHATSTHIS
        propertyFrame->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SceneGraphFrame: public Ui_SceneGraphFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEGRAPHFRAME_H
