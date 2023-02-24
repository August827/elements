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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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
    QHBoxLayout *horizontalLayout;
    QSplitter *m_splitter_x;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *m_ComBox_Section;
    QTableView *m_TabVw_Data;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QSplitter *m_splitter_z;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab;
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
        MainWindow->resize(1200, 800);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(9);
        MainWindow->setFont(font);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName("action_Open");
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/build/Debug/interface/icon/ToolBar_Ver.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Ver->setIcon(icon2);
        action_AboutMe = new QAction(MainWindow);
        action_AboutMe->setObjectName("action_AboutMe");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/build/Debug/interface/icon/ToolBar_InRegardTo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_AboutMe->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        m_splitter_x = new QSplitter(centralwidget);
        m_splitter_x->setObjectName("m_splitter_x");
        m_splitter_x->setOrientation(Qt::Horizontal);
        m_splitter_x->setHandleWidth(5);
        verticalLayoutWidget = new QWidget(m_splitter_x);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_ComBox_Section = new QComboBox(verticalLayoutWidget);
        m_ComBox_Section->setObjectName("m_ComBox_Section");
        m_ComBox_Section->setMaxVisibleItems(35);

        verticalLayout->addWidget(m_ComBox_Section);

        m_TabVw_Data = new QTableView(verticalLayoutWidget);
        m_TabVw_Data->setObjectName("m_TabVw_Data");

        verticalLayout->addWidget(m_TabVw_Data);

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

        horizontalLayout->addWidget(m_splitter_x);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        m_ToolBar_Main = new QToolBar(MainWindow);
        m_ToolBar_Main->setObjectName("m_ToolBar_Main");
        m_ToolBar_Main->setIconSize(QSize(24, 24));
        m_ToolBar_Main->setToolButtonStyle(Qt::ToolButtonIconOnly);
        m_ToolBar_Main->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, m_ToolBar_Main);

        m_ToolBar_Main->addAction(action_Open);
        m_ToolBar_Main->addAction(action_Save);
        m_ToolBar_Main->addSeparator();
        m_ToolBar_Main->addAction(action_Ver);
        m_ToolBar_Main->addAction(action_AboutMe);

        retranslateUi(MainWindow);

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
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
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
