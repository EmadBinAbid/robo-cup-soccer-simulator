/********************************************************************************
** Form generated from reading UI file 'plugindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINDIALOG_H
#define UI_PLUGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "plugindialog.h"

QT_BEGIN_NAMESPACE

class Ui_PluginDialog
{
public:
    QGridLayout *gridLayout;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QGroupBox *pluginListGroupBox;
    QVBoxLayout *verticalLayout_5;
    PluginTableView *pluginListTableView;
    QWidget *pluginListSettingsWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *pluginListSettingWidget2;
    QFormLayout *formLayout_2;
    QLabel *pluginListTypeLabel;
    QLineEdit *pluginListTypeEdit;
    QLabel *pluginListClassLabel;
    QLineEdit *pluginListClassEdit;
    QLabel *pluginListCaptionLabel;
    QLineEdit *pluginListCaptionEdit;
    QWidget *pluginListParametersWidget;
    QFormLayout *formLayout_3;
    QLabel *pluginListParametersLabel;
    QPlainTextEdit *pluginListParametersTextEdit;
    QPushButton *deletePluginButton;
    QGroupBox *createPluginGroupBox;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *createPluginLayout;
    QVBoxLayout *createPluginLayout_2;
    QWidget *createPluginAvailablePluginWidget;
    QVBoxLayout *verticalLayout_7;
    QFrame *createPluginAvailablePluginHeader;
    QHBoxLayout *horizontalLayout_5;
    QLabel *createPluginAvailablePluginLabel;
    QToolButton *addPluginFileButton;
    QToolButton *addPluginDirectoryButton;
    QSpacerItem *horizontalSpacer;
    QTableView *createPluginAvailablePluginTableView;
    QWidget *createPluginWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *createPluginWidget2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *createPluginSettingsLayout;
    QLabel *createPluginCaptionLabel;
    QLineEdit *createPluginCaptionEdit;
    QLabel *createPluginAttachmentLabel;
    QComboBox *createPluginAttachmentComboBox;
    QSpacerItem *createPluginSpacer;
    QWidget *createPluginParametersWidget;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout;
    QLabel *createPluginParametersLabel;
    QPlainTextEdit *createPluginParametersTextEdit;
    QWidget *createPluginWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *createPluginButton;
    QPushButton *createExtensionButton;

    void setupUi(QDialog *PluginDialog)
    {
        if (PluginDialog->objectName().isEmpty())
            PluginDialog->setObjectName(QString::fromUtf8("PluginDialog"));
        PluginDialog->resize(802, 705);
        gridLayout = new QGridLayout(PluginDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_2 = new QSplitter(PluginDialog);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        pluginListGroupBox = new QGroupBox(splitter);
        pluginListGroupBox->setObjectName(QString::fromUtf8("pluginListGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(6);
        sizePolicy.setHeightForWidth(pluginListGroupBox->sizePolicy().hasHeightForWidth());
        pluginListGroupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        pluginListGroupBox->setFont(font);
        verticalLayout_5 = new QVBoxLayout(pluginListGroupBox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pluginListTableView = new PluginTableView(pluginListGroupBox);
        pluginListTableView->setObjectName(QString::fromUtf8("pluginListTableView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(4);
        sizePolicy1.setHeightForWidth(pluginListTableView->sizePolicy().hasHeightForWidth());
        pluginListTableView->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(8);
        pluginListTableView->setFont(font1);
        pluginListTableView->setDragEnabled(true);
        pluginListTableView->setDragDropMode(QAbstractItemView::DropOnly);
        pluginListTableView->setAlternatingRowColors(true);
        pluginListTableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        pluginListTableView->setSelectionBehavior(QAbstractItemView::SelectItems);
        pluginListTableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        pluginListTableView->setShowGrid(true);
        pluginListTableView->setGridStyle(Qt::NoPen);
        pluginListTableView->horizontalHeader()->setCascadingSectionResizes(true);
        pluginListTableView->horizontalHeader()->setDefaultSectionSize(140);
        pluginListTableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        pluginListTableView->horizontalHeader()->setStretchLastSection(true);
        pluginListTableView->verticalHeader()->setDefaultSectionSize(20);
        pluginListTableView->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout_5->addWidget(pluginListTableView);

        pluginListSettingsWidget = new QWidget(pluginListGroupBox);
        pluginListSettingsWidget->setObjectName(QString::fromUtf8("pluginListSettingsWidget"));
        horizontalLayout_3 = new QHBoxLayout(pluginListSettingsWidget);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pluginListSettingWidget2 = new QWidget(pluginListSettingsWidget);
        pluginListSettingWidget2->setObjectName(QString::fromUtf8("pluginListSettingWidget2"));
        pluginListSettingWidget2->setFont(font1);
        formLayout_2 = new QFormLayout(pluginListSettingWidget2);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        pluginListTypeLabel = new QLabel(pluginListSettingWidget2);
        pluginListTypeLabel->setObjectName(QString::fromUtf8("pluginListTypeLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pluginListTypeLabel);

        pluginListTypeEdit = new QLineEdit(pluginListSettingWidget2);
        pluginListTypeEdit->setObjectName(QString::fromUtf8("pluginListTypeEdit"));
        pluginListTypeEdit->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, pluginListTypeEdit);

        pluginListClassLabel = new QLabel(pluginListSettingWidget2);
        pluginListClassLabel->setObjectName(QString::fromUtf8("pluginListClassLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pluginListClassLabel);

        pluginListClassEdit = new QLineEdit(pluginListSettingWidget2);
        pluginListClassEdit->setObjectName(QString::fromUtf8("pluginListClassEdit"));
        pluginListClassEdit->setReadOnly(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, pluginListClassEdit);

        pluginListCaptionLabel = new QLabel(pluginListSettingWidget2);
        pluginListCaptionLabel->setObjectName(QString::fromUtf8("pluginListCaptionLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pluginListCaptionLabel);

        pluginListCaptionEdit = new QLineEdit(pluginListSettingWidget2);
        pluginListCaptionEdit->setObjectName(QString::fromUtf8("pluginListCaptionEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pluginListCaptionEdit);


        horizontalLayout_3->addWidget(pluginListSettingWidget2);

        pluginListParametersWidget = new QWidget(pluginListSettingsWidget);
        pluginListParametersWidget->setObjectName(QString::fromUtf8("pluginListParametersWidget"));
        pluginListParametersWidget->setFont(font1);
        formLayout_3 = new QFormLayout(pluginListParametersWidget);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        pluginListParametersLabel = new QLabel(pluginListParametersWidget);
        pluginListParametersLabel->setObjectName(QString::fromUtf8("pluginListParametersLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, pluginListParametersLabel);

        pluginListParametersTextEdit = new QPlainTextEdit(pluginListParametersWidget);
        pluginListParametersTextEdit->setObjectName(QString::fromUtf8("pluginListParametersTextEdit"));
        pluginListParametersTextEdit->setEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pluginListParametersTextEdit);


        horizontalLayout_3->addWidget(pluginListParametersWidget);


        verticalLayout_5->addWidget(pluginListSettingsWidget);

        deletePluginButton = new QPushButton(pluginListGroupBox);
        deletePluginButton->setObjectName(QString::fromUtf8("deletePluginButton"));
        deletePluginButton->setFont(font1);
        deletePluginButton->setFocusPolicy(Qt::NoFocus);
        deletePluginButton->setAutoDefault(false);

        verticalLayout_5->addWidget(deletePluginButton);

        splitter->addWidget(pluginListGroupBox);
        createPluginGroupBox = new QGroupBox(splitter);
        createPluginGroupBox->setObjectName(QString::fromUtf8("createPluginGroupBox"));
        createPluginGroupBox->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(createPluginGroupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        createPluginLayout = new QVBoxLayout();
        createPluginLayout->setObjectName(QString::fromUtf8("createPluginLayout"));
        createPluginLayout_2 = new QVBoxLayout();
        createPluginLayout_2->setObjectName(QString::fromUtf8("createPluginLayout_2"));
        createPluginAvailablePluginWidget = new QWidget(createPluginGroupBox);
        createPluginAvailablePluginWidget->setObjectName(QString::fromUtf8("createPluginAvailablePluginWidget"));
        createPluginAvailablePluginWidget->setFont(font1);
        verticalLayout_7 = new QVBoxLayout(createPluginAvailablePluginWidget);
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        createPluginAvailablePluginHeader = new QFrame(createPluginAvailablePluginWidget);
        createPluginAvailablePluginHeader->setObjectName(QString::fromUtf8("createPluginAvailablePluginHeader"));
        createPluginAvailablePluginHeader->setFrameShape(QFrame::StyledPanel);
        createPluginAvailablePluginHeader->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(createPluginAvailablePluginHeader);
        horizontalLayout_5->setSpacing(4);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        createPluginAvailablePluginLabel = new QLabel(createPluginAvailablePluginHeader);
        createPluginAvailablePluginLabel->setObjectName(QString::fromUtf8("createPluginAvailablePluginLabel"));
        createPluginAvailablePluginLabel->setFont(font1);

        horizontalLayout_5->addWidget(createPluginAvailablePluginLabel);

        addPluginFileButton = new QToolButton(createPluginAvailablePluginHeader);
        addPluginFileButton->setObjectName(QString::fromUtf8("addPluginFileButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new"), QSize(), QIcon::Normal, QIcon::Off);
        addPluginFileButton->setIcon(icon);

        horizontalLayout_5->addWidget(addPluginFileButton);

        addPluginDirectoryButton = new QToolButton(createPluginAvailablePluginHeader);
        addPluginDirectoryButton->setObjectName(QString::fromUtf8("addPluginDirectoryButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/folder"), QSize(), QIcon::Normal, QIcon::Off);
        addPluginDirectoryButton->setIcon(icon1);

        horizontalLayout_5->addWidget(addPluginDirectoryButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_7->addWidget(createPluginAvailablePluginHeader);

        createPluginAvailablePluginTableView = new QTableView(createPluginAvailablePluginWidget);
        createPluginAvailablePluginTableView->setObjectName(QString::fromUtf8("createPluginAvailablePluginTableView"));
        createPluginAvailablePluginTableView->setProperty("showDropIndicator", QVariant(false));
        createPluginAvailablePluginTableView->setDragEnabled(true);
        createPluginAvailablePluginTableView->setDragDropMode(QAbstractItemView::DragOnly);
        createPluginAvailablePluginTableView->setAlternatingRowColors(true);
        createPluginAvailablePluginTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        createPluginAvailablePluginTableView->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        createPluginAvailablePluginTableView->setGridStyle(Qt::NoPen);
        createPluginAvailablePluginTableView->horizontalHeader()->setCascadingSectionResizes(true);
        createPluginAvailablePluginTableView->horizontalHeader()->setDefaultSectionSize(140);
        createPluginAvailablePluginTableView->horizontalHeader()->setStretchLastSection(true);
        createPluginAvailablePluginTableView->verticalHeader()->setDefaultSectionSize(20);
        createPluginAvailablePluginTableView->verticalHeader()->setMinimumSectionSize(20);

        verticalLayout_7->addWidget(createPluginAvailablePluginTableView);


        createPluginLayout_2->addWidget(createPluginAvailablePluginWidget);

        createPluginWidget = new QWidget(createPluginGroupBox);
        createPluginWidget->setObjectName(QString::fromUtf8("createPluginWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(createPluginWidget->sizePolicy().hasHeightForWidth());
        createPluginWidget->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(createPluginWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        createPluginWidget2 = new QWidget(createPluginWidget);
        createPluginWidget2->setObjectName(QString::fromUtf8("createPluginWidget2"));
        createPluginWidget2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(createPluginWidget2);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        createPluginSettingsLayout = new QGridLayout();
        createPluginSettingsLayout->setObjectName(QString::fromUtf8("createPluginSettingsLayout"));
        createPluginCaptionLabel = new QLabel(createPluginWidget2);
        createPluginCaptionLabel->setObjectName(QString::fromUtf8("createPluginCaptionLabel"));

        createPluginSettingsLayout->addWidget(createPluginCaptionLabel, 0, 0, 1, 1);

        createPluginCaptionEdit = new QLineEdit(createPluginWidget2);
        createPluginCaptionEdit->setObjectName(QString::fromUtf8("createPluginCaptionEdit"));

        createPluginSettingsLayout->addWidget(createPluginCaptionEdit, 0, 1, 1, 1);

        createPluginAttachmentLabel = new QLabel(createPluginWidget2);
        createPluginAttachmentLabel->setObjectName(QString::fromUtf8("createPluginAttachmentLabel"));

        createPluginSettingsLayout->addWidget(createPluginAttachmentLabel, 1, 0, 1, 1);

        createPluginAttachmentComboBox = new QComboBox(createPluginWidget2);
        createPluginAttachmentComboBox->setObjectName(QString::fromUtf8("createPluginAttachmentComboBox"));

        createPluginSettingsLayout->addWidget(createPluginAttachmentComboBox, 1, 1, 1, 1);


        verticalLayout_2->addLayout(createPluginSettingsLayout);

        createPluginSpacer = new QSpacerItem(20, 79, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(createPluginSpacer);


        horizontalLayout->addWidget(createPluginWidget2);

        createPluginParametersWidget = new QWidget(createPluginWidget);
        createPluginParametersWidget->setObjectName(QString::fromUtf8("createPluginParametersWidget"));
        gridLayout_2 = new QGridLayout(createPluginParametersWidget);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        createPluginParametersLabel = new QLabel(createPluginParametersWidget);
        createPluginParametersLabel->setObjectName(QString::fromUtf8("createPluginParametersLabel"));
        createPluginParametersLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, createPluginParametersLabel);

        createPluginParametersTextEdit = new QPlainTextEdit(createPluginParametersWidget);
        createPluginParametersTextEdit->setObjectName(QString::fromUtf8("createPluginParametersTextEdit"));
        createPluginParametersTextEdit->setEnabled(false);
        createPluginParametersTextEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, createPluginParametersTextEdit);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);


        horizontalLayout->addWidget(createPluginParametersWidget);


        createPluginLayout_2->addWidget(createPluginWidget);


        createPluginLayout->addLayout(createPluginLayout_2);

        createPluginWidget_2 = new QWidget(createPluginGroupBox);
        createPluginWidget_2->setObjectName(QString::fromUtf8("createPluginWidget_2"));
        createPluginWidget_2->setMinimumSize(QSize(0, 30));
        horizontalLayout_2 = new QHBoxLayout(createPluginWidget_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        createPluginButton = new QPushButton(createPluginWidget_2);
        createPluginButton->setObjectName(QString::fromUtf8("createPluginButton"));
        createPluginButton->setFont(font1);

        horizontalLayout_2->addWidget(createPluginButton);

        createExtensionButton = new QPushButton(createPluginWidget_2);
        createExtensionButton->setObjectName(QString::fromUtf8("createExtensionButton"));
        createExtensionButton->setFont(font1);

        horizontalLayout_2->addWidget(createExtensionButton);


        createPluginLayout->addWidget(createPluginWidget_2);


        horizontalLayout_4->addLayout(createPluginLayout);

        splitter->addWidget(createPluginGroupBox);
        splitter_2->addWidget(splitter);

        gridLayout->addWidget(splitter_2, 0, 0, 1, 1);


        retranslateUi(PluginDialog);
        QObject::connect(pluginListCaptionEdit, SIGNAL(textEdited(QString)), PluginDialog, SLOT(changePluginCaption(QString)));
        QObject::connect(createPluginCaptionEdit, SIGNAL(textEdited(QString)), PluginDialog, SLOT(changeNewPluginCaption(QString)));
        QObject::connect(pluginListTableView, SIGNAL(activated(QModelIndex)), PluginDialog, SLOT(choosePlugin(QModelIndex)));
        QObject::connect(createPluginAvailablePluginTableView, SIGNAL(clicked(QModelIndex)), PluginDialog, SLOT(chooseNewPlugin(QModelIndex)));
        QObject::connect(createPluginButton, SIGNAL(clicked()), PluginDialog, SLOT(createPlugin()));
        QObject::connect(pluginListCaptionEdit, SIGNAL(editingFinished()), PluginDialog, SLOT(changePluginCaption()));
        QObject::connect(pluginListTableView, SIGNAL(pressed(QModelIndex)), PluginDialog, SLOT(choosePlugin(QModelIndex)));
        QObject::connect(createPluginAttachmentComboBox, SIGNAL(currentIndexChanged(QString)), PluginDialog, SLOT(changeAttachmentPoint(QString)));
        QObject::connect(createPluginAvailablePluginTableView, SIGNAL(pressed(QModelIndex)), PluginDialog, SLOT(chooseNewPlugin(QModelIndex)));
        QObject::connect(deletePluginButton, SIGNAL(clicked()), PluginDialog, SLOT(deletePlugin()));
        QObject::connect(pluginListCaptionEdit, SIGNAL(returnPressed()), PluginDialog, SLOT(changePluginCaption()));
        QObject::connect(createPluginCaptionEdit, SIGNAL(returnPressed()), PluginDialog, SLOT(changePluginCaption()));
        QObject::connect(createExtensionButton, SIGNAL(clicked()), PluginDialog, SLOT(createExtension()));
        QObject::connect(addPluginFileButton, SIGNAL(clicked()), PluginDialog, SLOT(addPluginFile()));
        QObject::connect(addPluginDirectoryButton, SIGNAL(clicked()), PluginDialog, SLOT(addPluginDirectory()));
        QObject::connect(pluginListParametersTextEdit, SIGNAL(textChanged()), PluginDialog, SLOT(changePluginParameters()));
        QObject::connect(createPluginParametersTextEdit, SIGNAL(textChanged()), PluginDialog, SLOT(changeNewPluginParameters()));

        QMetaObject::connectSlotsByName(PluginDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginDialog)
    {
        PluginDialog->setWindowTitle(QApplication::translate("PluginDialog", "Plugins", 0, QApplication::UnicodeUTF8));
        pluginListGroupBox->setTitle(QApplication::translate("PluginDialog", "Plugin List", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginListTableView->setToolTip(QApplication::translate("PluginDialog", "List of all active plugins.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pluginListTableView->setWhatsThis(QApplication::translate("PluginDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">List of all active plugins. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Plugins need to be &quot;instantiated&quot; from the list of available plugin classes below.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Plugins flagged as &quot;extension&quot; are loaded in every Simulation Setup.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The other plugins are stored in the current Simulation Setup.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pluginListTypeLabel->setText(QApplication::translate("PluginDialog", "Type:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginListTypeEdit->setToolTip(QApplication::translate("PluginDialog", "Type of the plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pluginListTypeEdit->setWhatsThis(QApplication::translate("PluginDialog", "Type of the plugin.\n"
"\"Normal Plugins\" cannot communicate and have no visual representation, but can be executed in Simulations. Usually used for independantly executable plugins.\n"
"\"Signal Plugins\" can communicate but have no visual representation. Usually used for program extensions like function libraries or menu/toolbox extensions.\n"
"\"Frame Plugins\" can communicate and have a visual representation. They are attached to one of the Attachment points in the Gui main window. Used for plugins with user interaction.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pluginListTypeEdit->setPlaceholderText(QApplication::translate("PluginDialog", "Plugin Type", 0, QApplication::UnicodeUTF8));
        pluginListClassLabel->setText(QApplication::translate("PluginDialog", "Class:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginListClassEdit->setToolTip(QApplication::translate("PluginDialog", "Class name of the plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pluginListClassEdit->setWhatsThis(QApplication::translate("PluginDialog", "Class name of the plugin.\n"
"The class is unique in the application and plugins are identified with their class name.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pluginListClassEdit->setPlaceholderText(QApplication::translate("PluginDialog", "Plugin Name", 0, QApplication::UnicodeUTF8));
        pluginListCaptionLabel->setText(QApplication::translate("PluginDialog", "Caption:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginListCaptionEdit->setToolTip(QApplication::translate("PluginDialog", "Caption of the plugin instance.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pluginListCaptionEdit->setWhatsThis(QApplication::translate("PluginDialog", "Caption of the plugin instance.\n"
"The caption is used as title in the plugin messages and its frame representation. \n"
"It does not need to be unique.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        pluginListCaptionEdit->setPlaceholderText(QApplication::translate("PluginDialog", "Plugin Caption", 0, QApplication::UnicodeUTF8));
        pluginListParametersLabel->setText(QApplication::translate("PluginDialog", "Parameters:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginListParametersTextEdit->setToolTip(QApplication::translate("PluginDialog", "List of parameters the plugin was initialized with.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pluginListParametersTextEdit->setWhatsThis(QApplication::translate("PluginDialog", "List of parameters the plugin was initialized with.\n"
"Changing parameters in this list will take effect the next time the plugin is initialized. This may happen when reloading the simulation setup, depending in the reload specification of the plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        deletePluginButton->setToolTip(QApplication::translate("PluginDialog", "Delete the selected plugin instance.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        deletePluginButton->setWhatsThis(QApplication::translate("PluginDialog", "Delete the selected plugin instance.\n"
"If the plugin is flagged as extension it is removed from the extension list.\n"
"If not, it is removed from the current simulation setup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        deletePluginButton->setText(QApplication::translate("PluginDialog", "Delete", 0, QApplication::UnicodeUTF8));
        createPluginGroupBox->setTitle(QApplication::translate("PluginDialog", "Create Plugin", 0, QApplication::UnicodeUTF8));
        createPluginAvailablePluginLabel->setText(QApplication::translate("PluginDialog", "Available Plugins:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addPluginFileButton->setToolTip(QApplication::translate("PluginDialog", "Add a single library file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        addPluginFileButton->setWhatsThis(QApplication::translate("PluginDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Add a single plugin library file to the include file list.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The library will be linked to the application.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The include file list is saved and used again in following application executions.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The complete list can be found in the settings dialog.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        addPluginFileButton->setText(QApplication::translate("PluginDialog", "Add single library", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addPluginDirectoryButton->setToolTip(QApplication::translate("PluginDialog", "Add a library include directory.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        addPluginDirectoryButton->setWhatsThis(QApplication::translate("PluginDialog", "Add a library include directory.\n"
"All plugin libraries from this directory will be linked to the application.\n"
"\n"
"The include file list is saved and used again in following application executions.\n"
"The complete list can be found in the settings dialog.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        addPluginDirectoryButton->setText(QApplication::translate("PluginDialog", "Add library folder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createPluginAvailablePluginTableView->setToolTip(QApplication::translate("PluginDialog", "List of available plugin classes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        createPluginAvailablePluginTableView->setWhatsThis(QApplication::translate("PluginDialog", "List of available plugin classes.\n"
"Plugins may be built-in or they are loaded from shared libraries in one of the library include directories.\n"
"\n"
"These plugin classes can be \"instantiated\" and added to the current simulation setup, or as \"extension\". Extension plugins are loaded with every simulation setup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        createPluginCaptionLabel->setText(QApplication::translate("PluginDialog", "Caption:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createPluginCaptionEdit->setToolTip(QApplication::translate("PluginDialog", "Caption for the plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        createPluginCaptionEdit->setWhatsThis(QApplication::translate("PluginDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Caption for the plugin.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">The caption is used as title for messages of the plugin and for a frame title.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">It need not be unique, but it may be helpful.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        createPluginAttachmentLabel->setText(QApplication::translate("PluginDialog", "Attachmentpoint:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createPluginAttachmentComboBox->setToolTip(QApplication::translate("PluginDialog", "Attachment point of the plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        createPluginAttachmentComboBox->setWhatsThis(QApplication::translate("PluginDialog", "Frame plugins are embedded into the main window.\n"
"Choose the attachment point where to attach them to.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        createPluginParametersLabel->setText(QApplication::translate("PluginDialog", "Parameters:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createPluginParametersTextEdit->setToolTip(QApplication::translate("PluginDialog", "List of parameters to initialize the plugin with.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        createPluginParametersTextEdit->setWhatsThis(QApplication::translate("PluginDialog", "List of parameters to initialize the plugin with.\n"
"See the documentation of the plugin for a list of available parameters.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        createPluginButton->setToolTip(QApplication::translate("PluginDialog", "Create the plugin as simulation setup plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        createPluginButton->setWhatsThis(QApplication::translate("PluginDialog", "Instantiate the plugin once and add it to the current simulation setup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        createPluginButton->setText(QApplication::translate("PluginDialog", "Create as Plugin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createExtensionButton->setToolTip(QApplication::translate("PluginDialog", "Create the plugin as extension plugin.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        createExtensionButton->setWhatsThis(QApplication::translate("PluginDialog", "Instantiate the plugin once and add it to the extension plugin list.\n"
"It will be loaded with all simulation setups.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        createExtensionButton->setText(QApplication::translate("PluginDialog", "Create as Extension", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PluginDialog: public Ui_PluginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINDIALOG_H
