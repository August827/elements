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
#include <QtWidgets/QHBoxLayout>
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
    QVBoxLayout *verticalLayout;
    QComboBox *m_ComBox_HugeSectionName;
    QTableView *m_TabVw_HugeSectionData;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSplitter *m_splitter_z;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *m_GridLayout_Tab_1;
    QLabel *label_4;
    QLineEdit *m_Edit_Search_Contents;
    QLabel *label_3;
    QPushButton *m_But_Search;
    QLineEdit *m_Edit_Filter_Contents;
    QPushButton *m_But_Filter;
    QComboBox *m_ComBo_Filter_Type;
    QComboBox *m_ComBo_Filter_Condition;
    QComboBox *m_ComBo_Search_Type;
    QLabel *label_5;
    QLabel *label;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_But_UpPage;
    QLabel *m_Label_MinPage;
    QLabel *label_2;
    QLabel *m_Label_MaxPage;
    QPushButton *m_But_NextPage;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QStatusBar *statusbar;
    QToolBar *m_ToolBar_Main;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1250, 800);
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
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_ComBox_HugeSectionName = new QComboBox(verticalLayoutWidget);
        m_ComBox_HugeSectionName->setObjectName("m_ComBox_HugeSectionName");
        m_ComBox_HugeSectionName->setMaxVisibleItems(35);

        verticalLayout->addWidget(m_ComBox_HugeSectionName);

        m_TabVw_HugeSectionData = new QTableView(verticalLayoutWidget);
        m_TabVw_HugeSectionData->setObjectName("m_TabVw_HugeSectionData");

        verticalLayout->addWidget(m_TabVw_HugeSectionData);

        m_splitter_x->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(m_splitter_x);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_splitter_z = new QSplitter(verticalLayoutWidget_2);
        m_splitter_z->setObjectName("m_splitter_z");
        m_splitter_z->setOrientation(Qt::Vertical);
        verticalLayoutWidget_3 = new QWidget(m_splitter_z);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(verticalLayoutWidget_3);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        m_GridLayout_Tab_1 = new QGridLayout(tab);
        m_GridLayout_Tab_1->setSpacing(4);
        m_GridLayout_Tab_1->setObjectName("m_GridLayout_Tab_1");
        m_GridLayout_Tab_1->setContentsMargins(5, 5, 5, 5);
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");

        m_GridLayout_Tab_1->addWidget(label_4, 1, 2, 1, 1);

        m_Edit_Search_Contents = new QLineEdit(tab);
        m_Edit_Search_Contents->setObjectName("m_Edit_Search_Contents");

        m_GridLayout_Tab_1->addWidget(m_Edit_Search_Contents, 0, 2, 1, 4);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");

        m_GridLayout_Tab_1->addWidget(label_3, 1, 0, 1, 1);

        m_But_Search = new QPushButton(tab);
        m_But_Search->setObjectName("m_But_Search");

        m_GridLayout_Tab_1->addWidget(m_But_Search, 0, 6, 1, 1);

        m_Edit_Filter_Contents = new QLineEdit(tab);
        m_Edit_Filter_Contents->setObjectName("m_Edit_Filter_Contents");

        m_GridLayout_Tab_1->addWidget(m_Edit_Filter_Contents, 1, 5, 1, 1);

        m_But_Filter = new QPushButton(tab);
        m_But_Filter->setObjectName("m_But_Filter");

        m_GridLayout_Tab_1->addWidget(m_But_Filter, 1, 6, 1, 1);

        m_ComBo_Filter_Type = new QComboBox(tab);
        m_ComBo_Filter_Type->setObjectName("m_ComBo_Filter_Type");

        m_GridLayout_Tab_1->addWidget(m_ComBo_Filter_Type, 1, 1, 1, 1);

        m_ComBo_Filter_Condition = new QComboBox(tab);
        m_ComBo_Filter_Condition->setObjectName("m_ComBo_Filter_Condition");

        m_GridLayout_Tab_1->addWidget(m_ComBo_Filter_Condition, 1, 3, 1, 1);

        m_ComBo_Search_Type = new QComboBox(tab);
        m_ComBo_Search_Type->addItem(QString());
        m_ComBo_Search_Type->addItem(QString());
        m_ComBo_Search_Type->setObjectName("m_ComBo_Search_Type");

        m_GridLayout_Tab_1->addWidget(m_ComBo_Search_Type, 0, 1, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");

        m_GridLayout_Tab_1->addWidget(label_5, 1, 4, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");

        m_GridLayout_Tab_1->addWidget(label, 0, 0, 1, 1);

        m_GridLayout_Tab_1->setColumnStretch(0, 5);
        m_GridLayout_Tab_1->setColumnStretch(1, 20);
        m_GridLayout_Tab_1->setColumnStretch(2, 5);
        m_GridLayout_Tab_1->setColumnStretch(3, 20);
        m_GridLayout_Tab_1->setColumnStretch(4, 5);
        m_GridLayout_Tab_1->setColumnStretch(5, 35);
        m_GridLayout_Tab_1->setColumnStretch(6, 10);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
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

        verticalLayout_2->addWidget(m_splitter_z);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        m_But_UpPage = new QPushButton(verticalLayoutWidget_2);
        m_But_UpPage->setObjectName("m_But_UpPage");

        horizontalLayout_2->addWidget(m_But_UpPage);

        m_Label_MinPage = new QLabel(verticalLayoutWidget_2);
        m_Label_MinPage->setObjectName("m_Label_MinPage");
        m_Label_MinPage->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_Label_MinPage);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        m_Label_MaxPage = new QLabel(verticalLayoutWidget_2);
        m_Label_MaxPage->setObjectName("m_Label_MaxPage");
        m_Label_MaxPage->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(m_Label_MaxPage);

        m_But_NextPage = new QPushButton(verticalLayoutWidget_2);
        m_But_NextPage->setObjectName("m_But_NextPage");

        horizontalLayout_2->addWidget(m_But_NextPage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 5);
        horizontalLayout_2->setStretch(5, 70);
        horizontalLayout_2->setStretch(6, 16);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 95);
        verticalLayout_2->setStretch(1, 5);
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
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\235\241\344\273\266\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\255\227\346\256\265\347\261\273\345\236\213\357\274\232", nullptr));
        m_But_Search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        m_But_Filter->setText(QCoreApplication::translate("MainWindow", "\350\277\207\346\273\244", nullptr));
        m_ComBo_Search_Type->setItemText(0, QCoreApplication::translate("MainWindow", "\346\214\211<ID>\346\220\234\347\264\242", nullptr));
        m_ComBo_Search_Type->setItemText(1, QCoreApplication::translate("MainWindow", "\346\214\211<\345\220\215\347\247\260>\346\220\234\347\264\242", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\347\261\273\345\236\213\357\274\232", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\350\277\207\346\273\244\346\220\234\347\264\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\345\205\250\345\261\200\346\220\234\347\264\242", nullptr));
        m_But_UpPage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        m_Label_MinPage->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        m_Label_MaxPage->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        m_But_NextPage->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\345\275\223\345\211\215\351\241\265\351\235\242", nullptr));
        m_ToolBar_Main->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
