/********************************************************************************
** Form generated from reading UI file 'guisettings_simulationsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISETTINGS_SIMULATIONSETTINGS_H
#define UI_GUISETTINGS_SIMULATIONSETTINGS_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "settingswidget.h"

QT_BEGIN_NAMESPACE

class Ui_SimulationSettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *setupsGroupBox;
    QFormLayout *formLayout_2;
    QLabel *setupsLabel1;
    QPlainTextEdit *setupsPathsEdit;
    QLabel *setupsLabel2;
    QPlainTextEdit *setupsFilesEdit;
    QGroupBox *executablesGroupBox;
    QFormLayout *formLayout;
    QLabel *executablesLabel1;
    QPlainTextEdit *executablesPathsEdit;
    QLabel *executablesLabel2;
    QPlainTextEdit *executablesFilesEdit;
    QGroupBox *scriptsGroupBox;
    QFormLayout *formLayout_3;
    QLabel *scriptsLabel1;
    QPlainTextEdit *scriptsPathsEdit;
    QLabel *scriptsLabel2;
    QPlainTextEdit *scriptsFilesEdit;

    void setupUi(SettingsWidget *SimulationSettings)
    {
        if (SimulationSettings->objectName().isEmpty())
            SimulationSettings->setObjectName(QString::fromUtf8("SimulationSettings"));
        SimulationSettings->resize(786, 530);
        verticalLayout = new QVBoxLayout(SimulationSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(SimulationSettings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Sunken);
        scrollArea->setLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 786, 530));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        setupsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        setupsGroupBox->setObjectName(QString::fromUtf8("setupsGroupBox"));
        formLayout_2 = new QFormLayout(setupsGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        setupsLabel1 = new QLabel(setupsGroupBox);
        setupsLabel1->setObjectName(QString::fromUtf8("setupsLabel1"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, setupsLabel1);

        setupsPathsEdit = new QPlainTextEdit(setupsGroupBox);
        setupsPathsEdit->setObjectName(QString::fromUtf8("setupsPathsEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, setupsPathsEdit);

        setupsLabel2 = new QLabel(setupsGroupBox);
        setupsLabel2->setObjectName(QString::fromUtf8("setupsLabel2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, setupsLabel2);

        setupsFilesEdit = new QPlainTextEdit(setupsGroupBox);
        setupsFilesEdit->setObjectName(QString::fromUtf8("setupsFilesEdit"));
        setupsFilesEdit->setMaximumSize(QSize(16777215, 40));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, setupsFilesEdit);


        verticalLayout_2->addWidget(setupsGroupBox);

        executablesGroupBox = new QGroupBox(scrollAreaWidgetContents);
        executablesGroupBox->setObjectName(QString::fromUtf8("executablesGroupBox"));
        formLayout = new QFormLayout(executablesGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        executablesLabel1 = new QLabel(executablesGroupBox);
        executablesLabel1->setObjectName(QString::fromUtf8("executablesLabel1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, executablesLabel1);

        executablesPathsEdit = new QPlainTextEdit(executablesGroupBox);
        executablesPathsEdit->setObjectName(QString::fromUtf8("executablesPathsEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, executablesPathsEdit);

        executablesLabel2 = new QLabel(executablesGroupBox);
        executablesLabel2->setObjectName(QString::fromUtf8("executablesLabel2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, executablesLabel2);

        executablesFilesEdit = new QPlainTextEdit(executablesGroupBox);
        executablesFilesEdit->setObjectName(QString::fromUtf8("executablesFilesEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(executablesFilesEdit->sizePolicy().hasHeightForWidth());
        executablesFilesEdit->setSizePolicy(sizePolicy);
        executablesFilesEdit->setMinimumSize(QSize(0, 40));
        executablesFilesEdit->setMaximumSize(QSize(16777215, 40));

        formLayout->setWidget(1, QFormLayout::FieldRole, executablesFilesEdit);


        verticalLayout_2->addWidget(executablesGroupBox);

        scriptsGroupBox = new QGroupBox(scrollAreaWidgetContents);
        scriptsGroupBox->setObjectName(QString::fromUtf8("scriptsGroupBox"));
        formLayout_3 = new QFormLayout(scriptsGroupBox);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        scriptsLabel1 = new QLabel(scriptsGroupBox);
        scriptsLabel1->setObjectName(QString::fromUtf8("scriptsLabel1"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, scriptsLabel1);

        scriptsPathsEdit = new QPlainTextEdit(scriptsGroupBox);
        scriptsPathsEdit->setObjectName(QString::fromUtf8("scriptsPathsEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, scriptsPathsEdit);

        scriptsLabel2 = new QLabel(scriptsGroupBox);
        scriptsLabel2->setObjectName(QString::fromUtf8("scriptsLabel2"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, scriptsLabel2);

        scriptsFilesEdit = new QPlainTextEdit(scriptsGroupBox);
        scriptsFilesEdit->setObjectName(QString::fromUtf8("scriptsFilesEdit"));
        scriptsFilesEdit->setMaximumSize(QSize(16777215, 40));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, scriptsFilesEdit);


        verticalLayout_2->addWidget(scriptsGroupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(SimulationSettings);
        QObject::connect(executablesPathsEdit, SIGNAL(textChanged()), SimulationSettings, SLOT(editExecutablePaths()));
        QObject::connect(executablesFilesEdit, SIGNAL(textChanged()), SimulationSettings, SLOT(editExecutableFiles()));
        QObject::connect(setupsPathsEdit, SIGNAL(textChanged()), SimulationSettings, SLOT(editSetupPaths()));
        QObject::connect(setupsFilesEdit, SIGNAL(textChanged()), SimulationSettings, SLOT(editSetupFiles()));
        QObject::connect(scriptsPathsEdit, SIGNAL(textChanged()), SimulationSettings, SLOT(editScriptPaths()));
        QObject::connect(scriptsFilesEdit, SIGNAL(textChanged()), SimulationSettings, SLOT(editScriptFiles()));

        QMetaObject::connectSlotsByName(SimulationSettings);
    } // setupUi

    void retranslateUi(SettingsWidget *SimulationSettings)
    {
        SimulationSettings->setWindowTitle(QApplication::translate("SimulationSettings", "Form", 0, QApplication::UnicodeUTF8));
        setupsGroupBox->setTitle(QApplication::translate("SimulationSettings", "Simulation Setups", 0, QApplication::UnicodeUTF8));
        setupsLabel1->setText(QApplication::translate("SimulationSettings", "Include Paths:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setupsPathsEdit->setToolTip(QApplication::translate("SimulationSettings", "Enter-separated list of include directories for Simulation Setups.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        setupsPathsEdit->setWhatsThis(QApplication::translate("SimulationSettings", "Include paths for simulation setups.\n"
"\n"
"Simulation setup files found in one of these directories will be shown as default setups in the simulation setup list in the file menu.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        setupsLabel2->setText(QApplication::translate("SimulationSettings", "Include Files:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setupsFilesEdit->setToolTip(QApplication::translate("SimulationSettings", "Enter-separated list of single SimulationSetups to include.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        setupsFilesEdit->setWhatsThis(QApplication::translate("SimulationSettings", "Include single simulation setups.\n"
"\n"
"Simulation setup files included this way will be shown as default setups in the simulation setup list in the file menu.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        executablesGroupBox->setTitle(QApplication::translate("SimulationSettings", "Executables", 0, QApplication::UnicodeUTF8));
        executablesLabel1->setText(QApplication::translate("SimulationSettings", "Include Paths:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        executablesPathsEdit->setToolTip(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enter-separated list of include directories for executables.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Executables contained in one of these directories can be addressed in several plugins simply by using their name.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        executablesPathsEdit->setWhatsThis(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Include paths for executables.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Executables found in one of these directories can be addressed by their name in the Simulation Manager.</span></p>\n"
"<p style=\" margin-top:0px; margin-botto"
                        "m:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">(E.g. &quot;C:\\\\....\\MyExecutable.exe&quot; can be addressed as &quot;MyExecutable.exe&quot; or &quot;MyExecutable&quot;)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        executablesLabel2->setText(QApplication::translate("SimulationSettings", "Include Files:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        executablesFilesEdit->setToolTip(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enter-separated list of paths to single executables to include.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Executables that are included can be addressed in several plugins simply by using their name.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        executablesFilesEdit->setWhatsThis(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Includes single executables.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Executables included this way can be addressed by their name in the Simulation Manager.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">(E.g. &quot;C:\\\\....\\MyExecutable.exe&quot; can be addressed as &quot;MyExecutable.exe&quot; or &quot;MyExecutable&quot;)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        scriptsGroupBox->setTitle(QApplication::translate("SimulationSettings", "Script Files", 0, QApplication::UnicodeUTF8));
        scriptsLabel1->setText(QApplication::translate("SimulationSettings", "Include Paths:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        scriptsPathsEdit->setToolTip(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enter-separated list of include directories for script files.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Script files contained in one of these directories can be addressed in several plugins simply by using their name.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        scriptsPathsEdit->setWhatsThis(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Include paths for script files.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Script files found in one of these directories can be addressed by their name in the Simulation Manager.</span></p>\n"
"<p style=\" margin-top:0px; margin-bot"
                        "tom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">(E.g. &quot;C:\\\\....\\MyScript.rb&quot; can be addressed as &quot;MyScript.rb&quot; or &quot;MyScript&quot;)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        scriptsLabel2->setText(QApplication::translate("SimulationSettings", "Include Files:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        scriptsFilesEdit->setToolTip(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Enter-separated list of paths to single script files to include.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Script files that are included can be addressed in several plugins simply by using their name.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        scriptsFilesEdit->setWhatsThis(QApplication::translate("SimulationSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Includes single script files.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Script files included this way can be addressed by their name in the Simulation Manager.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-le"
                        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">(E.g. &quot;C:\\\\....\\MyScript.rb&quot; can be addressed as &quot;MyScript.rb&quot; or &quot;MyScript&quot;)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SimulationSettings: public Ui_SimulationSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISETTINGS_SIMULATIONSETTINGS_H
