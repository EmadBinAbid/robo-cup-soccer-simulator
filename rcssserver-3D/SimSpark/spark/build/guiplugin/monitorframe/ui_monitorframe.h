/********************************************************************************
** Form generated from reading UI file 'monitorframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONITORFRAME_H
#define UI_MONITORFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "attachableframe.h"

QT_BEGIN_NAMESPACE

class Ui_MonitorFrame
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *headerWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *activateButton;
    QLabel *headerLabel;
    QSpacerItem *horizontalSpacer;
    QFrame *glWidgetContainer;

    void setupUi(AttachableFrame *MonitorFrame)
    {
        if (MonitorFrame->objectName().isEmpty())
            MonitorFrame->setObjectName(QString::fromUtf8("MonitorFrame"));
        MonitorFrame->resize(513, 392);
        verticalLayout = new QVBoxLayout(MonitorFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headerWidget = new QWidget(MonitorFrame);
        headerWidget->setObjectName(QString::fromUtf8("headerWidget"));
        horizontalLayout = new QHBoxLayout(headerWidget);
#ifndef Q_OS_MAC
        horizontalLayout->setSpacing(6);
#endif
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        activateButton = new QPushButton(headerWidget);
        activateButton->setObjectName(QString::fromUtf8("activateButton"));

        horizontalLayout->addWidget(activateButton);

        headerLabel = new QLabel(headerWidget);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));

        horizontalLayout->addWidget(headerLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(headerWidget);

        glWidgetContainer = new QFrame(MonitorFrame);
        glWidgetContainer->setObjectName(QString::fromUtf8("glWidgetContainer"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glWidgetContainer->sizePolicy().hasHeightForWidth());
        glWidgetContainer->setSizePolicy(sizePolicy);
        glWidgetContainer->setFrameShape(QFrame::NoFrame);
        glWidgetContainer->setFrameShadow(QFrame::Plain);
        glWidgetContainer->setLineWidth(0);

        verticalLayout->addWidget(glWidgetContainer);


        retranslateUi(MonitorFrame);
        QObject::connect(activateButton, SIGNAL(clicked()), MonitorFrame, SLOT(toggleReadyState()));

        QMetaObject::connectSlotsByName(MonitorFrame);
    } // setupUi

    void retranslateUi(AttachableFrame *MonitorFrame)
    {
        MonitorFrame->setWindowTitle(QApplication::translate("MonitorFrame", "Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        MonitorFrame->setWhatsThis(QApplication::translate("MonitorFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The monitor frame offers an OpenGL window to the OpenGL-Manager of the application.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If the registration is activated, this window is used as main window for a starting simulation server.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;"
                        "\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">By default it is rendering an example scene.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Activate the registration with the activation button if you are starting a gui-internal spark simulation with the additional &quot;setupguirendering.rb&quot; script.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The script will tell SimSpark that whe use a qt-frame as rendering context instead of an additional window.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The monitor frame will then render th"
                        "e scene graph.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        activateButton->setWhatsThis(QApplication::translate("MonitorFrame", "The monitor frame offers an OpenGL window to the OpenGL-Manager of the application.\n"
"If the registration is activated, this window is used as main window for a starting simulation server.\n"
"Activate it if you are starting a gui-internal simulation with the additional \"setupguirendering.rb\" script.\n"
"The script will tell SimSpark that whe use a qt-frame as rendering context instead of an additional window.\n"
"The monitor frame will then render the scene graph.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        activateButton->setText(QApplication::translate("MonitorFrame", "Deactivate", 0, QApplication::UnicodeUTF8));
        headerLabel->setText(QApplication::translate("MonitorFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MonitorFrame: public Ui_MonitorFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONITORFRAME_H
