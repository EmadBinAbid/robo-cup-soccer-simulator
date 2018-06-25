/********************************************************************************
** Form generated from reading UI file 'logframe_logsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGFRAME_LOGSETTINGS_H
#define UI_LOGFRAME_LOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include "settingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_LogSettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *messagesGroupBox;
    QGridLayout *gridLayout_2;
    QGridLayout *messagesMainLayout;
    QFormLayout *messagesFormLayout;
    QLabel *label;
    QSpinBox *messageAmountSpinBox;
    QLabel *label_2;
    QLineEdit *customFormatEdit1;
    QLineEdit *customFormatEdit2;
    QLineEdit *customFormatEdit3;
    QSpacerItem *messagesSpacer;
    QGroupBox *textColorGroupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *textColorLayout;
    QVBoxLayout *textColorListLayout;
    QListWidget *textColorList;
    QVBoxLayout *textColorSettingsLayout;
    QGridLayout *textColorSettingsGridLayout;
    QComboBox *textColorComboBox;
    QSpinBox *redSpinBox;
    QSpinBox *greenSpinBox;
    QSpinBox *blueSpinBox;
    QHBoxLayout *textColorLabelLayout;
    QLabel *redLabel;
    QLabel *greenLabel;
    QLabel *blueLabel;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *textColorExampleLayout;
    QLabel *label_3;
    QTextEdit *textColorExampleEdit;
    QSpacerItem *verticalSpacer_2;

    void setupUi(SettingsWidget *LogSettings)
    {
        if (LogSettings->objectName().isEmpty())
            LogSettings->setObjectName(QString::fromUtf8("LogSettings"));
        LogSettings->resize(757, 471);
        verticalLayout_3 = new QVBoxLayout(LogSettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        messagesGroupBox = new QGroupBox(LogSettings);
        messagesGroupBox->setObjectName(QString::fromUtf8("messagesGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(messagesGroupBox->sizePolicy().hasHeightForWidth());
        messagesGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(messagesGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        messagesMainLayout = new QGridLayout();
        messagesMainLayout->setObjectName(QString::fromUtf8("messagesMainLayout"));
        messagesFormLayout = new QFormLayout();
        messagesFormLayout->setObjectName(QString::fromUtf8("messagesFormLayout"));
        messagesFormLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label = new QLabel(messagesGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        messagesFormLayout->setWidget(0, QFormLayout::LabelRole, label);

        messageAmountSpinBox = new QSpinBox(messagesGroupBox);
        messageAmountSpinBox->setObjectName(QString::fromUtf8("messageAmountSpinBox"));
        messageAmountSpinBox->setMaximum(1000000);
        messageAmountSpinBox->setValue(1000);

        messagesFormLayout->setWidget(0, QFormLayout::FieldRole, messageAmountSpinBox);

        label_2 = new QLabel(messagesGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        messagesFormLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        customFormatEdit1 = new QLineEdit(messagesGroupBox);
        customFormatEdit1->setObjectName(QString::fromUtf8("customFormatEdit1"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customFormatEdit1->sizePolicy().hasHeightForWidth());
        customFormatEdit1->setSizePolicy(sizePolicy1);
        customFormatEdit1->setReadOnly(true);

        messagesFormLayout->setWidget(1, QFormLayout::FieldRole, customFormatEdit1);

        customFormatEdit2 = new QLineEdit(messagesGroupBox);
        customFormatEdit2->setObjectName(QString::fromUtf8("customFormatEdit2"));
        sizePolicy1.setHeightForWidth(customFormatEdit2->sizePolicy().hasHeightForWidth());
        customFormatEdit2->setSizePolicy(sizePolicy1);
        customFormatEdit2->setReadOnly(true);

        messagesFormLayout->setWidget(2, QFormLayout::FieldRole, customFormatEdit2);

        customFormatEdit3 = new QLineEdit(messagesGroupBox);
        customFormatEdit3->setObjectName(QString::fromUtf8("customFormatEdit3"));
        sizePolicy1.setHeightForWidth(customFormatEdit3->sizePolicy().hasHeightForWidth());
        customFormatEdit3->setSizePolicy(sizePolicy1);
        customFormatEdit3->setReadOnly(true);

        messagesFormLayout->setWidget(3, QFormLayout::FieldRole, customFormatEdit3);


        messagesMainLayout->addLayout(messagesFormLayout, 0, 0, 1, 1);

        messagesSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        messagesMainLayout->addItem(messagesSpacer, 0, 1, 1, 1);


        gridLayout_2->addLayout(messagesMainLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(messagesGroupBox);

        textColorGroupBox = new QGroupBox(LogSettings);
        textColorGroupBox->setObjectName(QString::fromUtf8("textColorGroupBox"));
        sizePolicy.setHeightForWidth(textColorGroupBox->sizePolicy().hasHeightForWidth());
        textColorGroupBox->setSizePolicy(sizePolicy);
        textColorGroupBox->setMinimumSize(QSize(0, 130));
        textColorGroupBox->setMaximumSize(QSize(16777215, 130));
        gridLayout = new QGridLayout(textColorGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textColorLayout = new QHBoxLayout();
        textColorLayout->setObjectName(QString::fromUtf8("textColorLayout"));
        textColorListLayout = new QVBoxLayout();
        textColorListLayout->setObjectName(QString::fromUtf8("textColorListLayout"));
        textColorList = new QListWidget(textColorGroupBox);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(textColorList);
        __qlistwidgetitem->setText(QString::fromUtf8("Debug"));
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(textColorList);
        __qlistwidgetitem1->setText(QString::fromUtf8("Info"));
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(textColorList);
        __qlistwidgetitem2->setText(QString::fromUtf8("Warning"));
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(textColorList);
        __qlistwidgetitem3->setText(QString::fromUtf8("Error"));
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(textColorList);
        __qlistwidgetitem4->setText(QString::fromUtf8("Fatal"));
        textColorList->setObjectName(QString::fromUtf8("textColorList"));
        textColorList->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textColorList->sizePolicy().hasHeightForWidth());
        textColorList->setSizePolicy(sizePolicy2);
        textColorList->setMaximumSize(QSize(100, 120));

        textColorListLayout->addWidget(textColorList);


        textColorLayout->addLayout(textColorListLayout);

        textColorSettingsLayout = new QVBoxLayout();
        textColorSettingsLayout->setObjectName(QString::fromUtf8("textColorSettingsLayout"));
        textColorSettingsGridLayout = new QGridLayout();
        textColorSettingsGridLayout->setObjectName(QString::fromUtf8("textColorSettingsGridLayout"));
        textColorComboBox = new QComboBox(textColorGroupBox);
        textColorComboBox->setObjectName(QString::fromUtf8("textColorComboBox"));

        textColorSettingsGridLayout->addWidget(textColorComboBox, 0, 0, 1, 3);

        redSpinBox = new QSpinBox(textColorGroupBox);
        redSpinBox->setObjectName(QString::fromUtf8("redSpinBox"));
        redSpinBox->setReadOnly(true);

        textColorSettingsGridLayout->addWidget(redSpinBox, 1, 0, 1, 1);

        greenSpinBox = new QSpinBox(textColorGroupBox);
        greenSpinBox->setObjectName(QString::fromUtf8("greenSpinBox"));
        greenSpinBox->setReadOnly(true);

        textColorSettingsGridLayout->addWidget(greenSpinBox, 1, 1, 1, 1);

        blueSpinBox = new QSpinBox(textColorGroupBox);
        blueSpinBox->setObjectName(QString::fromUtf8("blueSpinBox"));
        blueSpinBox->setReadOnly(true);

        textColorSettingsGridLayout->addWidget(blueSpinBox, 1, 2, 1, 1);


        textColorSettingsLayout->addLayout(textColorSettingsGridLayout);

        textColorLabelLayout = new QHBoxLayout();
        textColorLabelLayout->setObjectName(QString::fromUtf8("textColorLabelLayout"));
        redLabel = new QLabel(textColorGroupBox);
        redLabel->setObjectName(QString::fromUtf8("redLabel"));

        textColorLabelLayout->addWidget(redLabel);

        greenLabel = new QLabel(textColorGroupBox);
        greenLabel->setObjectName(QString::fromUtf8("greenLabel"));

        textColorLabelLayout->addWidget(greenLabel);

        blueLabel = new QLabel(textColorGroupBox);
        blueLabel->setObjectName(QString::fromUtf8("blueLabel"));

        textColorLabelLayout->addWidget(blueLabel);


        textColorSettingsLayout->addLayout(textColorLabelLayout);

        verticalSpacer = new QSpacerItem(137, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        textColorSettingsLayout->addItem(verticalSpacer);


        textColorLayout->addLayout(textColorSettingsLayout);

        textColorExampleLayout = new QVBoxLayout();
        textColorExampleLayout->setObjectName(QString::fromUtf8("textColorExampleLayout"));
        label_3 = new QLabel(textColorGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        textColorExampleLayout->addWidget(label_3);

        textColorExampleEdit = new QTextEdit(textColorGroupBox);
        textColorExampleEdit->setObjectName(QString::fromUtf8("textColorExampleEdit"));
        textColorExampleEdit->setReadOnly(true);

        textColorExampleLayout->addWidget(textColorExampleEdit);


        textColorLayout->addLayout(textColorExampleLayout);


        gridLayout->addLayout(textColorLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(textColorGroupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        retranslateUi(LogSettings);

        QMetaObject::connectSlotsByName(LogSettings);
    } // setupUi

    void retranslateUi(SettingsWidget *LogSettings)
    {
        LogSettings->setWindowTitle(QApplication::translate("LogSettings", "Form", 0, QApplication::UnicodeUTF8));
        messagesGroupBox->setTitle(QApplication::translate("LogSettings", "Messages:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LogSettings", "Maximum Amount of Messages:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        messageAmountSpinBox->setWhatsThis(QApplication::translate("LogSettings", "The maximum amount of messages queued.\n"
"The more messages are queued, the farther back messages can be re-formatted.\n"
"When changing the message format or displayed log level the message queue is searched and the log message display is updated accordingly.\n"
"The more messages are queued, the longer the reformatting takes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        label_2->setText(QApplication::translate("LogSettings", "Custom Message Formats (Todo):", 0, QApplication::UnicodeUTF8));
        customFormatEdit1->setPlaceholderText(QApplication::translate("LogSettings", "Format1", 0, QApplication::UnicodeUTF8));
        customFormatEdit2->setText(QString());
        customFormatEdit2->setPlaceholderText(QApplication::translate("LogSettings", "Format2", 0, QApplication::UnicodeUTF8));
        customFormatEdit3->setPlaceholderText(QApplication::translate("LogSettings", "Format3", 0, QApplication::UnicodeUTF8));
        textColorGroupBox->setTitle(QApplication::translate("LogSettings", "Text Color (Todo)", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = textColorList->isSortingEnabled();
        textColorList->setSortingEnabled(false);
        textColorList->setSortingEnabled(__sortingEnabled);

        textColorComboBox->clear();
        textColorComboBox->insertItems(0, QStringList()
         << QApplication::translate("LogSettings", "Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "White", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Black", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Red", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Green", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Cyan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Magenta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Yellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "Gray", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkRed", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkGreen", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkBlue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkCyan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkMagenta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkYellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "DarkGray", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("LogSettings", "LightGray", 0, QApplication::UnicodeUTF8)
        );
        redLabel->setText(QApplication::translate("LogSettings", "Red", 0, QApplication::UnicodeUTF8));
        greenLabel->setText(QApplication::translate("LogSettings", "Green", 0, QApplication::UnicodeUTF8));
        blueLabel->setText(QApplication::translate("LogSettings", "Blue", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LogSettings", "Example Text:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogSettings: public Ui_LogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGFRAME_LOGSETTINGS_H
