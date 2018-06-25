/********************************************************************************
** Form generated from reading UI file 'logframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFRAME_H
#define UI_LOGFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "attachableframe.h"
#include "toolseparatorbutton.h"

QT_BEGIN_NAMESPACE

class Ui_LogFrame
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *layoutWidget;
    QHBoxLayout *toolsLayout;
    QWidget *settingsSeparatorWidget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_4;
    ToolSeparatorButton *settingsSeparatprButton;
    QWidget *settingsWidget;
    QHBoxLayout *settingsLayout;
    QLabel *outputLabel;
    QComboBox *outputComboBox;
    QWidget *buttonSeparatorWidget;
    QGridLayout *gridLayout_3;
    QFrame *line_5;
    QSpacerItem *verticalSpacer_5;
    ToolSeparatorButton *buttonSeparatorButton;
    QSpacerItem *verticalSpacer_6;
    QWidget *buttonsWidget;
    QHBoxLayout *buttonLayout;
    QLabel *logLevelLabel;
    QComboBox *logLevelComboBox;
    QLabel *label_2;
    QToolButton *debugToolButton;
    QToolButton *infoToolButton;
    QToolButton *warningToolButton;
    QToolButton *errorToolButton;
    QSpacerItem *horizontalSpacer;
    QWidget *formatSeparatorWidget;
    QGridLayout *gridLayout_4;
    QFrame *line_6;
    QSpacerItem *verticalSpacer_7;
    ToolSeparatorButton *formatSeparatorButton;
    QSpacerItem *verticalSpacer_8;
    QWidget *formatWidget;
    QHBoxLayout *formatLayout;
    QLabel *label;
    QToolButton *timeToolButton;
    QToolButton *sourceToolButton;
    QToolButton *levelToolButton;
    QToolButton *fileToolButton;
    QToolButton *lineToolButton;
    QToolButton *nameToolButton;
    QToolButton *messageToolButton;
    QSpacerItem *formatSpacer;
    QWidget *statusSeparatorWidget;
    QGridLayout *gridLayout_5;
    QFrame *line_7;
    QSpacerItem *verticalSpacer_9;
    ToolSeparatorButton *statusSeparatorButton;
    QSpacerItem *verticalSpacer_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *amountLabel;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *logTextEdit;

    void setupUi(AttachableFrame *LogFrame)
    {
        if (LogFrame->objectName().isEmpty())
            LogFrame->setObjectName(QString::fromUtf8("LogFrame"));
        LogFrame->resize(1001, 270);
        verticalLayout = new QVBoxLayout(LogFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(LogFrame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 30));
        scrollArea->setMaximumSize(QSize(16777215, 30));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setLineWidth(0);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1001, 30));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents_3->setMaximumSize(QSize(16777215, 30));
        layoutWidget = new QWidget(scrollAreaWidgetContents_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1067, 31));
        toolsLayout = new QHBoxLayout(layoutWidget);
        toolsLayout->setSpacing(2);
        toolsLayout->setObjectName(QString::fromUtf8("toolsLayout"));
        toolsLayout->setContentsMargins(6, 2, 6, 2);
        settingsSeparatorWidget = new QWidget(layoutWidget);
        settingsSeparatorWidget->setObjectName(QString::fromUtf8("settingsSeparatorWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(settingsSeparatorWidget->sizePolicy().hasHeightForWidth());
        settingsSeparatorWidget->setSizePolicy(sizePolicy1);
        settingsSeparatorWidget->setMaximumSize(QSize(16, 16777215));
        gridLayout_2 = new QGridLayout(settingsSeparatorWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(1, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 1, 1, 1);

        line_4 = new QFrame(settingsSeparatorWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 0, 3, 1);

        settingsSeparatprButton = new ToolSeparatorButton(settingsSeparatorWidget);
        settingsSeparatprButton->setObjectName(QString::fromUtf8("settingsSeparatprButton"));
        settingsSeparatprButton->setMinimumSize(QSize(14, 14));
        settingsSeparatprButton->setMaximumSize(QSize(14, 14));
        settingsSeparatprButton->setCheckable(true);
        settingsSeparatprButton->setArrowType(Qt::LeftArrow);

        gridLayout_2->addWidget(settingsSeparatprButton, 1, 1, 1, 1);


        toolsLayout->addWidget(settingsSeparatorWidget);

        settingsWidget = new QWidget(layoutWidget);
        settingsWidget->setObjectName(QString::fromUtf8("settingsWidget"));
        settingsLayout = new QHBoxLayout(settingsWidget);
        settingsLayout->setSpacing(1);
        settingsLayout->setContentsMargins(1, 1, 1, 1);
        settingsLayout->setObjectName(QString::fromUtf8("settingsLayout"));
        outputLabel = new QLabel(settingsWidget);
        outputLabel->setObjectName(QString::fromUtf8("outputLabel"));
        sizePolicy1.setHeightForWidth(outputLabel->sizePolicy().hasHeightForWidth());
        outputLabel->setSizePolicy(sizePolicy1);

        settingsLayout->addWidget(outputLabel);

        outputComboBox = new QComboBox(settingsWidget);
        outputComboBox->setObjectName(QString::fromUtf8("outputComboBox"));
        outputComboBox->setMinimumSize(QSize(100, 0));
        outputComboBox->setMaximumSize(QSize(100, 16777215));
        outputComboBox->setBaseSize(QSize(100, 0));
        outputComboBox->setContextMenuPolicy(Qt::NoContextMenu);
        outputComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        settingsLayout->addWidget(outputComboBox);


        toolsLayout->addWidget(settingsWidget);

        buttonSeparatorWidget = new QWidget(layoutWidget);
        buttonSeparatorWidget->setObjectName(QString::fromUtf8("buttonSeparatorWidget"));
        buttonSeparatorWidget->setMaximumSize(QSize(22, 16777215));
        gridLayout_3 = new QGridLayout(buttonSeparatorWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 0, 0, 0);
        line_5 = new QFrame(buttonSeparatorWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_5, 0, 0, 3, 1);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_5, 0, 1, 1, 1);

        buttonSeparatorButton = new ToolSeparatorButton(buttonSeparatorWidget);
        buttonSeparatorButton->setObjectName(QString::fromUtf8("buttonSeparatorButton"));
        buttonSeparatorButton->setMinimumSize(QSize(14, 14));
        buttonSeparatorButton->setMaximumSize(QSize(14, 14));
        buttonSeparatorButton->setCheckable(true);
        buttonSeparatorButton->setArrowType(Qt::LeftArrow);

        gridLayout_3->addWidget(buttonSeparatorButton, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(1, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_6, 2, 1, 1, 1);


        toolsLayout->addWidget(buttonSeparatorWidget);

        buttonsWidget = new QWidget(layoutWidget);
        buttonsWidget->setObjectName(QString::fromUtf8("buttonsWidget"));
        buttonLayout = new QHBoxLayout(buttonsWidget);
        buttonLayout->setSpacing(1);
        buttonLayout->setContentsMargins(1, 1, 1, 1);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        logLevelLabel = new QLabel(buttonsWidget);
        logLevelLabel->setObjectName(QString::fromUtf8("logLevelLabel"));
        sizePolicy1.setHeightForWidth(logLevelLabel->sizePolicy().hasHeightForWidth());
        logLevelLabel->setSizePolicy(sizePolicy1);

        buttonLayout->addWidget(logLevelLabel);

        logLevelComboBox = new QComboBox(buttonsWidget);
        logLevelComboBox->insertItems(0, QStringList()
         << QString::fromUtf8("Debug")
         << QString::fromUtf8("Info")
         << QString::fromUtf8("Warning")
         << QString::fromUtf8("Error")
         << QString::fromUtf8("Fatal")
        );
        logLevelComboBox->setObjectName(QString::fromUtf8("logLevelComboBox"));
        logLevelComboBox->setBaseSize(QSize(60, 0));

        buttonLayout->addWidget(logLevelComboBox);

        label_2 = new QLabel(buttonsWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        buttonLayout->addWidget(label_2);

        debugToolButton = new QToolButton(buttonsWidget);
        debugToolButton->setObjectName(QString::fromUtf8("debugToolButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/bug"), QSize(), QIcon::Normal, QIcon::Off);
        debugToolButton->setIcon(icon);
        debugToolButton->setCheckable(true);
        debugToolButton->setChecked(false);

        buttonLayout->addWidget(debugToolButton);

        infoToolButton = new QToolButton(buttonsWidget);
        infoToolButton->setObjectName(QString::fromUtf8("infoToolButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/info"), QSize(), QIcon::Normal, QIcon::Off);
        infoToolButton->setIcon(icon1);
        infoToolButton->setCheckable(true);
        infoToolButton->setChecked(true);

        buttonLayout->addWidget(infoToolButton);

        warningToolButton = new QToolButton(buttonsWidget);
        warningToolButton->setObjectName(QString::fromUtf8("warningToolButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/warning"), QSize(), QIcon::Normal, QIcon::Off);
        warningToolButton->setIcon(icon2);
        warningToolButton->setCheckable(true);
        warningToolButton->setChecked(true);

        buttonLayout->addWidget(warningToolButton);

        errorToolButton = new QToolButton(buttonsWidget);
        errorToolButton->setObjectName(QString::fromUtf8("errorToolButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/error"), QSize(), QIcon::Normal, QIcon::Off);
        errorToolButton->setIcon(icon3);
        errorToolButton->setIconSize(QSize(16, 16));
        errorToolButton->setCheckable(true);
        errorToolButton->setChecked(true);

        buttonLayout->addWidget(errorToolButton);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer);


        toolsLayout->addWidget(buttonsWidget);

        formatSeparatorWidget = new QWidget(layoutWidget);
        formatSeparatorWidget->setObjectName(QString::fromUtf8("formatSeparatorWidget"));
        formatSeparatorWidget->setMaximumSize(QSize(22, 16777215));
        gridLayout_4 = new QGridLayout(formatSeparatorWidget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(6, 0, 0, 0);
        line_6 = new QFrame(formatSeparatorWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_6, 0, 0, 3, 1);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_7, 0, 1, 1, 1);

        formatSeparatorButton = new ToolSeparatorButton(formatSeparatorWidget);
        formatSeparatorButton->setObjectName(QString::fromUtf8("formatSeparatorButton"));
        formatSeparatorButton->setMinimumSize(QSize(14, 14));
        formatSeparatorButton->setMaximumSize(QSize(14, 14));
        formatSeparatorButton->setCheckable(true);
        formatSeparatorButton->setArrowType(Qt::LeftArrow);

        gridLayout_4->addWidget(formatSeparatorButton, 1, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_8, 2, 1, 1, 1);


        toolsLayout->addWidget(formatSeparatorWidget);

        formatWidget = new QWidget(layoutWidget);
        formatWidget->setObjectName(QString::fromUtf8("formatWidget"));
        formatLayout = new QHBoxLayout(formatWidget);
        formatLayout->setSpacing(1);
        formatLayout->setContentsMargins(1, 1, 1, 1);
        formatLayout->setObjectName(QString::fromUtf8("formatLayout"));
        label = new QLabel(formatWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        formatLayout->addWidget(label);

        timeToolButton = new QToolButton(formatWidget);
        timeToolButton->setObjectName(QString::fromUtf8("timeToolButton"));
        timeToolButton->setMinimumSize(QSize(40, 0));
        timeToolButton->setCheckable(true);
        timeToolButton->setChecked(true);

        formatLayout->addWidget(timeToolButton);

        sourceToolButton = new QToolButton(formatWidget);
        sourceToolButton->setObjectName(QString::fromUtf8("sourceToolButton"));
        sourceToolButton->setMinimumSize(QSize(40, 0));
        sourceToolButton->setCheckable(true);

        formatLayout->addWidget(sourceToolButton);

        levelToolButton = new QToolButton(formatWidget);
        levelToolButton->setObjectName(QString::fromUtf8("levelToolButton"));
        levelToolButton->setMinimumSize(QSize(35, 0));
        levelToolButton->setCheckable(true);

        formatLayout->addWidget(levelToolButton);

        fileToolButton = new QToolButton(formatWidget);
        fileToolButton->setObjectName(QString::fromUtf8("fileToolButton"));
        fileToolButton->setMinimumSize(QSize(30, 0));
        fileToolButton->setAcceptDrops(false);
        fileToolButton->setCheckable(true);

        formatLayout->addWidget(fileToolButton);

        lineToolButton = new QToolButton(formatWidget);
        lineToolButton->setObjectName(QString::fromUtf8("lineToolButton"));
        lineToolButton->setMinimumSize(QSize(30, 0));
        lineToolButton->setCheckable(true);

        formatLayout->addWidget(lineToolButton);

        nameToolButton = new QToolButton(formatWidget);
        nameToolButton->setObjectName(QString::fromUtf8("nameToolButton"));
        nameToolButton->setMinimumSize(QSize(40, 0));
        nameToolButton->setCheckable(true);

        formatLayout->addWidget(nameToolButton);

        messageToolButton = new QToolButton(formatWidget);
        messageToolButton->setObjectName(QString::fromUtf8("messageToolButton"));
        messageToolButton->setMinimumSize(QSize(50, 0));
        messageToolButton->setMaximumSize(QSize(16777215, 16777215));
        messageToolButton->setCheckable(true);
        messageToolButton->setChecked(true);

        formatLayout->addWidget(messageToolButton);

        formatSpacer = new QSpacerItem(0, 0, QSizePolicy::Maximum, QSizePolicy::Minimum);

        formatLayout->addItem(formatSpacer);


        toolsLayout->addWidget(formatWidget);

        statusSeparatorWidget = new QWidget(layoutWidget);
        statusSeparatorWidget->setObjectName(QString::fromUtf8("statusSeparatorWidget"));
        statusSeparatorWidget->setMaximumSize(QSize(22, 16777215));
        gridLayout_5 = new QGridLayout(statusSeparatorWidget);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(6, 0, 0, 0);
        line_7 = new QFrame(statusSeparatorWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_7, 0, 0, 3, 1);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_9, 0, 1, 1, 1);

        statusSeparatorButton = new ToolSeparatorButton(statusSeparatorWidget);
        statusSeparatorButton->setObjectName(QString::fromUtf8("statusSeparatorButton"));
        statusSeparatorButton->setMinimumSize(QSize(14, 14));
        statusSeparatorButton->setMaximumSize(QSize(14, 14));
        statusSeparatorButton->setCheckable(true);
        statusSeparatorButton->setArrowType(Qt::LeftArrow);

        gridLayout_5->addWidget(statusSeparatorButton, 1, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_10, 2, 1, 1, 1);


        toolsLayout->addWidget(statusSeparatorWidget);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        amountLabel = new QLabel(widget);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));
        amountLabel->setText(QString::fromUtf8("0/0"));

        horizontalLayout_2->addWidget(amountLabel);


        toolsLayout->addWidget(widget);

        horizontalSpacer_2 = new QSpacerItem(13, 13, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        toolsLayout->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout->addWidget(scrollArea);

        logTextEdit = new QTextEdit(LogFrame);
        logTextEdit->setObjectName(QString::fromUtf8("logTextEdit"));
        logTextEdit->setBaseSize(QSize(50, 0));
        logTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        logTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(logTextEdit);


        retranslateUi(LogFrame);
        QObject::connect(settingsSeparatprButton, SIGNAL(toggled(bool)), settingsWidget, SLOT(setHidden(bool)));
        QObject::connect(buttonSeparatorButton, SIGNAL(toggled(bool)), buttonsWidget, SLOT(setHidden(bool)));
        QObject::connect(formatSeparatorButton, SIGNAL(toggled(bool)), formatWidget, SLOT(setHidden(bool)));
        QObject::connect(statusSeparatorButton, SIGNAL(toggled(bool)), label_3, SLOT(setHidden(bool)));
        QObject::connect(statusSeparatorButton, SIGNAL(toggled(bool)), amountLabel, SLOT(setHidden(bool)));
        QObject::connect(debugToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(debugToggled(bool)));
        QObject::connect(infoToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(infoToggled(bool)));
        QObject::connect(warningToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(warningToggled(bool)));
        QObject::connect(errorToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(errorToggled(bool)));
        QObject::connect(timeToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(timeToggled(bool)));
        QObject::connect(levelToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(levelToggled(bool)));
        QObject::connect(fileToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(fileToggled(bool)));
        QObject::connect(lineToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(lineToggled(bool)));
        QObject::connect(nameToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(nameToggled(bool)));
        QObject::connect(logLevelComboBox, SIGNAL(currentIndexChanged(int)), LogFrame, SLOT(logLevelChanged(int)));
        QObject::connect(formatSeparatorButton, SIGNAL(toggled(bool)), sourceToolButton, SLOT(setHidden(bool)));
        QObject::connect(sourceToolButton, SIGNAL(toggled(bool)), LogFrame, SLOT(sourceToggled(bool)));
        QObject::connect(outputComboBox, SIGNAL(currentIndexChanged(int)), LogFrame, SLOT(outputChanged(int)));

        outputComboBox->setCurrentIndex(1);
        logLevelComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LogFrame);
    } // setupUi

    void retranslateUi(AttachableFrame *LogFrame)
    {
        LogFrame->setWindowTitle(QApplication::translate("LogFrame", "Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        LogFrame->setWhatsThis(QApplication::translate("LogFrame", "The log frame collects all log messages sent in the application, formats them as specified in the tool bar and displays them in the message window.\n"
"\n"
"Messages are queued up to a maximum amount of messages, so they can be reformatted any time. For example, when an error occurred, lower log levels and additional information can be activated and the message list will be recreated with the new specified format.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        settingsSeparatprButton->setToolTip(QApplication::translate("LogFrame", "Show or hide this section.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        settingsSeparatprButton->setText(QString());
        outputLabel->setText(QApplication::translate("LogFrame", "Show Output from: ", 0, QApplication::UnicodeUTF8));
        outputComboBox->clear();
        outputComboBox->insertItems(0, QStringList()
         << QApplication::translate("LogFrame", "Application", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogFrame", "Gui", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogFrame", "Spark", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_WHATSTHIS
        outputComboBox->setWhatsThis(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Selection box for message sources.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Only messages from the specified source will be shown but the logger will still receive all log messages sent from all sources.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        buttonSeparatorButton->setToolTip(QApplication::translate("LogFrame", "Show or hide this section.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonSeparatorButton->setText(QString());
        logLevelLabel->setText(QApplication::translate("LogFrame", "Receive Level: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        logLevelComboBox->setToolTip(QApplication::translate("LogFrame", "Which message types should be received (not shown) by the log window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        logLevelComboBox->setWhatsThis(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Selection box for message log level.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Only messages with a log level higher or equal to the selected level will be received.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Which ones are shown can be specified with the level buttons.</span>"
                        "</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("LogFrame", " Show Level: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        debugToolButton->setToolTip(QApplication::translate("LogFrame", "Show debug messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        debugToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages with the respective level will be shown.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        debugToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        infoToolButton->setToolTip(QApplication::translate("LogFrame", "Show info messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        infoToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages with the respective level will be shown.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        infoToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        warningToolButton->setToolTip(QApplication::translate("LogFrame", "Show warning messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        warningToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages with the respective level will be shown.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        warningToolButton->setText(QApplication::translate("LogFrame", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        errorToolButton->setToolTip(QApplication::translate("LogFrame", "Show error messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        errorToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages with the respective level will be shown.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        errorToolButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        formatSeparatorButton->setToolTip(QApplication::translate("LogFrame", "Show or hide this section.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        formatSeparatorButton->setText(QString());
        label->setText(QApplication::translate("LogFrame", "Format: ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        timeToolButton->setToolTip(QApplication::translate("LogFrame", "Display timestamp", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        timeToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages shown will include time information of the message.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        timeToolButton->setText(QApplication::translate("LogFrame", "Time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sourceToolButton->setToolTip(QApplication::translate("LogFrame", "Display message source", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sourceToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages shown will include the source of the message.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        sourceToolButton->setText(QApplication::translate("LogFrame", "Source", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        levelToolButton->setToolTip(QApplication::translate("LogFrame", "Display log level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        levelToolButton->setWhatsThis(QApplication::translate("LogFrame", "If activated, all messages shown will include the log level of the message.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        levelToolButton->setText(QApplication::translate("LogFrame", "Level", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileToolButton->setToolTip(QApplication::translate("LogFrame", "Display source file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        fileToolButton->setWhatsThis(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If activated, all messages shown will include the source file of the message.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This only works for messages originating from the core program.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">External messages will always show the receiving l"
                        "og handler.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        fileToolButton->setText(QApplication::translate("LogFrame", "File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineToolButton->setToolTip(QApplication::translate("LogFrame", "Display source code line", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineToolButton->setWhatsThis(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If activated, all messages shown will include the source line of the message.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This only works for messages originating from the core program.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">External messages will always show the receiving l"
                        "og handler.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        lineToolButton->setText(QApplication::translate("LogFrame", "Line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nameToolButton->setToolTip(QApplication::translate("LogFrame", "Display source function name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nameToolButton->setWhatsThis(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If activated, all messages shown will include the source function of the message.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This only works for messages originating from the core program.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">External messages will always show the receivi"
                        "ng log handler.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        nameToolButton->setText(QApplication::translate("LogFrame", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        messageToolButton->setToolTip(QApplication::translate("LogFrame", "Display message", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        messageToolButton->setWhatsThis(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If activated, all messages shown will include the message content.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        messageToolButton->setText(QApplication::translate("LogFrame", "Message", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        statusSeparatorButton->setToolTip(QApplication::translate("LogFrame", "Show or hide this section.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        statusSeparatorButton->setText(QString());
        label_3->setText(QApplication::translate("LogFrame", "Messages:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        amountLabel->setWhatsThis(QApplication::translate("LogFrame", "Current and maximum amount of messages stored by the logger.\n"
"The amount can be changed in the settings window.\n"
"When changing the displayed log level or message format all messages in the current queue will be reformatted and displayed again in correct order.\n"
"If th message queue is long this may take some time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        logTextEdit->setWhatsThis(QApplication::translate("LogFrame", "The log window displaying log messages from different sources.\n"
"The sources and message format can be controlled with the tool bar.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        logTextEdit->setHtml(QApplication::translate("LogFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogFrame: public Ui_LogFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFRAME_H
