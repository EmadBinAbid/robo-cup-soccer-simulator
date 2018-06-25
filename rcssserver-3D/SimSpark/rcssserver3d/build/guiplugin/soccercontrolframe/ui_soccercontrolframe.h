/********************************************************************************
** Form generated from reading UI file 'soccercontrolframe.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOCCERCONTROLFRAME_H
#define UI_SOCCERCONTROLFRAME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "attachableframe.h"

QT_BEGIN_NAMESPACE

class Ui_SoccerControlFrame
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *gameTimeHeaderLabel;
    QLineEdit *gameTimeEdit;
    QToolButton *gameTimeResetButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *team1NameHeaderLabel;
    QLabel *team1NameLabel;
    QLabel *team1GoalsHeaderLabel;
    QLabel *team1PenaltiesHeaderLabel;
    QLineEdit *team1GoalsEdit;
    QLineEdit *team1PenaltiesEdit;
    QWidget *widget_2;
    QFormLayout *formLayout_2;
    QLabel *team2NameHeaderLabel;
    QLabel *team2NameLabel;
    QLabel *team2GoalsHeaderLabel;
    QLabel *team2PenaltiesHeaderLabel;
    QLineEdit *team2GoalsEdit;
    QLineEdit *team2PenaltiesEdit;
    QFrame *line;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QToolButton *playModeButton;
    QComboBox *playModeComboBox;
    QLabel *playModeHeaderLabel;
    QLabel *playModeLabel;
    QFrame *line_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *kickOffButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_4;
    QListWidget *playersListWidget;
    QWidget *widget_9;
    QGridLayout *gridLayout;
    QLabel *agentNameHeaderLabel;
    QLabel *agentTeamHeaderLabel;
    QLabel *agentTeamLabel;
    QLabel *agentNameLabel;
    QWidget *widget_10;
    QGridLayout *gridLayout_2;
    QLabel *batteryHeaderLabel;
    QToolButton *resetBatteryButton;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *batteryEdit;
    QLabel *temperatureHeaderLabel;
    QLineEdit *temperatureEdit;
    QToolButton *resetTemperatureButton;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_6;

    void setupUi(AttachableFrame *SoccerControlFrame)
    {
        if (SoccerControlFrame->objectName().isEmpty())
            SoccerControlFrame->setObjectName(QString::fromUtf8("SoccerControlFrame"));
        SoccerControlFrame->resize(297, 565);
        gridLayout_3 = new QGridLayout(SoccerControlFrame);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_6 = new QWidget(SoccerControlFrame);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        verticalLayout_5 = new QVBoxLayout(widget_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(widget_6);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(10);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_8 = new QWidget(groupBox);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        QFont font1;
        font1.setPointSize(8);
        widget_8->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(widget_8);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gameTimeHeaderLabel = new QLabel(widget_8);
        gameTimeHeaderLabel->setObjectName(QString::fromUtf8("gameTimeHeaderLabel"));
        gameTimeHeaderLabel->setFont(font1);

        horizontalLayout_4->addWidget(gameTimeHeaderLabel);

        gameTimeEdit = new QLineEdit(widget_8);
        gameTimeEdit->setObjectName(QString::fromUtf8("gameTimeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gameTimeEdit->sizePolicy().hasHeightForWidth());
        gameTimeEdit->setSizePolicy(sizePolicy);
        gameTimeEdit->setMinimumSize(QSize(100, 0));
        gameTimeEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(gameTimeEdit);

        gameTimeResetButton = new QToolButton(widget_8);
        gameTimeResetButton->setObjectName(QString::fromUtf8("gameTimeResetButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/arrow_undo"), QSize(), QIcon::Normal, QIcon::Off);
        gameTimeResetButton->setIcon(icon);

        horizontalLayout_4->addWidget(gameTimeResetButton);

        horizontalSpacer_2 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_8);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setFont(font1);
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setFont(font1);
        formLayout = new QFormLayout(widget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(3);
        team1NameHeaderLabel = new QLabel(widget);
        team1NameHeaderLabel->setObjectName(QString::fromUtf8("team1NameHeaderLabel"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        team1NameHeaderLabel->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, team1NameHeaderLabel);

        team1NameLabel = new QLabel(widget);
        team1NameLabel->setObjectName(QString::fromUtf8("team1NameLabel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, team1NameLabel);

        team1GoalsHeaderLabel = new QLabel(widget);
        team1GoalsHeaderLabel->setObjectName(QString::fromUtf8("team1GoalsHeaderLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, team1GoalsHeaderLabel);

        team1PenaltiesHeaderLabel = new QLabel(widget);
        team1PenaltiesHeaderLabel->setObjectName(QString::fromUtf8("team1PenaltiesHeaderLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, team1PenaltiesHeaderLabel);

        team1GoalsEdit = new QLineEdit(widget);
        team1GoalsEdit->setObjectName(QString::fromUtf8("team1GoalsEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, team1GoalsEdit);

        team1PenaltiesEdit = new QLineEdit(widget);
        team1PenaltiesEdit->setObjectName(QString::fromUtf8("team1PenaltiesEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, team1PenaltiesEdit);


        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        formLayout_2 = new QFormLayout(widget_2);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setVerticalSpacing(3);
        team2NameHeaderLabel = new QLabel(widget_2);
        team2NameHeaderLabel->setObjectName(QString::fromUtf8("team2NameHeaderLabel"));
        team2NameHeaderLabel->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, team2NameHeaderLabel);

        team2NameLabel = new QLabel(widget_2);
        team2NameLabel->setObjectName(QString::fromUtf8("team2NameLabel"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, team2NameLabel);

        team2GoalsHeaderLabel = new QLabel(widget_2);
        team2GoalsHeaderLabel->setObjectName(QString::fromUtf8("team2GoalsHeaderLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, team2GoalsHeaderLabel);

        team2PenaltiesHeaderLabel = new QLabel(widget_2);
        team2PenaltiesHeaderLabel->setObjectName(QString::fromUtf8("team2PenaltiesHeaderLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, team2PenaltiesHeaderLabel);

        team2GoalsEdit = new QLineEdit(widget_2);
        team2GoalsEdit->setObjectName(QString::fromUtf8("team2GoalsEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, team2GoalsEdit);

        team2PenaltiesEdit = new QLineEdit(widget_2);
        team2PenaltiesEdit->setObjectName(QString::fromUtf8("team2PenaltiesEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, team2PenaltiesEdit);


        horizontalLayout->addWidget(widget_2);


        verticalLayout->addWidget(widget_3);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setFont(font1);
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        playModeButton = new QToolButton(widget_4);
        playModeButton->setObjectName(QString::fromUtf8("playModeButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/accept"), QSize(), QIcon::Normal, QIcon::Off);
        playModeButton->setIcon(icon1);

        gridLayout_4->addWidget(playModeButton, 1, 3, 1, 1);

        playModeComboBox = new QComboBox(widget_4);
        playModeComboBox->setObjectName(QString::fromUtf8("playModeComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playModeComboBox->sizePolicy().hasHeightForWidth());
        playModeComboBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(playModeComboBox, 1, 2, 1, 1);

        playModeHeaderLabel = new QLabel(widget_4);
        playModeHeaderLabel->setObjectName(QString::fromUtf8("playModeHeaderLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(playModeHeaderLabel->sizePolicy().hasHeightForWidth());
        playModeHeaderLabel->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(playModeHeaderLabel, 0, 1, 1, 1);

        playModeLabel = new QLabel(widget_4);
        playModeLabel->setObjectName(QString::fromUtf8("playModeLabel"));

        gridLayout_4->addWidget(playModeLabel, 0, 2, 1, 1);


        verticalLayout->addWidget(widget_4);

        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        kickOffButton = new QToolButton(widget_5);
        kickOffButton->setObjectName(QString::fromUtf8("kickOffButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/sport_soccer"), QSize(), QIcon::Normal, QIcon::Off);
        kickOffButton->setIcon(icon2);

        horizontalLayout_2->addWidget(kickOffButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_5);


        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_7 = new QWidget(groupBox_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        verticalLayout_4 = new QVBoxLayout(widget_7);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        playersListWidget = new QListWidget(widget_7);
        playersListWidget->setObjectName(QString::fromUtf8("playersListWidget"));
        playersListWidget->setFont(font1);

        verticalLayout_4->addWidget(playersListWidget);

        widget_9 = new QWidget(widget_7);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setFont(font1);
        gridLayout = new QGridLayout(widget_9);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        agentNameHeaderLabel = new QLabel(widget_9);
        agentNameHeaderLabel->setObjectName(QString::fromUtf8("agentNameHeaderLabel"));
        sizePolicy2.setHeightForWidth(agentNameHeaderLabel->sizePolicy().hasHeightForWidth());
        agentNameHeaderLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(agentNameHeaderLabel, 0, 0, 1, 1);

        agentTeamHeaderLabel = new QLabel(widget_9);
        agentTeamHeaderLabel->setObjectName(QString::fromUtf8("agentTeamHeaderLabel"));

        gridLayout->addWidget(agentTeamHeaderLabel, 0, 2, 1, 1);

        agentTeamLabel = new QLabel(widget_9);
        agentTeamLabel->setObjectName(QString::fromUtf8("agentTeamLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(agentTeamLabel->sizePolicy().hasHeightForWidth());
        agentTeamLabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(agentTeamLabel, 0, 3, 1, 1);

        agentNameLabel = new QLabel(widget_9);
        agentNameLabel->setObjectName(QString::fromUtf8("agentNameLabel"));
        sizePolicy3.setHeightForWidth(agentNameLabel->sizePolicy().hasHeightForWidth());
        agentNameLabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(agentNameLabel, 0, 1, 1, 1);


        verticalLayout_4->addWidget(widget_9);


        verticalLayout_2->addWidget(widget_7);

        widget_10 = new QWidget(groupBox_2);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setFont(font1);
        gridLayout_2 = new QGridLayout(widget_10);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(2);
        batteryHeaderLabel = new QLabel(widget_10);
        batteryHeaderLabel->setObjectName(QString::fromUtf8("batteryHeaderLabel"));

        gridLayout_2->addWidget(batteryHeaderLabel, 0, 0, 1, 1);

        resetBatteryButton = new QToolButton(widget_10);
        resetBatteryButton->setObjectName(QString::fromUtf8("resetBatteryButton"));
        resetBatteryButton->setIcon(icon);

        gridLayout_2->addWidget(resetBatteryButton, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        batteryEdit = new QLineEdit(widget_10);
        batteryEdit->setObjectName(QString::fromUtf8("batteryEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(100);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(batteryEdit->sizePolicy().hasHeightForWidth());
        batteryEdit->setSizePolicy(sizePolicy4);
        batteryEdit->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(batteryEdit, 0, 1, 1, 1);

        temperatureHeaderLabel = new QLabel(widget_10);
        temperatureHeaderLabel->setObjectName(QString::fromUtf8("temperatureHeaderLabel"));

        gridLayout_2->addWidget(temperatureHeaderLabel, 1, 0, 1, 1);

        temperatureEdit = new QLineEdit(widget_10);
        temperatureEdit->setObjectName(QString::fromUtf8("temperatureEdit"));
        sizePolicy4.setHeightForWidth(temperatureEdit->sizePolicy().hasHeightForWidth());
        temperatureEdit->setSizePolicy(sizePolicy4);
        temperatureEdit->setMinimumSize(QSize(100, 0));

        gridLayout_2->addWidget(temperatureEdit, 1, 1, 1, 1);

        resetTemperatureButton = new QToolButton(widget_10);
        resetTemperatureButton->setObjectName(QString::fromUtf8("resetTemperatureButton"));
        resetTemperatureButton->setIcon(icon);

        gridLayout_2->addWidget(resetTemperatureButton, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(256, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 4, 1, 1);


        verticalLayout_2->addWidget(widget_10);

        widget_11 = new QWidget(groupBox_2);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_6 = new QHBoxLayout(widget_11);
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        verticalLayout_2->addWidget(widget_11);


        verticalLayout_5->addWidget(groupBox_2);


        gridLayout_3->addWidget(widget_6, 0, 0, 1, 1);


        retranslateUi(SoccerControlFrame);
        QObject::connect(gameTimeEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editGameTime()));
        QObject::connect(gameTimeResetButton, SIGNAL(clicked()), SoccerControlFrame, SLOT(resetGameTime()));
        QObject::connect(team1GoalsEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editTeam1Goals()));
        QObject::connect(team2GoalsEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editTeam2Goals()));
        QObject::connect(team1PenaltiesEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editTeam1Penalties()));
        QObject::connect(team2PenaltiesEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editTeam2Penalties()));
        QObject::connect(playModeComboBox, SIGNAL(currentIndexChanged(int)), SoccerControlFrame, SLOT(selectPlayMode(int)));
        QObject::connect(playModeButton, SIGNAL(clicked()), SoccerControlFrame, SLOT(changePlayMode()));
        QObject::connect(kickOffButton, SIGNAL(clicked(bool)), SoccerControlFrame, SLOT(kickOff()));
        QObject::connect(playersListWidget, SIGNAL(currentRowChanged(int)), SoccerControlFrame, SLOT(selectPlayer(int)));
        QObject::connect(batteryEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editBattery()));
        QObject::connect(resetBatteryButton, SIGNAL(clicked()), SoccerControlFrame, SLOT(resetBattery()));
        QObject::connect(temperatureEdit, SIGNAL(editingFinished()), SoccerControlFrame, SLOT(editTemperature()));
        QObject::connect(resetTemperatureButton, SIGNAL(clicked()), SoccerControlFrame, SLOT(resetTemperature()));

        QMetaObject::connectSlotsByName(SoccerControlFrame);
    } // setupUi

    void retranslateUi(AttachableFrame *SoccerControlFrame)
    {
        SoccerControlFrame->setWindowTitle(QApplication::translate("SoccerControlFrame", "Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        SoccerControlFrame->setWhatsThis(QApplication::translate("SoccerControlFrame", "The soccer control frame can be used to monitor and control the state of a simspark soccer simulation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(QApplication::translate("SoccerControlFrame", "Game State", 0, QApplication::UnicodeUTF8));
        gameTimeHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Game Time:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gameTimeEdit->setToolTip(QApplication::translate("SoccerControlFrame", "Current game time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        gameTimeResetButton->setToolTip(QApplication::translate("SoccerControlFrame", "Reset the game time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gameTimeResetButton->setText(QString());
        team1NameHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Team:", 0, QApplication::UnicodeUTF8));
        team1NameLabel->setText(QApplication::translate("SoccerControlFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        team1GoalsHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Goals:", 0, QApplication::UnicodeUTF8));
        team1PenaltiesHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Penalties:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        team1GoalsEdit->setToolTip(QApplication::translate("SoccerControlFrame", "Golad of first team.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        team1PenaltiesEdit->setToolTip(QApplication::translate("SoccerControlFrame", "Penalties of first team.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        team2NameHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Team:", 0, QApplication::UnicodeUTF8));
        team2NameLabel->setText(QApplication::translate("SoccerControlFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        team2GoalsHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Goals:", 0, QApplication::UnicodeUTF8));
        team2PenaltiesHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Penalties:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        team2GoalsEdit->setToolTip(QApplication::translate("SoccerControlFrame", "Goals of second team.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        team2PenaltiesEdit->setToolTip(QApplication::translate("SoccerControlFrame", "Penalties of second team.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        playModeButton->setToolTip(QApplication::translate("SoccerControlFrame", "Change the play mode.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        playModeButton->setWhatsThis(QApplication::translate("SoccerControlFrame", "Changes the current play mode to what is selected in the selection box.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        playModeButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        playModeComboBox->setToolTip(QApplication::translate("SoccerControlFrame", "Change the play mode.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        playModeComboBox->setWhatsThis(QApplication::translate("SoccerControlFrame", "Choose a play mode here and activate it with the button.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        playModeHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "PlayMode:", 0, QApplication::UnicodeUTF8));
        playModeLabel->setText(QApplication::translate("SoccerControlFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        kickOffButton->setToolTip(QApplication::translate("SoccerControlFrame", "Kickoff", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        kickOffButton->setText(QString());
        groupBox_2->setTitle(QApplication::translate("SoccerControlFrame", "Players", 0, QApplication::UnicodeUTF8));
        agentNameHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Name:", 0, QApplication::UnicodeUTF8));
        agentTeamHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Team:", 0, QApplication::UnicodeUTF8));
        agentTeamLabel->setText(QApplication::translate("SoccerControlFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        agentNameLabel->setText(QApplication::translate("SoccerControlFrame", "TextLabel", 0, QApplication::UnicodeUTF8));
        batteryHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Battery:", 0, QApplication::UnicodeUTF8));
        resetBatteryButton->setText(QString());
        temperatureHeaderLabel->setText(QApplication::translate("SoccerControlFrame", "Tempertature:", 0, QApplication::UnicodeUTF8));
        resetTemperatureButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SoccerControlFrame: public Ui_SoccerControlFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOCCERCONTROLFRAME_H
