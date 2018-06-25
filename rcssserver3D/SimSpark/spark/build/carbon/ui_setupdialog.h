/********************************************************************************
** Form generated from reading UI file 'setupdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPDIALOG_H
#define UI_SETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DefineSetupDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *textLabel;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *fileLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *fileEdit;
    QToolButton *fileToolButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DefineSetupDialog)
    {
        if (DefineSetupDialog->objectName().isEmpty())
            DefineSetupDialog->setObjectName(QString::fromUtf8("DefineSetupDialog"));
        DefineSetupDialog->resize(321, 140);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DefineSetupDialog->sizePolicy().hasHeightForWidth());
        DefineSetupDialog->setSizePolicy(sizePolicy);
        DefineSetupDialog->setMaximumSize(QSize(16777215, 183));
        DefineSetupDialog->setSizeGripEnabled(false);
        verticalLayout = new QVBoxLayout(DefineSetupDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textLabel = new QLabel(DefineSetupDialog);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel->sizePolicy().hasHeightForWidth());
        textLabel->setSizePolicy(sizePolicy1);
        textLabel->setWordWrap(true);

        verticalLayout->addWidget(textLabel);

        widget = new QWidget(DefineSetupDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nameEdit);

        fileLabel = new QLabel(widget);
        fileLabel->setObjectName(QString::fromUtf8("fileLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, fileLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        fileEdit = new QLineEdit(widget);
        fileEdit->setObjectName(QString::fromUtf8("fileEdit"));
        fileEdit->setReadOnly(true);

        horizontalLayout->addWidget(fileEdit);

        fileToolButton = new QToolButton(widget);
        fileToolButton->setObjectName(QString::fromUtf8("fileToolButton"));
        fileToolButton->setText(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/folder"), QSize(), QIcon::Normal, QIcon::Off);
        fileToolButton->setIcon(icon);

        horizontalLayout->addWidget(fileToolButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);


        verticalLayout->addWidget(widget);

        buttonBox = new QDialogButtonBox(DefineSetupDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(nameEdit, fileToolButton);
        QWidget::setTabOrder(fileToolButton, buttonBox);
        QWidget::setTabOrder(buttonBox, fileEdit);

        retranslateUi(DefineSetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DefineSetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DefineSetupDialog, SLOT(reject()));
        QObject::connect(fileToolButton, SIGNAL(clicked()), DefineSetupDialog, SLOT(loadFile()));
        QObject::connect(nameEdit, SIGNAL(textEdited(QString)), DefineSetupDialog, SLOT(setName(QString)));
        QObject::connect(fileEdit, SIGNAL(textEdited(QString)), DefineSetupDialog, SLOT(setFile(QString)));

        QMetaObject::connectSlotsByName(DefineSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *DefineSetupDialog)
    {
        DefineSetupDialog->setWindowTitle(QApplication::translate("DefineSetupDialog", "Define Simulation Setup", 0, QApplication::UnicodeUTF8));
        textLabel->setText(QString());
        nameLabel->setText(QApplication::translate("DefineSetupDialog", "Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nameEdit->setToolTip(QApplication::translate("DefineSetupDialog", "Name of the Setup. Used as unique identification in one environment.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fileLabel->setText(QApplication::translate("DefineSetupDialog", "File:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileEdit->setToolTip(QApplication::translate("DefineSetupDialog", "File to save the Simulation Setup in. Must not be a file already in use by another Simulation Setup.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fileToolButton->setToolTip(QApplication::translate("DefineSetupDialog", "Define a Simulation Setup file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class DefineSetupDialog: public Ui_DefineSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPDIALOG_H
