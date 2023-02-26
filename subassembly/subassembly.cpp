#include "subassembly.h"
#include "ui_subassembly.h"

subassembly::subassembly(QWidget *parent) : QWidget(parent), ui(new Ui::subassembly)
{
    ui->setupUi(this);
}

subassembly::~subassembly()
{
    delete ui;
}

void subassembly::on_Button_Clicked()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString name = button->objectName();

    if (name == "保护类型" || name == "职业要求" || name == "装备部位" || name == "转生限制" || name == "服务组合")
    {
        AddUpWindow(name, 1);
    }
    if (name.indexOf("阵营") != -1)
    {
        AddUpWindow("阵营", 1);
    }
    if (name.indexOf("名称") != -1 || name.indexOf("描述") != -1)
    {
        AddUpWindow(name, 2);
    }
}

void subassembly::on_CheckBox_Clicked()
{
    QCheckBox *checkBox = qobject_cast<QCheckBox *>(sender());

    if (m_NameWindow.AutoExclusive)
    {
        if (checkBox->isChecked())
        {
            uint index = 1;
            for (int i = 0; i < 32; i++)
            {
                QCheckBox *pCheckBox = m_subassemblyWindow->findChild<QCheckBox *>(QString::number(index));
                pCheckBox->setChecked(false);
                index = index * 2;
            }
            m_NameWindow.m_Edit->setText(checkBox->objectName());
            checkBox->setChecked(true);
            return;
        }
        else
        {
            uint num = m_NameWindow.m_Edit->toPlainText().toUInt() - checkBox->objectName().toUInt();
            m_NameWindow.m_Edit->setText(QString::number(num));
            checkBox->setChecked(false);
            return;
        }
    }

    if (checkBox->isChecked())
    {
        uint num = m_NameWindow.m_Edit->toPlainText().toUInt() + checkBox->objectName().toUInt();
        m_NameWindow.m_Edit->setText(QString::number(num));
    }
    else
    {
        uint num = m_NameWindow.m_Edit->toPlainText().toUInt() - checkBox->objectName().toUInt();
        m_NameWindow.m_Edit->setText(QString::number(num));
    }
}

void subassembly::on_m_But_Confirm_clicked()
{
    m_TypeWindow.m_Edit->setText(m_NameWindow.m_Edit->toPlainText());
    m_subassemblyWindow->close();
    m_TypeWindow.m_Edit->setCursorPosition(0);
}

void subassembly::on_m_But_Cancel_clicked()
{
    m_subassemblyWindow->close();
}

void subassembly::on_CheckBox_All_stateChanged(int arg1)
{
    if (arg1 == 0)
    {
        for (int i = 0; i < m_NameWindow.m_TableView->model()->rowCount(); i++)
        {
            QCheckBox *checkBox = qobject_cast<QCheckBox *>(m_NameWindow.m_TableView->indexWidget(m_NameWindow.m_TableView->model()->index(i, 1)));
            checkBox->setChecked(false);
        }
        m_NameWindow.m_Edit->setText("0");
    }
    else
    {
        uint num = 0;
        for (int i = 0; i < m_NameWindow.m_TableView->model()->rowCount(); i++)
        {
            QCheckBox *checkBox = qobject_cast<QCheckBox *>(m_NameWindow.m_TableView->indexWidget(m_NameWindow.m_TableView->model()->index(i, 1)));
            checkBox->setChecked(true);
            num += checkBox->objectName().toUInt();
        }
        m_NameWindow.m_Edit->setText(QString::number(num));
    }
}

