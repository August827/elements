#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
#pragma region // Splitter 分割条初始化
    QList<int> list_spl_x;
    list_spl_x.append(300);
    list_spl_x.append(880);
    ui->m_splitter_x->setSizes(list_spl_x);

    QList<int> list_spl_z;
    list_spl_z.append(40);
    list_spl_z.append(660);
    ui->m_splitter_z->setSizes(list_spl_z);
#pragma endregion
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_action_Open_triggered()
{

    QString DataPath = QFileDialog::getOpenFileName(this, "打开elements.data", "D:/武林外传数据", "elements.data(*data)");

    if (DataPath == nullptr)
    {
        return;
    }
    My_Data.m_Basic_HugeSection.clear();
    int errn = My_Data.OpenElements(DataPath);
    switch (errn)
    {
    case 1:
        ui->m_ComBox_HugeSectionName->clear();
        ui->m_ComBox_HugeSectionName->addItems(My_Data.getHugeSegmentName(1));
        break;

    default:
        QMessageBox::critical(this, "错误：", "\r\n发生了未知,且致命的的错误！！\r\n \r\n请联系管理员！", "     确定     ");
    }
}

void MainWindow::on_action_Save_triggered()
{
}

void MainWindow::on_action_Ver_triggered()
{
}

void MainWindow::on_action_AboutMe_triggered()
{
    // model_Data->item(indexList.at(0).row(), 0)->setCheckState(Qt::Checked);

    // bool ok = model_Data->item(0, 0)->checkState() == Qt::Checked;
    // int a = 0;
    QSettings *sett = new QSettings("data\\verHint.ini", QSettings::IniFormat);
    sett->beginGroup("hint");
    QStringList list = sett->allKeys();

    int a = 0;
}

void MainWindow::on_m_ComBox_HugeSectionName_currentIndexChanged(int index)
{
    m_ComBoxIndex = index;
    delete ui->m_TabVw_HugeSectionData->model();
    My_Data.model_HugeSection = new QStandardItemModel();
    QStringList List_Data = {"序号", "ID", "名称"};
    My_Data.model_HugeSection->setHorizontalHeaderLabels(List_Data);
    ui->m_TabVw_HugeSectionData->setModel(My_Data.model_HugeSection);
    ui->m_TabVw_HugeSectionData->setColumnWidth(0, 63);
    ui->m_TabVw_HugeSectionData->setColumnWidth(1, 45);
    ui->m_TabVw_HugeSectionData->horizontalHeader()->setStretchLastSection(true);    // 最后一列补全所有空白位置
    ui->m_TabVw_HugeSectionData->setSelectionBehavior(QTableView::SelectRows);       // 设置选中一整行
    ui->m_TabVw_HugeSectionData->setSelectionMode(QTableView::SingleSelection);      // 设置不能选中多行
    ui->m_TabVw_HugeSectionData->setEditTriggers(QAbstractItemView::NoEditTriggers); // 禁止编辑
    ui->m_TabVw_HugeSectionData->verticalHeader()->hide();                           // 隐藏行号
    ui->m_TabVw_HugeSectionData->scrollToTop();                                      // 让滚动条滚动到最顶部
    connect(ui->m_TabVw_HugeSectionData->selectionModel(), SIGNAL(currentRowChanged(const QModelIndex &, const QModelIndex &)), this, SLOT(showOperationDetails_Data(const QModelIndex &, const QModelIndex &)));

    if (My_Data.getTable_Model_HugeSegment(index))
    {
        int count = My_Data.getSmallSegmentPage(index + 1);
        switch (count)
        {
        case 0:
            ui->m_But_UpPage->setDisabled(true);
            ui->m_But_NextPage->setDisabled(true);
            ui->m_Label_MinPage->setText("0");
            ui->m_Label_MaxPage->setText("0");
            setSamllSectionWindow(0);
            break;
        case 1:
            ui->m_Label_MinPage->setText("1");
            ui->m_Label_MaxPage->setText("1");
            ui->m_But_UpPage->setDisabled(true);
            ui->m_But_NextPage->setDisabled(true);
            setSamllSectionWindow(1);
            ui->m_TabVw_HugeSectionData->selectRow(0);
            break;
        default:
            ui->m_Label_MinPage->setText("1");
            ui->m_But_UpPage->setDisabled(true);
            ui->m_But_NextPage->setDisabled(false);
            ui->m_Label_MaxPage->setText(QString::number(count));
            setSamllSectionWindow(1);
            ui->m_TabVw_HugeSectionData->selectRow(0);
            break;
        }
    }
}

