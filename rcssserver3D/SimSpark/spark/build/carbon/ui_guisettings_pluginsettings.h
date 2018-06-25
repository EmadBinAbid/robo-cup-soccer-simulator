/********************************************************************************
** Form generated from reading UI file 'guisettings_pluginsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISETTINGS_PLUGINSETTINGS_H
#define UI_GUISETTINGS_PLUGINSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "settingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_PluginSettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *pluginsGroupBox;
    QFormLayout *formLayout_4;
    QLabel *pluginsPathsLabel;
    QPlainTextEdit *pluginsPathsEdit;
    QLabel *pluginsFilesLabel;
    QPlainTextEdit *pluginsFilesEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(SettingsWidget *PluginSettings)
    {
        if (PluginSettings->objectName().isEmpty())
            PluginSettings->setObjectName(QString::fromUtf8("PluginSettings"));
        PluginSettings->resize(786, 330);
        verticalLayout = new QVBoxLayout(PluginSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(PluginSettings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 786, 330));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pluginsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        pluginsGroupBox->setObjectName(QString::fromUtf8("pluginsGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pluginsGroupBox->sizePolicy().hasHeightForWidth());
        pluginsGroupBox->setSizePolicy(sizePolicy);
        pluginsGroupBox->setMaximumSize(QSize(16777215, 16777215));
        formLayout_4 = new QFormLayout(pluginsGroupBox);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pluginsPathsLabel = new QLabel(pluginsGroupBox);
        pluginsPathsLabel->setObjectName(QString::fromUtf8("pluginsPathsLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, pluginsPathsLabel);

        pluginsPathsEdit = new QPlainTextEdit(pluginsGroupBox);
        pluginsPathsEdit->setObjectName(QString::fromUtf8("pluginsPathsEdit"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, pluginsPathsEdit);

        pluginsFilesLabel = new QLabel(pluginsGroupBox);
        pluginsFilesLabel->setObjectName(QString::fromUtf8("pluginsFilesLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, pluginsFilesLabel);

        pluginsFilesEdit = new QPlainTextEdit(pluginsGroupBox);
        pluginsFilesEdit->setObjectName(QString::fromUtf8("pluginsFilesEdit"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, pluginsFilesEdit);


        verticalLayout_2->addWidget(pluginsGroupBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(PluginSettings);
        QObject::connect(pluginsPathsEdit, SIGNAL(textChanged()), PluginSettings, SLOT(editPluginPaths()));
        QObject::connect(pluginsFilesEdit, SIGNAL(textChanged()), PluginSettings, SLOT(editPluginFiles()));

        QMetaObject::connectSlotsByName(PluginSettings);
    } // setupUi

    void retranslateUi(SettingsWidget *PluginSettings)
    {
        PluginSettings->setWindowTitle(QApplication::translate("PluginSettings", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        pluginsGroupBox->setWhatsThis(QApplication::translate("PluginSettings", "List of shared plugin libraries to include.\n"
"\n"
"The libraries must be libraries that export plugins and the same plugins must not be exported multiple times. \n"
"E.g., debug and release versions of plugins need to be named differently if they are in two different shared libraries.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pluginsGroupBox->setTitle(QApplication::translate("PluginSettings", "Plugins", 0, QApplication::UnicodeUTF8));
        pluginsPathsLabel->setText(QApplication::translate("PluginSettings", "Include Paths:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginsPathsEdit->setToolTip(QApplication::translate("PluginSettings", "Enter-separated list of include directories for shared plugin libraries.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pluginsPathsEdit->setWhatsThis(QApplication::translate("PluginSettings", "List of paths to include shared plugin libraries from.\n"
"All libraries found in these directories will be linked to the application.\n"
"\n"
"The libraries must be libraries that export plugins and the same plugins must not be exported multiple times. \n"
"E.g., debug and release versions of plugins need to be named differently if they are in two different shared libraries.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pluginsFilesLabel->setText(QApplication::translate("PluginSettings", "Include Files:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginsFilesEdit->setToolTip(QApplication::translate("PluginSettings", "Enter-separated list of single shared plugin libraries to include.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PluginSettings: public Ui_PluginSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISETTINGS_PLUGINSETTINGS_H
