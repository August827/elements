/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_Ver;
    QAction *action_AboutMe;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *m_splitter_x;
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *m_But_CopyAdd;
    QPushButton *m_But_Tool;
    QTableView *m_TabVw_HugeSectionData;
    QComboBox *m_ComBox_HugeSectionName;
    QPushButton *m_But_PitchCopyAdd;
    QWidget *verticalLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_5;
    QPushButton *m_But_UpPage;
    QPushButton *pushButton;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *m_Label_MinPage;
    QLabel *m_Label_MaxPage;
    QPushButton *m_But_NextPage;
    QSplitter *m_splitter_z;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QPushButton *m_But_Filter;
    QLabel *label_5;
    QLineEdit *m_Edit_Search_Contents;
    QLabel *label_4;
    QComboBox *m_ComBo_Filter_Condition;
    QPushButton *m_But_Search;
    QLineEdit *m_Edit_Filter_Contents;
    QComboBox *m_ComBo_Filter_Type;
    QPushButton *m_But_Search_Reset;
    QComboBox *m_ComBo_Search_Type;
    QLabel *label_3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLineEdit *m_Edit_Search_Contents_All;
    QPushButton *m_But_Search_All;
    QComboBox *m_ComBo_Search_Type_All;
    QLabel *label_6;
    QTableView *m_TabVw_Search_All;
    QLabel *label_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout;
    QLabel *m_Label_Itemicon;
    QStatusBar *statusbar;
    QToolBar *m_ToolBar_Main;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1250, 799);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(9);
        MainWindow->setFont(font);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
        action_Open->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/Debug/interface/icon/ToolBar_open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Open->setIcon(icon);
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName("action_Save");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/build/Debug/interface/icon/ToolBar_Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Save->setIcon(icon1);
        action_Ver = new QAction(MainWindow);
        action_Ver->setObjectName("action_Ver");
        action_Ver->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/Debug/interface/icon/ToolBar_Ver.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Ver->setIcon(icon2);
        action_Ver->setShortcutContext(Qt::WindowShortcut);
        action_Ver->setPriority(QAction::NormalPriority);
        action_AboutMe = new QAction(MainWindow);
        action_AboutMe->setObjectName("action_AboutMe");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/Debug/interface/icon/ToolBar_InRegardTo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_AboutMe->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        m_splitter_x = new QSplitter(centralwidget);
        m_splitter_x->setObjectName("m_splitter_x");
        m_splitter_x->setOrientation(Qt::Horizontal);
        m_splitter_x->setHandleWidth(5);
        verticalLayoutWidget = new QWidget(m_splitter_x);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        gridLayout_2 = new QGridLayout(verticalLayoutWidget);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        m_But_CopyAdd = new QPushButton(verticalLayoutWidget);
        m_But_CopyAdd->setObjectName("m_But_CopyAdd");

        gridLayout_2->addWidget(m_But_CopyAdd, 3, 0, 1, 1);

        m_But_Tool = new QPushButton(verticalLayoutWidget);
        m_But_Tool->setObjectName("m_But_Tool");

        gridLayout_2->addWidget(m_But_Tool, 3, 2, 1, 1);

        m_TabVw_HugeSectionData = new QTableView(verticalLayoutWidget);
        m_TabVw_HugeSectionData->setObjectName("m_TabVw_HugeSectionData");

        gridLayout_2->addWidget(m_TabVw_HugeSectionData, 2, 0, 1, 3);

        m_ComBox_HugeSectionName = new QComboBox(verticalLayoutWidget);
        m_ComBox_HugeSectionName->setObjectName("m_ComBox_HugeSectionName");
        m_ComBox_HugeSectionName->setMaxVisibleItems(35);

        gridLayout_2->addWidget(m_ComBox_HugeSectionName, 0, 0, 1, 3);

        m_But_PitchCopyAdd = new QPushButton(verticalLayoutWidget);
        m_But_PitchCopyAdd->setObjectName("m_But_PitchCopyAdd");

        gridLayout_2->addWidget(m_But_PitchCopyAdd, 3, 1, 1, 1);

        m_splitter_x->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(m_splitter_x);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        gridLayout_4 = new QGridLayout(verticalLayoutWidget_2);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(verticalLayoutWidget_2);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setMaximumSize(QSize(16777215, 46));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 820, 44));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(2);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(2, 2, 2, 2);
        m_But_UpPage = new QPushButton(scrollAreaWidgetContents_2);
        m_But_UpPage->setObjectName("m_But_UpPage");
        m_But_UpPage->setMinimumSize(QSize(27, 0));

        gridLayout_5->addWidget(m_But_UpPage, 0, 0, 1, 1);

        pushButton = new QPushButton(scrollAreaWidgetContents_2);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(27, 0));

        gridLayout_5->addWidget(pushButton, 0, 7, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 5, 1, 1);

        m_Label_MinPage = new QLabel(scrollAreaWidgetContents_2);
        m_Label_MinPage->setObjectName("m_Label_MinPage");
        m_Label_MinPage->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(m_Label_MinPage, 0, 1, 1, 1);

        m_Label_MaxPage = new QLabel(scrollAreaWidgetContents_2);
        m_Label_MaxPage->setObjectName("m_Label_MaxPage");
        m_Label_MaxPage->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(m_Label_MaxPage, 0, 3, 1, 1);

        m_But_NextPage = new QPushButton(scrollAreaWidgetContents_2);
        m_But_NextPage->setObjectName("m_But_NextPage");
        m_But_NextPage->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(m_But_NextPage, 0, 4, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_4->addWidget(scrollArea_2, 1, 1, 1, 1);

        m_splitter_z = new QSplitter(verticalLayoutWidget_2);
        m_splitter_z->setObjectName("m_splitter_z");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_splitter_z->sizePolicy().hasHeightForWidth());
        m_splitter_z->setSizePolicy(sizePolicy);
        m_splitter_z->setFrameShape(QFrame::NoFrame);
        m_splitter_z->setFrameShadow(QFrame::Plain);
        m_splitter_z->setLineWidth(2);
        m_splitter_z->setOrientation(Qt::Vertical);
        m_splitter_z->setHandleWidth(5);
        m_splitter_z->setChildrenCollapsible(true);
        verticalLayoutWidget_3 = new QWidget(m_splitter_z);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget_3);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        sizePolicy.setHeightForWidth(tab_1->sizePolicy().hasHeightForWidth());
        tab_1->setSizePolicy(sizePolicy);
        tab_1->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_6 = new QVBoxLayout(tab_1);
        verticalLayout_6->setSpacing(4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(4, 4, 4, 4);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(2);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(tab_1);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        m_But_Filter = new QPushButton(tab_1);
        m_But_Filter->setObjectName("m_But_Filter");

        gridLayout_3->addWidget(m_But_Filter, 2, 6, 1, 1);

        label_5 = new QLabel(tab_1);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 2, 4, 1, 1);

        m_Edit_Search_Contents = new QLineEdit(tab_1);
        m_Edit_Search_Contents->setObjectName("m_Edit_Search_Contents");

        gridLayout_3->addWidget(m_Edit_Search_Contents, 0, 2, 1, 4);

        label_4 = new QLabel(tab_1);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 2, 2, 1, 1);

        m_ComBo_Filter_Condition = new QComboBox(tab_1);
        m_ComBo_Filter_Condition->addItem(QString());
        m_ComBo_Filter_Condition->addItem(QString());
        m_ComBo_Filter_Condition->addItem(QString());
        m_ComBo_Filter_Condition->addItem(QString());
        m_ComBo_Filter_Condition->addItem(QString());
        m_ComBo_Filter_Condition->addItem(QString());
        m_ComBo_Filter_Condition->setObjectName("m_ComBo_Filter_Condition");

        gridLayout_3->addWidget(m_ComBo_Filter_Condition, 2, 3, 1, 1);

        m_But_Search = new QPushButton(tab_1);
        m_But_Search->setObjectName("m_But_Search");

        gridLayout_3->addWidget(m_But_Search, 0, 6, 1, 1);

        m_Edit_Filter_Contents = new QLineEdit(tab_1);
        m_Edit_Filter_Contents->setObjectName("m_Edit_Filter_Contents");

        gridLayout_3->addWidget(m_Edit_Filter_Contents, 2, 5, 1, 1);

        m_ComBo_Filter_Type = new QComboBox(tab_1);
        m_ComBo_Filter_Type->setObjectName("m_ComBo_Filter_Type");

        gridLayout_3->addWidget(m_ComBo_Filter_Type, 2, 1, 1, 1);

        m_But_Search_Reset = new QPushButton(tab_1);
        m_But_Search_Reset->setObjectName("m_But_Search_Reset");
        sizePolicy.setHeightForWidth(m_But_Search_Reset->sizePolicy().hasHeightForWidth());
        m_But_Search_Reset->setSizePolicy(sizePolicy);
        m_But_Search_Reset->setMinimumSize(QSize(0, 0));
        m_But_Search_Reset->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_3->addWidget(m_But_Search_Reset, 0, 7, 3, 1);

        m_ComBo_Search_Type = new QComboBox(tab_1);
        m_ComBo_Search_Type->addItem(QString());
        m_ComBo_Search_Type->addItem(QString());
        m_ComBo_Search_Type->setObjectName("m_ComBo_Search_Type");

        gridLayout_3->addWidget(m_ComBo_Search_Type, 0, 1, 1, 1);

        label_3 = new QLabel(tab_1);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        gridLayout_3->setColumnStretch(0, 5);
        gridLayout_3->setColumnStretch(1, 15);
        gridLayout_3->setColumnStretch(2, 5);
        gridLayout_3->setColumnStretch(3, 15);
        gridLayout_3->setColumnStretch(4, 5);
        gridLayout_3->setColumnStretch(5, 35);
        gridLayout_3->setColumnStretch(6, 10);
        gridLayout_3->setColumnStretch(7, 10);

        verticalLayout_6->addLayout(gridLayout_3);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_2->sizePolicy().hasHeightForWidth());
        tab_2->setSizePolicy(sizePolicy1);
        tab_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName("gridLayout");
        m_Edit_Search_Contents_All = new QLineEdit(tab_2);
        m_Edit_Search_Contents_All->setObjectName("m_Edit_Search_Contents_All");

        gridLayout->addWidget(m_Edit_Search_Contents_All, 0, 2, 1, 1);

        m_But_Search_All = new QPushButton(tab_2);
        m_But_Search_All->setObjectName("m_But_Search_All");

        gridLayout->addWidget(m_But_Search_All, 0, 3, 1, 1);

        m_ComBo_Search_Type_All = new QComboBox(tab_2);
        m_ComBo_Search_Type_All->addItem(QString());
        m_ComBo_Search_Type_All->addItem(QString());
        m_ComBo_Search_Type_All->setObjectName("m_ComBo_Search_Type_All");

        gridLayout->addWidget(m_ComBo_Search_Type_All, 0, 1, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        m_TabVw_Search_All = new QTableView(tab_2);
        m_TabVw_Search_All->setObjectName("m_TabVw_Search_All");

        verticalLayout_5->addWidget(m_TabVw_Search_All);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");

        verticalLayout_5->addWidget(label_7);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabWidget);

        m_splitter_z->addWidget(verticalLayoutWidget_3);
        scrollArea = new QScrollArea(m_splitter_z);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 392, 69));
        scrollArea->setWidget(scrollAreaWidgetContents);
        m_splitter_z->addWidget(scrollArea);

        gridLayout_4->addWidget(m_splitter_z, 0, 0, 1, 2);

        scrollArea_3 = new QScrollArea(verticalLayoutWidget_2);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setMaximumSize(QSize(46, 46));
        scrollArea_3->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 44, 44));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        m_Label_Itemicon = new QLabel(scrollAreaWidgetContents_3);
        m_Label_Itemicon->setObjectName("m_Label_Itemicon");
        m_Label_Itemicon->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(m_Label_Itemicon);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        gridLayout_4->addWidget(scrollArea_3, 1, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 95);
        gridLayout_4->setRowStretch(1, 5);
        gridLayout_4->setColumnStretch(0, 5);
        gridLayout_4->setColumnStretch(1, 95);
        m_splitter_x->addWidget(verticalLayoutWidget_2);

        verticalLayout_4->addWidget(m_splitter_x);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        m_ToolBar_Main = new QToolBar(MainWindow);
        m_ToolBar_Main->setObjectName("m_ToolBar_Main");
        m_ToolBar_Main->setIconSize(QSize(20, 20));
        m_ToolBar_Main->setToolButtonStyle(Qt::ToolButtonIconOnly);
        m_ToolBar_Main->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, m_ToolBar_Main);

        m_ToolBar_Main->addAction(action_Open);
        m_ToolBar_Main->addAction(action_Save);
        m_ToolBar_Main->addSeparator();
        m_ToolBar_Main->addAction(action_Ver);
        m_ToolBar_Main->addAction(action_AboutMe);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_Open->setToolTip(QCoreApplication::translate("MainWindow", "Open_Elements.data", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_Save->setToolTip(QCoreApplication::translate("MainWindow", "Save_Elements.data", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_Save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Ver->setText(QCoreApplication::translate("MainWindow", "\347\211\210\346\234\254\344\277\241\346\201\257", nullptr));
#if QT_CONFIG(tooltip)
        action_Ver->setToolTip(QCoreApplication::translate("MainWindow", "Versions", nullptr));
#endif // QT_CONFIG(tooltip)
        action_AboutMe->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#if QT_CONFIG(tooltip)
        action_AboutMe->setToolTip(QCoreApplication::translate("MainWindow", "AboutMe", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        m_But_CopyAdd->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\345\242\236\345\212\240\357\274\214\346\224\257\346\214\201\345\213\276\351\200\211\345\244\232\350\241\214\345\242\236\345\212\240", nullptr));
#endif // QT_CONFIG(tooltip)
        m_But_CopyAdd->setText(QCoreApplication::translate("MainWindow", "\344\270\212\347\247\273", nullptr));
        m_But_Tool->setText(QCoreApplication::translate("MainWindow", "\346\211\251\345\261\225\346\217\222\344\273\266", nullptr));
        m_But_PitchCopyAdd->setText(QCoreApplication::translate("MainWindow", "\344\270\213\347\247\273", nullptr));
        m_But_UpPage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\275\223\345\211\215\351\241\265\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        m_Label_MinPage->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        m_Label_MaxPage->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        m_But_NextPage->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\347\261\273\345\236\213\357\274\232", nullptr));
        m_But_Filter->setText(QCoreApplication::translate("MainWindow", "\350\277\207\346\273\244", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\235\241\344\273\266\357\274\232", nullptr));
        m_ComBo_Filter_Condition->setItemText(0, QCoreApplication::translate("MainWindow", "\347\255\211\344\272\216", nullptr));
        m_ComBo_Filter_Condition->setItemText(1, QCoreApplication::translate("MainWindow", "\345\244\247\344\272\216", nullptr));
        m_ComBo_Filter_Condition->setItemText(2, QCoreApplication::translate("MainWindow", "\345\260\217\344\272\216", nullptr));
        m_ComBo_Filter_Condition->setItemText(3, QCoreApplication::translate("MainWindow", "\345\244\247\344\272\216\347\255\211\344\272\216", nullptr));
        m_ComBo_Filter_Condition->setItemText(4, QCoreApplication::translate("MainWindow", "\345\260\217\344\272\216\347\255\211\344\272\216", nullptr));
        m_ComBo_Filter_Condition->setItemText(5, QCoreApplication::translate("MainWindow", "\345\214\205\345\220\253", nullptr));

        m_But_Search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        m_But_Search_Reset->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256\346\220\234\347\264\242/\350\277\207\346\273\244", nullptr));
        m_ComBo_Search_Type->setItemText(0, QCoreApplication::translate("MainWindow", "\346\214\211<ID>\346\220\234\347\264\242", nullptr));
        m_ComBo_Search_Type->setItemText(1, QCoreApplication::translate("MainWindow", "\346\214\211<\345\220\215\347\247\260>\346\220\234\347\264\242", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "\345\255\227\346\256\265\347\261\273\345\236\213\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242/\350\277\207\346\273\244", nullptr));
        m_But_Search_All->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\346\220\234\347\264\242", nullptr));
        m_ComBo_Search_Type_All->setItemText(0, QCoreApplication::translate("MainWindow", "\346\214\211<\345\205\250\345\261\200_ID>\346\220\234\347\264\242", nullptr));
        m_ComBo_Search_Type_All->setItemText(1, QCoreApplication::translate("MainWindow", "\346\214\211<\345\205\250\345\261\200_\345\220\215\347\247\260>\346\220\234\347\264\242", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\346\220\234\347\264\242\347\261\273\345\236\213\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242\346\225\260\351\207\217\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\346\220\234\347\264\242", nullptr));
        m_Label_Itemicon->setText(QString());
        m_ToolBar_Main->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
