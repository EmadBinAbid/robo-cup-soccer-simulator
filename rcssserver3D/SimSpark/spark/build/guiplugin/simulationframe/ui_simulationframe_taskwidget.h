/********************************************************************************
** Form generated from reading UI file 'simulationframe_taskwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULATIONFRAME_TASKWIDGET_H
#define UI_SIMULATIONFRAME_TASKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *headerLayout;
    QToolButton *detailsButton;
    QHBoxLayout *headerInnerLayout;
    QLabel *headerLabel;
    QSpacerItem *headerSpacer;
    QLabel *headerStatusLabel;
    QToolButton *loadButton;
    QToolButton *headerDeleteButton;
    QToolButton *headerStopButton;
    QToolButton *headerPlayButton;
    QWidget *detailsWidget;
    QVBoxLayout *verticalLayout_4;
    QWidget *detailsFormWidget;
    QGridLayout *gridLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *typeLabel;
    QLabel *typeTextLabel;
    QLabel *priorityLabel;
    QComboBox *priorityComboBox;
    QWidget *firstlistLabelWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *firstListLabel;
    QSpacerItem *verticalSpacer;
    QListWidget *firstListWidget;
    QLabel *thirdLabel;
    QLineEdit *secondEdit;
    QLineEdit *thirdEdit;
    QLabel *secondLabel;
    QLineEdit *firstEdit;
    QLabel *firstLabel;
    QWidget *secondlistLabelWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *secondListLabel;
    QSpacerItem *verticalSpacer_4;
    QListWidget *secondListWidget;
    QWidget *infoWidget;
    QFormLayout *formLayout;
    QWidget *infoButtonWidget;
    QVBoxLayout *verticalLayout_3;
    QToolButton *infoButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *infoLabel;

    void setupUi(QFrame *TaskWidget)
    {
        if (TaskWidget->objectName().isEmpty())
            TaskWidget->setObjectName(QString::fromUtf8("TaskWidget"));
        TaskWidget->resize(346, 216);
        TaskWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        TaskWidget->setFrameShape(QFrame::Panel);
        TaskWidget->setFrameShadow(QFrame::Raised);
        TaskWidget->setLineWidth(2);
        verticalLayout = new QVBoxLayout(TaskWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        headerLayout = new QHBoxLayout();
        headerLayout->setSpacing(4);
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        detailsButton = new QToolButton(TaskWidget);
        detailsButton->setObjectName(QString::fromUtf8("detailsButton"));
        detailsButton->setMaximumSize(QSize(14, 22));
        detailsButton->setCheckable(true);
        detailsButton->setArrowType(Qt::UpArrow);

        headerLayout->addWidget(detailsButton);

        headerInnerLayout = new QHBoxLayout();
        headerInnerLayout->setSpacing(3);
        headerInnerLayout->setObjectName(QString::fromUtf8("headerInnerLayout"));
        headerLabel = new QLabel(TaskWidget);
        headerLabel->setObjectName(QString::fromUtf8("headerLabel"));

        headerInnerLayout->addWidget(headerLabel);

        headerSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerInnerLayout->addItem(headerSpacer);

        headerStatusLabel = new QLabel(TaskWidget);
        headerStatusLabel->setObjectName(QString::fromUtf8("headerStatusLabel"));

        headerInnerLayout->addWidget(headerStatusLabel);

        loadButton = new QToolButton(TaskWidget);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/book"), QSize(), QIcon::Normal, QIcon::Off);
        loadButton->setIcon(icon);

        headerInnerLayout->addWidget(loadButton);

        headerDeleteButton = new QToolButton(TaskWidget);
        headerDeleteButton->setObjectName(QString::fromUtf8("headerDeleteButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/delete"), QSize(), QIcon::Normal, QIcon::Off);
        headerDeleteButton->setIcon(icon1);

        headerInnerLayout->addWidget(headerDeleteButton);

        headerStopButton = new QToolButton(TaskWidget);
        headerStopButton->setObjectName(QString::fromUtf8("headerStopButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/stop_green"), QSize(), QIcon::Normal, QIcon::Off);
        headerStopButton->setIcon(icon2);

        headerInnerLayout->addWidget(headerStopButton);

        headerPlayButton = new QToolButton(TaskWidget);
        headerPlayButton->setObjectName(QString::fromUtf8("headerPlayButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/accept"), QSize(), QIcon::Normal, QIcon::Off);
        headerPlayButton->setIcon(icon3);

        headerInnerLayout->addWidget(headerPlayButton);


        headerLayout->addLayout(headerInnerLayout);


        verticalLayout->addLayout(headerLayout);

        detailsWidget = new QWidget(TaskWidget);
        detailsWidget->setObjectName(QString::fromUtf8("detailsWidget"));
        verticalLayout_4 = new QVBoxLayout(detailsWidget);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        detailsFormWidget = new QWidget(detailsWidget);
        detailsFormWidget->setObjectName(QString::fromUtf8("detailsFormWidget"));
        gridLayout = new QGridLayout(detailsFormWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLabel = new QLabel(detailsFormWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 1, 1, 1);

        nameEdit = new QLineEdit(detailsFormWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 2, 1, 1);

        typeLabel = new QLabel(detailsFormWidget);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        gridLayout->addWidget(typeLabel, 0, 3, 1, 1);

        typeTextLabel = new QLabel(detailsFormWidget);
        typeTextLabel->setObjectName(QString::fromUtf8("typeTextLabel"));

        gridLayout->addWidget(typeTextLabel, 0, 4, 1, 1);

        priorityLabel = new QLabel(detailsFormWidget);
        priorityLabel->setObjectName(QString::fromUtf8("priorityLabel"));

        gridLayout->addWidget(priorityLabel, 1, 3, 1, 1);

        priorityComboBox = new QComboBox(detailsFormWidget);
        priorityComboBox->setObjectName(QString::fromUtf8("priorityComboBox"));
        priorityComboBox->setEnabled(false);

        gridLayout->addWidget(priorityComboBox, 1, 4, 1, 1);

        firstlistLabelWidget = new QWidget(detailsFormWidget);
        firstlistLabelWidget->setObjectName(QString::fromUtf8("firstlistLabelWidget"));
        verticalLayout_2 = new QVBoxLayout(firstlistLabelWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 1, 0, 0);
        firstListLabel = new QLabel(firstlistLabelWidget);
        firstListLabel->setObjectName(QString::fromUtf8("firstListLabel"));

        verticalLayout_2->addWidget(firstListLabel);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout->addWidget(firstlistLabelWidget, 4, 1, 1, 1);

        firstListWidget = new QListWidget(detailsFormWidget);
        firstListWidget->setObjectName(QString::fromUtf8("firstListWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(firstListWidget->sizePolicy().hasHeightForWidth());
        firstListWidget->setSizePolicy(sizePolicy);
        firstListWidget->setMinimumSize(QSize(0, 20));
        firstListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        firstListWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        gridLayout->addWidget(firstListWidget, 4, 2, 1, 3);

        thirdLabel = new QLabel(detailsFormWidget);
        thirdLabel->setObjectName(QString::fromUtf8("thirdLabel"));

        gridLayout->addWidget(thirdLabel, 2, 3, 1, 1);

        secondEdit = new QLineEdit(detailsFormWidget);
        secondEdit->setObjectName(QString::fromUtf8("secondEdit"));
        secondEdit->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(secondEdit, 2, 2, 1, 1);

        thirdEdit = new QLineEdit(detailsFormWidget);
        thirdEdit->setObjectName(QString::fromUtf8("thirdEdit"));
        thirdEdit->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(thirdEdit, 2, 4, 1, 1);

        secondLabel = new QLabel(detailsFormWidget);
        secondLabel->setObjectName(QString::fromUtf8("secondLabel"));

        gridLayout->addWidget(secondLabel, 2, 1, 1, 1);

        firstEdit = new QLineEdit(detailsFormWidget);
        firstEdit->setObjectName(QString::fromUtf8("firstEdit"));
        firstEdit->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(firstEdit, 1, 2, 1, 1);

        firstLabel = new QLabel(detailsFormWidget);
        firstLabel->setObjectName(QString::fromUtf8("firstLabel"));

        gridLayout->addWidget(firstLabel, 1, 1, 1, 1);

        secondlistLabelWidget = new QWidget(detailsFormWidget);
        secondlistLabelWidget->setObjectName(QString::fromUtf8("secondlistLabelWidget"));
        verticalLayout_6 = new QVBoxLayout(secondlistLabelWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 1, 0, 0);
        secondListLabel = new QLabel(secondlistLabelWidget);
        secondListLabel->setObjectName(QString::fromUtf8("secondListLabel"));

        verticalLayout_6->addWidget(secondListLabel);

        verticalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        gridLayout->addWidget(secondlistLabelWidget, 5, 1, 1, 1);

        secondListWidget = new QListWidget(detailsFormWidget);
        secondListWidget->setObjectName(QString::fromUtf8("secondListWidget"));
        sizePolicy.setHeightForWidth(secondListWidget->sizePolicy().hasHeightForWidth());
        secondListWidget->setSizePolicy(sizePolicy);
        secondListWidget->setMinimumSize(QSize(0, 20));
        secondListWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        secondListWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        gridLayout->addWidget(secondListWidget, 5, 2, 1, 3);


        verticalLayout_4->addWidget(detailsFormWidget);

        infoWidget = new QWidget(detailsWidget);
        infoWidget->setObjectName(QString::fromUtf8("infoWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoWidget->sizePolicy().hasHeightForWidth());
        infoWidget->setSizePolicy(sizePolicy1);
        infoWidget->setMinimumSize(QSize(0, 18));
        formLayout = new QFormLayout(infoWidget);
        formLayout->setContentsMargins(0, 0, 0, 0);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(4);
        formLayout->setVerticalSpacing(0);
        infoButtonWidget = new QWidget(infoWidget);
        infoButtonWidget->setObjectName(QString::fromUtf8("infoButtonWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(infoButtonWidget->sizePolicy().hasHeightForWidth());
        infoButtonWidget->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(infoButtonWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        infoButton = new QToolButton(infoButtonWidget);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));
        infoButton->setMaximumSize(QSize(14, 20));
        infoButton->setCheckable(false);
        infoButton->setArrowType(Qt::NoArrow);

        verticalLayout_3->addWidget(infoButton);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        formLayout->setWidget(0, QFormLayout::LabelRole, infoButtonWidget);

        infoLabel = new QLabel(infoWidget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        sizePolicy1.setHeightForWidth(infoLabel->sizePolicy().hasHeightForWidth());
        infoLabel->setSizePolicy(sizePolicy1);
        infoLabel->setMinimumSize(QSize(0, 18));
        infoLabel->setWordWrap(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, infoLabel);


        verticalLayout_4->addWidget(infoWidget);


        verticalLayout->addWidget(detailsWidget);


        retranslateUi(TaskWidget);
        QObject::connect(detailsButton, SIGNAL(toggled(bool)), TaskWidget, SLOT(toggleDetail(bool)));
        QObject::connect(headerDeleteButton, SIGNAL(clicked()), TaskWidget, SLOT(deleteTask()));
        QObject::connect(headerPlayButton, SIGNAL(clicked()), TaskWidget, SLOT(toggleRunning()));
        QObject::connect(nameEdit, SIGNAL(textEdited(QString)), TaskWidget, SLOT(checkName(QString)));
        QObject::connect(nameEdit, SIGNAL(editingFinished()), TaskWidget, SLOT(changeName()));
        QObject::connect(priorityComboBox, SIGNAL(currentIndexChanged(int)), TaskWidget, SLOT(changeTaskPriority(int)));
        QObject::connect(detailsButton, SIGNAL(toggled(bool)), detailsWidget, SLOT(setHidden(bool)));
        QObject::connect(secondEdit, SIGNAL(textEdited(QString)), TaskWidget, SLOT(checkSecond(QString)));
        QObject::connect(secondEdit, SIGNAL(editingFinished()), TaskWidget, SLOT(changeSecond()));
        QObject::connect(thirdEdit, SIGNAL(textEdited(QString)), TaskWidget, SLOT(checkThird(QString)));
        QObject::connect(thirdEdit, SIGNAL(editingFinished()), TaskWidget, SLOT(changeThird()));
        QObject::connect(firstEdit, SIGNAL(textChanged(QString)), TaskWidget, SLOT(checkFirst(QString)));
        QObject::connect(firstEdit, SIGNAL(editingFinished()), TaskWidget, SLOT(changeFirst()));
        QObject::connect(firstListWidget, SIGNAL(currentRowChanged(int)), TaskWidget, SLOT(chooseFirstListEntry(int)));
        QObject::connect(firstListWidget, SIGNAL(itemChanged(QListWidgetItem*)), TaskWidget, SLOT(changeFirstListEntry(QListWidgetItem*)));
        QObject::connect(infoButton, SIGNAL(clicked()), TaskWidget, SLOT(toggleLongInfo()));
        QObject::connect(loadButton, SIGNAL(clicked()), TaskWidget, SLOT(loadTask()));
        QObject::connect(firstListWidget, SIGNAL(customContextMenuRequested(QPoint)), TaskWidget, SLOT(showFirstListContextMenu(QPoint)));
        QObject::connect(secondListWidget, SIGNAL(currentRowChanged(int)), TaskWidget, SLOT(chooseSecondListEntry(int)));
        QObject::connect(secondListWidget, SIGNAL(itemChanged(QListWidgetItem*)), TaskWidget, SLOT(changeSecondListEntry(QListWidgetItem*)));
        QObject::connect(secondListWidget, SIGNAL(customContextMenuRequested(QPoint)), TaskWidget, SLOT(showSecondListContextMenu(QPoint)));
        QObject::connect(headerStopButton, SIGNAL(clicked()), TaskWidget, SLOT(stopTask()));
        QObject::connect(TaskWidget, SIGNAL(customContextMenuRequested(QPoint)), TaskWidget, SLOT(showWidgetContextMenu(QPoint)));
        QObject::connect(secondEdit, SIGNAL(customContextMenuRequested(QPoint)), TaskWidget, SLOT(showSecondContextMenu(QPoint)));
        QObject::connect(thirdEdit, SIGNAL(customContextMenuRequested(QPoint)), TaskWidget, SLOT(showThirdContextMenu(QPoint)));
        QObject::connect(firstEdit, SIGNAL(customContextMenuRequested(QPoint)), TaskWidget, SLOT(showFirstContextMenu(QPoint)));

        QMetaObject::connectSlotsByName(TaskWidget);
    } // setupUi

    void retranslateUi(QFrame *TaskWidget)
    {
        TaskWidget->setWindowTitle(QApplication::translate("TaskWidget", "Frame", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        detailsButton->setToolTip(QApplication::translate("TaskWidget", "Show details", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        detailsButton->setWhatsThis(QApplication::translate("TaskWidget", "Show the details section.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        detailsButton->setText(QString());
#ifndef QT_NO_WHATSTHIS
        headerLabel->setWhatsThis(QApplication::translate("TaskWidget", "Name of the task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        headerLabel->setText(QApplication::translate("TaskWidget", "Name", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        headerStatusLabel->setWhatsThis(QApplication::translate("TaskWidget", "Status of the task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        headerStatusLabel->setText(QApplication::translate("TaskWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        loadButton->setWhatsThis(QApplication::translate("TaskWidget", "Quickloads a task definition.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        loadButton->setText(QApplication::translate("TaskWidget", "Load", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        headerDeleteButton->setToolTip(QApplication::translate("TaskWidget", "Deletes the task", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        headerDeleteButton->setWhatsThis(QApplication::translate("TaskWidget", "Deletes the task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        headerDeleteButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        headerStopButton->setToolTip(QApplication::translate("TaskWidget", "Stops the task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        headerStopButton->setWhatsThis(QApplication::translate("TaskWidget", "Stops the task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        headerStopButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        headerPlayButton->setToolTip(QApplication::translate("TaskWidget", "Runs or pauses the task", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        headerPlayButton->setWhatsThis(QApplication::translate("TaskWidget", "Runs or pauses the task.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        headerPlayButton->setText(QString());
        nameLabel->setText(QApplication::translate("TaskWidget", "Name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nameEdit->setToolTip(QApplication::translate("TaskWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Change the tasks name. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Plugins that reference this task by its name might not be able to find it afterwards.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        nameEdit->setWhatsThis(QApplication::translate("TaskWidget", "Change the tasks name. \n"
"Plugins that reference this task by its name might not be able to find it afterwards.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        typeLabel->setText(QApplication::translate("TaskWidget", "Type:", 0, QApplication::UnicodeUTF8));
        typeTextLabel->setText(QApplication::translate("TaskWidget", "Server", 0, QApplication::UnicodeUTF8));
        priorityLabel->setText(QApplication::translate("TaskWidget", "Priority:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        priorityComboBox->setToolTip(QApplication::translate("TaskWidget", "Set the task priority", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        firstListLabel->setText(QApplication::translate("TaskWidget", "First List", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        firstListWidget->setWhatsThis(QApplication::translate("TaskWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Define information for the task execution.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">May contain script file names or initialization parameters.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Right click opens a context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        thirdLabel->setText(QApplication::translate("TaskWidget", "Third:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        secondEdit->setWhatsThis(QApplication::translate("TaskWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Define information for the task execution.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">May contain executable or script file names.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Right click opens a context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        thirdEdit->setWhatsThis(QApplication::translate("TaskWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Define information for the task execution.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">May contain executable or script file names.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Right click opens a context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        secondLabel->setText(QApplication::translate("TaskWidget", "Second:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        firstEdit->setWhatsThis(QApplication::translate("TaskWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Define information for the task execution.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">May contain executable or script file names.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Right click opens a context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        firstLabel->setText(QApplication::translate("TaskWidget", "First:", 0, QApplication::UnicodeUTF8));
        secondListLabel->setText(QApplication::translate("TaskWidget", "Second List", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        secondListWidget->setWhatsThis(QApplication::translate("TaskWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Define information for the task execution.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">May contain parameters or script file names.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Right click opens a context menu.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        infoButton->setToolTip(QApplication::translate("TaskWidget", "Show details", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        infoButton->setWhatsThis(QApplication::translate("TaskWidget", "Show the additional information area.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        infoButton->setText(QApplication::translate("TaskWidget", "?", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("TaskWidget", "Info", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TaskWidget: public Ui_TaskWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULATIONFRAME_TASKWIDGET_H
