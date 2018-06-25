/********************************************************************************
** Form generated from reading UI file 'simulationframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONFRAME_H
#define UI_SIMULATIONFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimulationFrame
{
public:
    QVBoxLayout *verticalLayout_5;
    QSplitter *splitter;
    QFrame *tasksFrame;
    QVBoxLayout *verticalLayout_3;
    QWidget *headerWidget;
    QFormLayout *formLayout;
    QLabel *headerLabel;
    QWidget *statusWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer2;
    QWidget *tasksControlWidget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *tasksControlTopLayout;
    QComboBox *tasksComboBox;
    QToolButton *tasksAddButton;
    QHBoxLayout *tasksControlBottomLayout;
    QToolButton *tasksPlayButton;
    QToolButton *tasksPauseButton;
    QToolButton *tasksStopButton;
    QToolButton *tasksRestartButton;
    QFrame *line;
    QToolButton *tasksExpandButton;
    QToolButton *tasksCollapseButton;
    QSpacerItem *horizontalSpacer;
    QScrollArea *tasksScrollArea;
    QWidget *tasksScrollAreaContents;
    QVBoxLayout *verticalLayout_2;
    QWidget *tasksWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SimulationFrame)
    {
        if (SimulationFrame->objectName().isEmpty())
            SimulationFrame->setObjectName(QString::fromUtf8("SimulationFrame"));
        SimulationFrame->resize(268, 557);
        verticalLayout_5 = new QVBoxLayout(SimulationFrame);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        splitter = new QSplitter(SimulationFrame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setFrameShape(QFrame::Box);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(0);
        splitter->setMidLineWidth(2);
        splitter->setOrientation(Qt::Vertical);
        tasksFrame = new QFrame(splitter);
        tasksFrame->setObjectName(QString::fromUtf8("tasksFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tasksFrame->sizePolicy().hasHeightForWidth());
        tasksFrame->setSizePolicy(sizePolicy);
        tasksFrame->setFrameShape(QFrame::NoFrame);
        tasksFrame->setLineWidth(0);
        verticalLayout_3 = new QVBoxLayout(tasksFrame);
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 9);
        headerWidget = new QWidget(tasksFrame);
        headerWidget->setObjectName(QString::fromUtf8("headerWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(headerWidget->sizePolicy().hasHeightForWidth());
        headerWidget->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(8);
        headerWidget->setFont(font);
        formLayout = new QFormLayout(headerWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setVerticalSpacing(0);
        headerLabel = new QLabel(headerWidget);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));
        QFont font1;
        font1.setPointSize(12);
        headerLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, headerLabel);

        statusWidget = new QWidget(headerWidget);
        statusWidget->setObjectName(QString::fromUtf8("statusWidget"));
        horizontalLayout = new QHBoxLayout(statusWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        statusLabel = new QLabel(statusWidget);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font2;
        font2.setPointSize(10);
        statusLabel->setFont(font2);

        horizontalLayout->addWidget(statusLabel);

        horizontalSpacer2 = new QSpacerItem(74, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer2);

        statusLabel->raise();

        formLayout->setWidget(0, QFormLayout::FieldRole, statusWidget);


        verticalLayout_3->addWidget(headerWidget);

        tasksControlWidget = new QWidget(tasksFrame);
        tasksControlWidget->setObjectName(QString::fromUtf8("tasksControlWidget"));
        verticalLayout_7 = new QVBoxLayout(tasksControlWidget);
        verticalLayout_7->setSpacing(4);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tasksControlTopLayout = new QHBoxLayout();
        tasksControlTopLayout->setSpacing(4);
        tasksControlTopLayout->setObjectName(QString::fromUtf8("tasksControlTopLayout"));
        tasksComboBox = new QComboBox(tasksControlWidget);
        tasksComboBox->setObjectName(QString::fromUtf8("tasksComboBox"));

        tasksControlTopLayout->addWidget(tasksComboBox);

        tasksAddButton = new QToolButton(tasksControlWidget);
        tasksAddButton->setObjectName(QString::fromUtf8("tasksAddButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add"), QSize(), QIcon::Normal, QIcon::Off);
        tasksAddButton->setIcon(icon);

        tasksControlTopLayout->addWidget(tasksAddButton);


        verticalLayout_7->addLayout(tasksControlTopLayout);

        tasksControlBottomLayout = new QHBoxLayout();
        tasksControlBottomLayout->setSpacing(3);
        tasksControlBottomLayout->setObjectName(QString::fromUtf8("tasksControlBottomLayout"));
        tasksPlayButton = new QToolButton(tasksControlWidget);
        tasksPlayButton->setObjectName(QString::fromUtf8("tasksPlayButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/play"), QSize(), QIcon::Normal, QIcon::Off);
        tasksPlayButton->setIcon(icon1);

        tasksControlBottomLayout->addWidget(tasksPlayButton);

        tasksPauseButton = new QToolButton(tasksControlWidget);
        tasksPauseButton->setObjectName(QString::fromUtf8("tasksPauseButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pause"), QSize(), QIcon::Normal, QIcon::Off);
        tasksPauseButton->setIcon(icon2);

        tasksControlBottomLayout->addWidget(tasksPauseButton);

        tasksStopButton = new QToolButton(tasksControlWidget);
        tasksStopButton->setObjectName(QString::fromUtf8("tasksStopButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/stop"), QSize(), QIcon::Normal, QIcon::Off);
        tasksStopButton->setIcon(icon3);

        tasksControlBottomLayout->addWidget(tasksStopButton);

        tasksRestartButton = new QToolButton(tasksControlWidget);
        tasksRestartButton->setObjectName(QString::fromUtf8("tasksRestartButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/previous"), QSize(), QIcon::Normal, QIcon::Off);
        tasksRestartButton->setIcon(icon4);

        tasksControlBottomLayout->addWidget(tasksRestartButton);

        line = new QFrame(tasksControlWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        tasksControlBottomLayout->addWidget(line);

        tasksExpandButton = new QToolButton(tasksControlWidget);
        tasksExpandButton->setObjectName(QString::fromUtf8("tasksExpandButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/arrow_expand"), QSize(), QIcon::Normal, QIcon::Off);
        tasksExpandButton->setIcon(icon5);
        tasksExpandButton->setCheckable(true);

        tasksControlBottomLayout->addWidget(tasksExpandButton);

        tasksCollapseButton = new QToolButton(tasksControlWidget);
        tasksCollapseButton->setObjectName(QString::fromUtf8("tasksCollapseButton"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/arrow_collapse"), QSize(), QIcon::Normal, QIcon::Off);
        tasksCollapseButton->setIcon(icon6);
        tasksCollapseButton->setCheckable(true);

        tasksControlBottomLayout->addWidget(tasksCollapseButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tasksControlBottomLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(tasksControlBottomLayout);


        verticalLayout_3->addWidget(tasksControlWidget);

        tasksScrollArea = new QScrollArea(tasksFrame);
        tasksScrollArea->setObjectName(QString::fromUtf8("tasksScrollArea"));
        tasksScrollArea->setWidgetResizable(true);
        tasksScrollAreaContents = new QWidget();
        tasksScrollAreaContents->setObjectName(QString::fromUtf8("tasksScrollAreaContents"));
        tasksScrollAreaContents->setGeometry(QRect(0, 0, 248, 457));
        verticalLayout_2 = new QVBoxLayout(tasksScrollAreaContents);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tasksWidget = new QWidget(tasksScrollAreaContents);
        tasksWidget->setObjectName(QString::fromUtf8("tasksWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tasksWidget->sizePolicy().hasHeightForWidth());
        tasksWidget->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(tasksWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addWidget(tasksWidget);

        verticalSpacer = new QSpacerItem(20, 2000, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tasksScrollArea->setWidget(tasksScrollAreaContents);

        verticalLayout_3->addWidget(tasksScrollArea);

        splitter->addWidget(tasksFrame);

        verticalLayout_5->addWidget(splitter);


        retranslateUi(SimulationFrame);
        QObject::connect(tasksComboBox, SIGNAL(currentIndexChanged(int)), SimulationFrame, SLOT(chooseTaskType(int)));
        QObject::connect(tasksAddButton, SIGNAL(clicked()), SimulationFrame, SLOT(addTask()));
        QObject::connect(tasksPlayButton, SIGNAL(clicked()), SimulationFrame, SLOT(runTasks()));
        QObject::connect(tasksPauseButton, SIGNAL(clicked()), SimulationFrame, SLOT(pauseTasks()));
        QObject::connect(tasksStopButton, SIGNAL(clicked()), SimulationFrame, SLOT(stopTasks()));
        QObject::connect(tasksRestartButton, SIGNAL(clicked()), SimulationFrame, SLOT(restartTasks()));
        QObject::connect(tasksExpandButton, SIGNAL(clicked()), SimulationFrame, SLOT(expandTasks()));
        QObject::connect(tasksCollapseButton, SIGNAL(clicked()), SimulationFrame, SLOT(collapseTasks()));

        QMetaObject::connectSlotsByName(SimulationFrame);
    } // setupUi

    void retranslateUi(QWidget *SimulationFrame)
    {
        SimulationFrame->setWindowTitle(QApplication::translate("SimulationFrame", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        SimulationFrame->setWhatsThis(QApplication::translate("SimulationFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The simulation frame lists all tasks of the current simulation setup.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">New tasks can be created, their parameters can be changed, and tasks can be started stopped or paused individually or all together.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        headerLabel->setText(QApplication::translate("SimulationFrame", "Simulation:", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("SimulationFrame", "Initialized", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tasksComboBox->setToolTip(QApplication::translate("SimulationFrame", "List of task types. Choose one and click the button to add another task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksComboBox->setWhatsThis(QApplication::translate("SimulationFrame", "Chooses a task type to add.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        tasksAddButton->setToolTip(QApplication::translate("SimulationFrame", "Adds another task of the currently selected type.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksAddButton->setWhatsThis(QApplication::translate("SimulationFrame", "Add a new task of the type chosen in the selection box.\n"
"There may only be one server task at a time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksAddButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tasksPlayButton->setToolTip(QApplication::translate("SimulationFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Starts the simulation and runs all tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">All tasks are started at the same time.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksPlayButton->setWhatsThis(QApplication::translate("SimulationFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Starts the simulation and runs all tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Warning: All tasks are started at the same time. Some processes or tasks may need to be started one after another. Start them one by one to prevent crashes.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksPlayButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tasksPauseButton->setToolTip(QApplication::translate("SimulationFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Pauses the simulation by pausing all tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">All tasks are paused at the same time.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksPauseButton->setWhatsThis(QApplication::translate("SimulationFrame", "Pauses the simulation by pausing all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksPauseButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tasksStopButton->setToolTip(QApplication::translate("SimulationFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Stops the simulation by resetting all SimSpark entities and stopping the simulation tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">All tasks are stopped at </span><span style=\" font-size:8pt;\">the same time.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksStopButton->setWhatsThis(QApplication::translate("SimulationFrame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Stops the simulation by resetting all SimSpark entities and stopping the tasks.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Warning: All tasks are started at the same time. Some processes or tasks may need to be stopped one after another. Stop them one by one to prevent crashes.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksStopButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tasksRestartButton->setToolTip(QApplication::translate("SimulationFrame", "Restarts the simulation by stopping and running all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksRestartButton->setWhatsThis(QApplication::translate("SimulationFrame", "Restarts the simulation by stopping and running all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksRestartButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tasksExpandButton->setToolTip(QApplication::translate("SimulationFrame", "Expands detailed information of all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksExpandButton->setWhatsThis(QApplication::translate("SimulationFrame", "Expands detailed information of all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksExpandButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        tasksCollapseButton->setToolTip(QApplication::translate("SimulationFrame", "Collapses detailed information of all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        tasksCollapseButton->setWhatsThis(QApplication::translate("SimulationFrame", "Collapses detailed information of all tasks.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        tasksCollapseButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SimulationFrame: public Ui_SimulationFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONFRAME_H