void subassembly::setSubassembly(QString LableText, QString EditText, QString LableText2)
{
    QStringList list;
    int brk = AddUpWidget(LableText, list);
    QFontMetrics fontWidth(LableText); // 得到每个字符的宽度
    QString elideNote;
    switch (brk)
    {
    case 1:
        combo_but_Flag = 1;
        m_TypeWindow.m_Lable = new QLabel(this);
        m_TypeWindow.m_Edit = new QLineEdit(this);
        m_TypeWindow.m_Lable2 = new QLabel(this);

        m_TypeWindow.m_Lable->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        m_TypeWindow.m_Lable->setFixedSize(90, 22);
        m_TypeWindow.m_Edit->setFixedSize(100, 22);
        m_TypeWindow.m_Lable2->setFixedSize(90, 22);
        m_TypeWindow.m_Lable2->setStyleSheet("color: rgb(0,178,102);");

        elideNote = fontWidth.elidedText(LableText, Qt::ElideRight, 115); // 最大宽度150像素

        m_TypeWindow.m_Lable->setText(elideNote);
        m_TypeWindow.m_Lable->setToolTip(LableText);
        m_TypeWindow.m_Edit->setText(EditText);

        ui->m_GridLayout->addWidget(m_TypeWindow.m_Lable, 0, 0);
        ui->m_GridLayout->addWidget(m_TypeWindow.m_Edit, 0, 1);
        ui->m_GridLayout->addWidget(m_TypeWindow.m_Lable2, 0, 2);
        ui->m_GridLayout->setSpacing(3);

        break;
    case 2:
        combo_but_Flag = 2;
        m_TypeWindow.m_Lable = new QLabel(this);
        m_TypeWindow.m_Edit = new QLineEdit(this);
        m_TypeWindow.m_But = new QPushButton(this);

        m_TypeWindow.m_Lable->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        m_TypeWindow.m_Lable->setFixedSize(90, 22);
        m_TypeWindow.m_Edit->setFixedSize(100, 22);
        m_TypeWindow.m_But->setFixedSize(40, 23);
        m_TypeWindow.m_But->setStyleSheet("color: rgb(0,178,102);");

        elideNote = fontWidth.elidedText(LableText, Qt::ElideRight, 115); // 最大宽度150像素

        m_TypeWindow.m_Lable->setText(elideNote);
        m_TypeWindow.m_Lable->setToolTip(LableText);
        m_TypeWindow.m_Edit->setText(EditText);
        m_TypeWindow.m_But->setText("详情");
        m_TypeWindow.m_But->setObjectName(LableText);

        ui->m_GridLayout->addWidget(m_TypeWindow.m_Lable, 0, 0);
        ui->m_GridLayout->addWidget(m_TypeWindow.m_Edit, 0, 1);
        ui->m_GridLayout->addWidget(m_TypeWindow.m_But, 0, 2);
        ui->m_GridLayout->setSpacing(3);
        ui->m_GridLayout->setAlignment(m_TypeWindow.m_But, Qt::AlignLeft | Qt::AlignVCenter);

        connect(m_TypeWindow.m_But, SIGNAL(clicked()), this, SLOT(on_Button_Clicked()));

        break;
    case 3:
        combo_but_Flag = 3;
        m_TypeWindow.m_Lable = new QLabel(this);
        m_TypeWindow.m_ComboBox = new QComboBox(this);
        m_TypeWindow.m_Lable2 = new QLabel(this);

        m_TypeWindow.m_Lable->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        m_TypeWindow.m_Lable->setFixedSize(90, 22);
        m_TypeWindow.m_ComboBox->setFixedSize(100, 22);
        m_TypeWindow.m_Lable2->setFixedSize(90, 22);

        elideNote = fontWidth.elidedText(LableText, Qt::ElideRight, 115); // 最大宽度150像素

        m_TypeWindow.m_Lable->setText(elideNote);
        m_TypeWindow.m_Lable->setToolTip(LableText);
        m_TypeWindow.m_ComboBox->addItems(list);
        m_TypeWindow.m_Lable2->setText(LableText2);

        ui->m_GridLayout->addWidget(m_TypeWindow.m_Lable, 0, 0);
        ui->m_GridLayout->addWidget(m_TypeWindow.m_ComboBox, 0, 1);
        ui->m_GridLayout->addWidget(m_TypeWindow.m_Lable2, 0, 2);
        ui->m_GridLayout->setSpacing(3);

        break;
    }
}