void MainWindow::showOperationDetails_Data(const QModelIndex &current, const QModelIndex &previous)
{
    setSamllSectionWindowName(current.row(), ui->m_Label_MinPage->text().toInt());
}

void MainWindow::on_m_But_UpPage_clicked()
{
    ui->m_But_NextPage->setEnabled(true);

    int MainPaet = ui->m_Label_MinPage->text().toInt() - 1;
    ui->m_Label_MinPage->setText(QString::number(MainPaet));
    if (MainPaet == 1)
    {
        ui->m_But_UpPage->setEnabled(false);
    }
    setSamllSectionWindow(MainPaet);
    setSamllSectionWindowName(ui->m_TabVw_HugeSectionData->currentIndex().row(), ui->m_Label_MinPage->text().toInt());
}

void MainWindow::on_m_But_NextPage_clicked()
{
    ui->m_But_UpPage->setEnabled(true);

    int MainPaet = ui->m_Label_MinPage->text().toInt() + 1;
    ui->m_Label_MinPage->setText(QString::number(MainPaet));
    if (MainPaet == ui->m_Label_MaxPage->text().toInt())
    {
        ui->m_But_NextPage->setEnabled(false);
    }
    setSamllSectionWindow(MainPaet);
    setSamllSectionWindowName(ui->m_TabVw_HugeSectionData->currentIndex().row(), ui->m_Label_MinPage->text().toInt());
}

void MainWindow::on_m_But_Search_clicked()
{
    if (ui->m_Edit_Search_Contents->text().isEmpty())
    {
        QMessageBox::warning(this, "警告：", "\r\nEdit内容为空！无法搜索");
        return;
    }
    int index = ui->m_ComBo_Search_Type->currentIndex();
    switch (index)
    {
    case 0:
        for (int i = 0; i < ui->m_TabVw_HugeSectionData->model()->rowCount(); i++)
        {
            ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            if (ui->m_TabVw_HugeSectionData->model()->index(i, 1).data().toString() != ui->m_Edit_Search_Contents->text())
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
        }
        break;
    case 1:
        for (int i = 0; i < ui->m_TabVw_HugeSectionData->model()->rowCount(); i++)
        {
            ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            if (ui->m_TabVw_HugeSectionData->model()->index(i, 2).data().toString().indexOf(ui->m_Edit_Search_Contents->text()) == -1)
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
        }
        break;
    }
}

void MainWindow::on_m_But_Search_Reset_clicked()
{
    for (int i = 0; i < ui->m_TabVw_HugeSectionData->model()->rowCount(); i++)
    {
        ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
    }
}

