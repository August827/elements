/********************************************************************************
** Form generated from reading UI file 'attributelist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTRIBUTELIST_H
#define UI_ATTRIBUTELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AttributeList
{
public:
    QGridLayout *gridLayout;
    QPushButton *m_But_Confirm;
    QTableView *m_TableView;
    QLabel *label;
    QPushButton *m_But_Cancel;
    QCheckBox *m_Check_All;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_Edit;

    void setupUi(QWidget *AttributeList)
    {
        if (AttributeList->objectName().isEmpty())
            AttributeList->setObjectName("AttributeList");
        AttributeList->resize(600, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(9);
        AttributeList->setFont(font);
        gridLayout = new QGridLayout(AttributeList);
        gridLayout->setObjectName("gridLayout");
        m_But_Confirm = new QPushButton(AttributeList);
        m_But_Confirm->setObjectName("m_But_Confirm");

        gridLayout->addWidget(m_But_Confirm, 2, 2, 1, 1);

        m_TableView = new QTableView(AttributeList);
        m_TableView->setObjectName("m_TableView");

        gridLayout->addWidget(m_TableView, 1, 0, 1, 4);

        label = new QLabel(AttributeList);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_But_Cancel = new QPushButton(AttributeList);
        m_But_Cancel->setObjectName("m_But_Cancel");

        gridLayout->addWidget(m_But_Cancel, 2, 3, 1, 1);

        m_Check_All = new QCheckBox(AttributeList);
        m_Check_All->setObjectName("m_Check_All");

        gridLayout->addWidget(m_Check_All, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        m_Edit = new QLineEdit(AttributeList);
        m_Edit->setObjectName("m_Edit");

        gridLayout->addWidget(m_Edit, 0, 1, 1, 3);


        retranslateUi(AttributeList);

        QMetaObject::connectSlotsByName(AttributeList);
    } // setupUi

    void retranslateUi(QWidget *AttributeList)
    {
        AttributeList->setWindowTitle(QCoreApplication::translate("AttributeList", "Form", nullptr));
        m_But_Confirm->setText(QCoreApplication::translate("AttributeList", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("AttributeList", "\345\275\223\345\211\215\346\225\260\345\200\274\357\274\232", nullptr));
        m_But_Cancel->setText(QCoreApplication::translate("AttributeList", "\345\217\226\346\266\210", nullptr));
        m_Check_All->setText(QCoreApplication::translate("AttributeList", "\345\205\250\351\200\211", nullptr));
        m_Edit->setText(QCoreApplication::translate("AttributeList", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AttributeList: public Ui_AttributeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTRIBUTELIST_H