int subassembly::AddUpWidget(QString name, QStringList &list)
{
    QSettings *sett = new QSettings("data\\verWidget.ini", QSettings::IniFormat);
    QStringList List;
    if (name.indexOf("是否") != -1)
    {
        list.append("0-否");
        list.append("1-是");
        sett->endGroup();
        return 3;
    }
    if (name.indexOf("名称") != -1 || name.indexOf("描述") != -1)
    {
        sett->endGroup();
        return 2;
    }
    if (name.indexOf("阵营") != -1)
    {
        list << sett->value("but/阵营").toString();
        sett->endGroup();
        return 2;
    }
    if (sett->contains("but/" + name))
    {
        list << sett->value("but/" + name).toString();
        sett->endGroup();
        return 2;
    }

    if (sett->contains("combo/" + name))
    {
        list = sett->value("combo/" + name).toString().split("；");
        sett->endGroup();
        return 3;
    }

    sett->endGroup();
    return 1;
}

void subassembly::AddUpWindow(QString name, int type)
{
    m_subassemblyWindow = new subassembly();
    m_subassemblyWindow->setWindowModality(Qt::ApplicationModal);
    m_subassemblyWindow->setAttribute(Qt::WA_DeleteOnClose);
    m_subassemblyWindow->show();
    m_subassemblyWindow->setWindowTitle(name);
    m_subassemblyWindow->setFixedSize(700, 600);

    if (type == 1)
    {
        QSettings *sett = new QSettings("data\\verWidget.ini", QSettings::IniFormat);
        QStringList List;
        QList<uint> m_ListUint;
        if (sett->contains("but/" + name))
        {
            m_NameWindow.AutoExclusive = sett->value("but/" + name).toString().split("	").at(0).toInt();
            List << sett->value("but/" + name).toString().split("	").at(1).split("；");
            QWidget *widget = new QWidget(this);
            QGridLayout *grid = new QGridLayout(this);
            QLabel *label_num = new QLabel("数值：", this);
            m_NameWindow.m_Check = new QCheckBox("全选", this);
            m_NameWindow.m_Edit = new QTextEdit(m_TypeWindow.m_Edit->text(), this);
            m_NameWindow.m_But_Confirm = new QPushButton("确定", this);
            m_NameWindow.m_But_Cancel = new QPushButton("取消", this);

            m_NameWindow.m_Edit->setFixedHeight(26);

            connect(m_NameWindow.m_Check, &QCheckBox::stateChanged, this, &subassembly::on_CheckBox_All_stateChanged); // 链接全选按钮槽函数
            connect(m_NameWindow.m_But_Confirm, SIGNAL(clicked()), this, SLOT(on_m_But_Confirm_clicked()));            // 链接确定按钮槽函数
            connect(m_NameWindow.m_But_Cancel, SIGNAL(clicked()), this, SLOT(on_m_But_Cancel_clicked()));              // 链接取消按钮槽函数

            m_NameWindow.model = new QStandardItemModel();
            m_NameWindow.m_TableView = new QTableView();

            grid->addWidget(label_num, 0, 0, 1, 1);
            grid->addWidget(m_NameWindow.m_Edit, 0, 1, 1, 14);
            grid->addWidget(m_NameWindow.m_TableView, 1, 0, 1, 15);
            grid->addWidget(m_NameWindow.m_Check, 2, 0);
            grid->addWidget(m_NameWindow.m_But_Confirm, 2, 12, 1, 1);
            grid->addWidget(m_NameWindow.m_But_Cancel, 2, 13, 1, 2);

            QStringList List_att = {"0", "1", "2"};
            m_NameWindow.model->setHorizontalHeaderLabels(List_att);
            m_NameWindow.m_TableView->setModel(m_NameWindow.model);
            m_NameWindow.m_TableView->setColumnWidth(0, 30);                              // 设置列宽
            m_NameWindow.m_TableView->setColumnWidth(1, 10);                              // 设置列宽
            m_NameWindow.m_TableView->horizontalHeader()->setStretchLastSection(true);    // 最后一列补全所有空白位置
            m_NameWindow.m_TableView->setSelectionBehavior(QTableView::SelectRows);       // 设置选中一整行
            m_NameWindow.m_TableView->setSelectionMode(QTableView::SingleSelection);      // 设置不能选中多行
            m_NameWindow.m_TableView->setEditTriggers(QAbstractItemView::NoEditTriggers); // 禁止编辑
            m_NameWindow.m_TableView->verticalHeader()->setDefaultSectionSize(5);         // 设置行高
            m_NameWindow.m_TableView->setShowGrid(false);                                 // 隐藏表格线
            m_NameWindow.m_TableView->horizontalHeader()->hide();                         // 隐藏表头
            m_NameWindow.m_TableView->verticalHeader()->hide();                           // 隐藏行头
            m_NameWindow.m_TableView->scrollToTop();                                      // 让滚动条滚动到最顶部

            for (int i = 0; i < List.size(); i++)
            {
                QCheckBox *checkBox = new QCheckBox;
                checkBox->setObjectName(List.at(i).split("-").at(1));
                m_NameWindow.model->setItem(i, 0, new QStandardItem(QString("%1").arg(i + 1, 2, 10, QLatin1Char('0')) + ":"));
                m_NameWindow.model->setItem(i, 2, new QStandardItem(List.at(i).split("-").at(0)));
                m_NameWindow.m_TableView->setIndexWidget(m_NameWindow.model->index(i, 1), checkBox);
                m_ListUint.append(List.at(i).split("-").at(1).toUInt());
                connect(checkBox, SIGNAL(clicked()), this, SLOT(on_CheckBox_Clicked()));
            }

            if (m_NameWindow.AutoExclusive)
            {
                m_NameWindow.m_Check->hide(); // 隐藏全选按钮
            }
            widget->setLayout(grid);
            m_subassemblyWindow->ui->m_GridLayout->addWidget(widget, 0, 0);

            if (m_TypeWindow.m_Edit->text().toUInt() != 0)
            {
                uint N = m_TypeWindow.m_Edit->text().toUInt();
                uint closestSmaller = 0;
                do
                {
                    for (int i = 0; i < m_ListUint.size(); i++)
                    {
                        if (m_ListUint[i] <= N && m_ListUint[i] > closestSmaller)
                        {
                            closestSmaller = m_ListUint[i];
                        }
                    }
                    N = N - closestSmaller;
                    QCheckBox *pCheckBox = m_subassemblyWindow->findChild<QCheckBox *>(QString::number(closestSmaller));
                    pCheckBox->setChecked(true);
                    closestSmaller = 0;
                } while (N != 0);
            }
        }
    }
    if (type == 2)
    {
        QWidget *widget = new QWidget(this);
        QGridLayout *grid = new QGridLayout(this);
        QLabel *label_num = new QLabel("内容：", this);
        m_NameWindow.m_Edit = new QTextEdit(m_TypeWindow.m_Edit->text(), this);
        m_NameWindow.m_But_Confirm = new QPushButton("修改", this);
        m_NameWindow.m_But_Cancel = new QPushButton("取消", this);

        connect(m_NameWindow.m_But_Confirm, SIGNAL(clicked()), this, SLOT(on_m_But_Confirm_clicked())); // 链接确定按钮槽函数
        connect(m_NameWindow.m_But_Cancel, SIGNAL(clicked()), this, SLOT(on_m_But_Cancel_clicked()));   // 链接取消按钮槽函数

        grid->addWidget(label_num, 0, 0, 1, 2);
        grid->addWidget(m_NameWindow.m_Edit, 1, 0, 1, 15);
        grid->addWidget(m_NameWindow.m_But_Confirm, 2, 12, 1, 1);
        grid->addWidget(m_NameWindow.m_But_Cancel, 2, 13, 1, 2);

        widget->setLayout(grid);
        m_subassemblyWindow->ui->m_GridLayout->addWidget(widget, 0, 0);
    }
}