void MainWindow::on_m_But_Filter_clicked()
{
    if (ui->m_ComBo_Filter_Type->currentText().isEmpty())
    {
        QMessageBox::warning(this, "警告：", "\r\nComBo内容为空！无法过滤");
        return;
    }
    if (ui->m_Edit_Filter_Contents->text().isEmpty())
    {
        QMessageBox::warning(this, "警告：", "\r\nEdit内容为空！无法过滤");
        return;
    }

    int Conditionindex = ui->m_ComBo_Filter_Condition->currentIndex();
    QStringList list = My_Data.getSmallSegmentName(m_ComBoxIndex + 1);
    QDataStream dataStream(&My_Data.m_Basic_HugeSection[m_ComBoxIndex].m_Data, QIODevice::ReadOnly);
    QString str = My_Data.getSmallSegmentName(m_ComBoxIndex + 1).at(ui->m_ComBo_Filter_Type->currentIndex());
    int type = str.split("|").at(1).toInt();
    int ecx = str.split("|").at(2).toInt();
    int len = str.split("|").at(3).toInt();
    int mecx = 0;
    QString strsum;
    for (int i = 0; i < My_Data.m_Basic_HugeSection[m_ComBoxIndex].m_Count; i++)
    {
        dataStream.device()->seek(i * My_Data.m_Basic_HugeSection[m_ComBoxIndex].m_Length + ecx);
        switch (type)
        {
        case 0:
            mecx = dataStream.device()->pos();
            dataStream.readRawData((char *)&m_Eldata.int_val, len);
            if (m_Eldata.int_val < 900000000)
            {
                strsum = QString::number(m_Eldata.int_val);
            }
            else
            {
                dataStream.device()->seek(mecx);
                dataStream.readRawData((char *)&m_Eldata.float_val, len);
                strsum = QString::number(m_Eldata.float_val);
            }
            break;
        case 1:
            dataStream.readRawData((char *)&m_Eldata.int_val, len);
            strsum = QString::number(m_Eldata.int_val);
            break;
        case 2:
            dataStream.readRawData((char *)&m_Eldata.float_val, len);
            strsum = QString::number(m_Eldata.float_val);
            break;
        case 3:
            dataStream.readRawData((char *)&m_Eldata.wchar_val, len);
            strsum = QString::fromWCharArray(m_Eldata.wchar_val);
            break;
        case 4:
            dataStream.readRawData((char *)&m_Eldata.char_val, len);
            strsum = QString::fromLocal8Bit(m_Eldata.char_val);
            break;
        case 5:
            dataStream.readRawData((char *)&m_Eldata.double_val, len);
            strsum = QString::number(m_Eldata.double_val);
            break;
        case 6:
            dataStream.readRawData((char *)&m_Eldata.uint_val, len);
            strsum = QString::number(m_Eldata.uint_val);
            break;
        case 7:
            dataStream.readRawData((char *)&m_Eldata.time_val, len);
            strsum = QDateTime::fromSecsSinceEpoch(m_Eldata.time_val).toString("yyyy-MM-dd hh:mm:ss");
            break;
        case 8:
            dataStream.readRawData((char *)&m_Eldata.bool_val, len);
            strsum = QString::number(m_Eldata.bool_val);
            break;
        default:
            continue;
            break;
        }

        switch (Conditionindex)
        {
        case 0:
            if (strsum.toInt() == ui->m_Edit_Filter_Contents->text().toInt())
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            }
            else
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
            break;
        case 1:
            if (strsum.toInt() > ui->m_Edit_Filter_Contents->text().toInt())
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            }
            else
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
            break;
        case 2:
            if (strsum.toInt() < ui->m_Edit_Filter_Contents->text().toInt())
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            }
            else
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
            break;
        case 3:
            if (strsum.toInt() >= ui->m_Edit_Filter_Contents->text().toInt())
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            }
            else
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
            break;
        case 4:
            if (strsum.toInt() <= ui->m_Edit_Filter_Contents->text().toInt())
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            }
            else
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
            break;
        case 5:
            if (strsum.indexOf(ui->m_Edit_Filter_Contents->text()) != -1)
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, false);
            }
            else
            {
                ui->m_TabVw_HugeSectionData->setRowHidden(i, true);
            }
            break;
        default:
            continue;
            break;
        }
    }
}

void MainWindow::on_m_TabWid_currentChanged(int index)
{
    if (index == 0)
    {
        QList<int> list_spl_z;
        list_spl_z.append(40);
        list_spl_z.append(660);
        ui->m_splitter_z->setSizes(list_spl_z);
    }
    else
    {
        QList<int> list_spl_z;
        list_spl_z.append(340);
        list_spl_z.append(360);
        ui->m_splitter_z->setSizes(list_spl_z);
    }
}

void MainWindow::setSamllSectionWindow(int paegindex)
{
    QStringList SmallSegmentList = My_Data.getSmallSegmentName(m_ComBoxIndex + 1);
    int Count = SmallSegmentList.size();
    qDeleteAll(m_subassemblyList); // 释放QList数组指针
    m_subassemblyList.clear();
    ui->m_ComBo_Filter_Type->clear();
    if (Count <= 0 || paegindex <= 0)
    {
        return;
    }
    subassembly *sub;
    QWidget *widget = new QWidget();
    QGridLayout *grid = new QGridLayout();
    grid->setVerticalSpacing(1);
    grid->setHorizontalSpacing(10);
    int m = (paegindex - 1) * 75;
    Count = Count - m;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            sub = new subassembly();
            grid->addWidget(sub, j, i);
            sub->setSubassembly(SmallSegmentList.at(m).split("|").at(0), "", "");
            sub->m_TypeWindow.m_Type = SmallSegmentList.at(m).split("|").at(1).toInt();
            sub->m_TypeWindow.m_Exc = SmallSegmentList.at(m).split("|").at(2).toInt();
            sub->m_TypeWindow.m_Length = SmallSegmentList.at(m).split("|").at(3).toInt();
            m_subassemblyList << sub;
            ui->m_ComBo_Filter_Type->addItem(SmallSegmentList.at(m).split("|").at(0));
            Count--;
            if (Count == 0)
            {
                break;
            }
            m++;
        }
        if (Count == 0)
        {
            break;
        }
    }
    widget->setLayout(grid);
    ui->scrollArea->setWidget(widget);
}

