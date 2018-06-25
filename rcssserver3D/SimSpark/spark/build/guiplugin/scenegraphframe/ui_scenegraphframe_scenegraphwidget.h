/********************************************************************************
** Form generated from reading UI file 'scenegraphframe_scenegraphwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEGRAPHFRAME_SCENEGRAPHWIDGET_H
#define UI_SCENEGRAPHFRAME_SCENEGRAPHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "sparktreeview.h"

QT_BEGIN_NAMESPACE

class Ui_SceneGraphWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *headerWidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *headerLeftWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label1;
    QLabel *nameLabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *headerRightWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label2;
    QLabel *sparkLabel;
    QSpacerItem *horizontalSpacer_3;
    SparkTreeView *sceneGraphTreeView;

    void setupUi(QWidget *SceneGraphWidget)
    {
        if (SceneGraphWidget->objectName().isEmpty())
            SceneGraphWidget->setObjectName(QString::fromUtf8("SceneGraphWidget"));
        SceneGraphWidget->resize(400, 711);
        verticalLayout = new QVBoxLayout(SceneGraphWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headerWidget = new QWidget(SceneGraphWidget);
        headerWidget->setObjectName(QString::fromUtf8("headerWidget"));
        horizontalLayout_2 = new QHBoxLayout(headerWidget);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        headerLeftWidget = new QWidget(headerWidget);
        headerLeftWidget->setObjectName(QString::fromUtf8("headerLeftWidget"));
        horizontalLayout_3 = new QHBoxLayout(headerLeftWidget);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label1 = new QLabel(headerLeftWidget);
        label1->setObjectName(QString::fromUtf8("label1"));

        horizontalLayout_3->addWidget(label1);

        nameLabel = new QLabel(headerLeftWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_3->addWidget(nameLabel);

        horizontalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_2->addWidget(headerLeftWidget);

        headerRightWidget = new QWidget(headerWidget);
        headerRightWidget->setObjectName(QString::fromUtf8("headerRightWidget"));
        horizontalLayout_4 = new QHBoxLayout(headerRightWidget);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label2 = new QLabel(headerRightWidget);
        label2->setObjectName(QString::fromUtf8("label2"));

        horizontalLayout_4->addWidget(label2);

        sparkLabel = new QLabel(headerRightWidget);
        sparkLabel->setObjectName(QString::fromUtf8("sparkLabel"));

        horizontalLayout_4->addWidget(sparkLabel);

        horizontalSpacer_3 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        horizontalLayout_2->addWidget(headerRightWidget);


        verticalLayout->addWidget(headerWidget);

        sceneGraphTreeView = new SparkTreeView(SceneGraphWidget);
        sceneGraphTreeView->setObjectName(QString::fromUtf8("sceneGraphTreeView"));
        sceneGraphTreeView->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(sceneGraphTreeView);


        retranslateUi(SceneGraphWidget);
        QObject::connect(sceneGraphTreeView, SIGNAL(customContextMenuRequested(QPoint)), SceneGraphWidget, SLOT(showItemContextMenu(QPoint)));
        QObject::connect(sceneGraphTreeView, SIGNAL(clicked(QModelIndex)), SceneGraphWidget, SLOT(onItemClick(QModelIndex)));

        QMetaObject::connectSlotsByName(SceneGraphWidget);
    } // setupUi

    void retranslateUi(QWidget *SceneGraphWidget)
    {
        SceneGraphWidget->setWindowTitle(QApplication::translate("SceneGraphWidget", "Form", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("SceneGraphWidget", "Task:", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("SceneGraphWidget", "Name", 0, QApplication::UnicodeUTF8));
        label2->setText(QApplication::translate("SceneGraphWidget", "SimSpark:", 0, QApplication::UnicodeUTF8));
        sparkLabel->setText(QApplication::translate("SceneGraphWidget", "Spark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        sceneGraphTreeView->setWhatsThis(QApplication::translate("SceneGraphWidget", "The scene graph of the selected task.\n"
"\n"
"you can interact with nodes using the context menu or the property area below.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SceneGraphWidget: public Ui_SceneGraphWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEGRAPHFRAME_SCENEGRAPHWIDGET_H
