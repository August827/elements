/********************************************************************************
** Form generated from reading UI file 'subassembly.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBASSEMBLY_H
#define UI_SUBASSEMBLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subassembly
{
public:
    QHBoxLayout *Widget;
    QHBoxLayout *m_HBoxLayout;

    void setupUi(QWidget *subassembly)
    {
        if (subassembly->objectName().isEmpty())
            subassembly->setObjectName("subassembly");
        subassembly->setWindowModality(Qt::ApplicationModal);
        subassembly->resize(410, 27);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(9);
        subassembly->setFont(font);
        Widget = new QHBoxLayout(subassembly);
        Widget->setSpacing(0);
        Widget->setObjectName("Widget");
        Widget->setContentsMargins(0, 0, 0, 0);
        m_HBoxLayout = new QHBoxLayout();
        m_HBoxLayout->setObjectName("m_HBoxLayout");

        Widget->addLayout(m_HBoxLayout);


        retranslateUi(subassembly);

        QMetaObject::connectSlotsByName(subassembly);
    } // setupUi

    void retranslateUi(QWidget *subassembly)
    {
        subassembly->setWindowTitle(QCoreApplication::translate("subassembly", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subassembly: public Ui_subassembly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBASSEMBLY_H