void MainWindow::setSamllSectionWindowName(int dataindex, int paegindex)
{
    QByteArray segment = My_Data.m_Basic_HugeSection[m_ComBoxIndex].m_Data.mid(dataindex * My_Data.m_Basic_HugeSection[m_ComBoxIndex].m_Length, My_Data.m_Basic_HugeSection[m_ComBoxIndex].m_Length);
    QDataStream dataStream(&segment, QIODevice::ReadOnly);
    if (m_subassemblyList.size() <= 0)
    {
        return;
    }
    dataStream.device()->seek(m_subassemblyList.at(0)->m_TypeWindow.m_Exc);
    int ecx = 0;
    int sum = m_subassemblyList.size();
    for (int i = 0; i < sum; i++)
    {
        switch (m_subassemblyList.at(i)->m_TypeWindow.m_Type)
        {
        case 0:
            ecx = dataStream.device()->pos();
            dataStream.readRawData((char *)&m_Eldata.int_val, m_subassemblyList.at(i)->m_TypeWindow.m_Length);
            if (m_Eldata.int_val < 900000000)
            {
                m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.int_val));
            }
            else
            {
                dataStream.device()->seek(ecx);
                dataStream.readRawData((char *)&m_Eldata.float_val, m_subassemblyList.at(i)->m_TypeWindow.m_Length);
                m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.float_val));
            }
            break;
        case 1:
            dataStream.readRawData((char *)&m_Eldata.int_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            if (m_subassemblyList[i]->combo_but_Flag == 3)
            {
                m_subassemblyList[i]->m_TypeWindow.m_ComboBox->setCurrentIndex(m_Eldata.int_val);
            }
            else
            {
                m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.int_val));
            }

            break;
        case 2:
            dataStream.readRawData((char *)&m_Eldata.float_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.float_val));
            break;
        case 3:
            dataStream.readRawData((char *)&m_Eldata.wchar_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::fromWCharArray(m_Eldata.wchar_val));
            break;
        case 4:
            dataStream.readRawData((char *)&m_Eldata.char_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::fromLocal8Bit(m_Eldata.char_val));
            break;
        case 5:
            dataStream.readRawData((char *)&m_Eldata.double_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.double_val));
            break;
        case 6:
            dataStream.readRawData((char *)&m_Eldata.uint_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.uint_val));
            break;
        case 7:
            dataStream.readRawData((char *)&m_Eldata.time_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QDateTime::fromSecsSinceEpoch(m_Eldata.time_val).toString("yyyy-MM-dd hh:mm:ss"));
            break;
        case 8:
            dataStream.readRawData((char *)&m_Eldata.bool_val, m_subassemblyList[i]->m_TypeWindow.m_Length);
            if (m_subassemblyList[i]->combo_but_Flag == 3)
            {
                m_subassemblyList[i]->m_TypeWindow.m_ComboBox->setCurrentIndex(m_Eldata.int_val);
            }
            else
            {
                m_subassemblyList[i]->m_TypeWindow.m_Edit->setText(QString::number(m_Eldata.bool_val));
            }

            break;
        }

        if (m_subassemblyList[i]->combo_but_Flag == 1)
        {
            m_subassemblyList.at(i)->m_TypeWindow.m_Lable2->setText("");
            if (m_subassemblyList[i]->m_TypeWindow.m_Edit->text().toInt() > 0)
            {
                QString name = m_subassemblyList[i]->m_TypeWindow.m_Lable->text();
                QString str = My_Data.getSmallSegmentHint(m_subassemblyList.at(i)->m_TypeWindow.m_Edit->text().toInt(), m_subassemblyList.at(i)->m_TypeWindow.m_Lable->text());
                m_subassemblyList.at(i)->m_TypeWindow.m_Lable2->setText(str);
                m_subassemblyList.at(i)->m_TypeWindow.m_Lable2->setToolTip(str);
            }
        }
        if (m_subassemblyList[i]->combo_but_Flag != 3)
        {
            m_subassemblyList[i]->m_TypeWindow.m_Edit->setCursorPosition(0);
        }
    }
}
