#include "datasetcatalog.h"

DataSetCatalog::DataSetCatalog()
{
}

int DataSetCatalog::OpenElements(QString Path)
{
    QFile files(Path);
    if (!files.open(QIODevice::ReadOnly))
    {
        return 2;
    }

    QByteArray DataByte(files.readAll());
    QDataStream DataStream(&DataByte, QIODevice::ReadOnly);
    int ver = 0, len = 0, i = 0;
    DataStream.device()->seek(8);
    do
    {
        len = DataStream.device()->pos();
        DataStream.readRawData((char *)&ver, 4);
        if (len > 20)
        {
            return 4;
        }
    } while (ver != 88);
    DataStream.device()->seek(len);
    m_Basic_Data.m_HeadByte = DataByte.mid(0, len);
    if (!examine())
    {
        return 6;
    }
    while (!DataStream.atEnd())
    {
        if (i == 13)
        {
            DataStream.readRawData((char *)&m_Basic_Data.m_Base[0].m_PaddingDataLength, 4);
            DataStream.readRawData((char *)&m_Basic_Data.m_Base[0].m_PaddingDataCount, 4);
            DataStream.readRawData((char *)&m_Basic_Data.m_Base[0].m_PaddingDataBase, m_Basic_Data.m_Base[0].m_PaddingDataCount + 4);
            m_Basic_Data.m_Base[0].m_PaddingDataIndex = i;
        }
        if (i == 34)
        {
            DataStream.readRawData((char *)&m_Basic_Data.m_Base[1].m_PaddingDataLength, 4);
            DataStream.readRawData((char *)&m_Basic_Data.m_Base[1].m_PaddingDataCount, 4);
            DataStream.readRawData((char *)&m_Basic_Data.m_Base[1].m_PaddingDataBase, m_Basic_Data.m_Base[1].m_PaddingDataCount);
            m_Basic_Data.m_Base[1].m_PaddingDataIndex = i;
        }
        ele_Basic_HugeSection sec;
        DataStream.readRawData((char *)&sec, 8);
        if (sec.m_Length == 0)
        {
            continue;
        }
        sec.m_Exc = DataStream.device()->pos();
        sec.m_Data = DataByte.mid(sec.m_Exc, sec.m_Length * sec.m_Count);
        DataStream.device()->seek(sec.m_Length * sec.m_Count + sec.m_Exc);

        m_Basic_HugeSection.append(sec);
        i++;
    }
    files.close();

    for (int i = 0; i < m_Basic_HugeSection.size(); i++)
    {
        QDataStream stream(&m_Basic_HugeSection[i].m_Data, QIODevice::ReadOnly);
        int length = m_Basic_HugeSection[i].m_Length;
        int namelength = getHugeSegmentName(2, i).toInt();
        for (int j = 0; j < m_Basic_HugeSection[i].m_Count; j++)
        {
            int m_Id = 0;
            wchar_t m_Name[32] = {0};
            stream.device()->seek(length * j);
            stream.readRawData((char *)&m_Id, 4);
            stream.device()->seek(length * j + namelength);
            stream.readRawData((char *)&m_Name, 64);
            m_Basic_HugeSection[i].m_SmallSegment.insert(m_Id, QString::fromWCharArray(m_Name));
        }
    }
    return 1;
}

bool DataSetCatalog::getTable_Model_HugeSegment(int index)
{
    QList<int> m_Id = m_Basic_HugeSection[index].m_SmallSegment.keys();
    QList<QString> m_Name = m_Basic_HugeSection[index].m_SmallSegment.values();
    for (int i = 0; i < m_Basic_HugeSection[index].m_Count; i++)
    {
        QList<QStandardItem *> list;
        QStandardItem *item = new QStandardItem;
        item->setCheckable(true);
        item->setCheckState(Qt::Unchecked);
        item->setText(QString::number(i + 1));
        list << item << new QStandardItem(QString::number(m_Id[i])) << new QStandardItem(m_Name[i]);
        model_HugeSection->insertRow(i, list);
    }
    return true;
}

bool DataSetCatalog::examine()
{
    QSettings *sett = new QSettings("data\\verdata.ini", QSettings::IniFormat);
    bool ok = sett->contains(turnName() + "/GameName");
    sett->endGroup();
    // 释放内存
    delete sett;
    sett = nullptr;
    return ok;
}

QString DataSetCatalog::turnName()
{
    QString str;
    for (int i = 0; i < 8; i++)
    {
        str += QString("%1").arg((unsigned char)m_Basic_Data.m_HeadByte.at(i), 2, 16, QLatin1Char('0'));
    }
    return str.toUpper();
}

QStringList DataSetCatalog::getHugeSegmentName(int index)
{
    QSettings *sett = new QSettings("data\\verdata.ini", QSettings::IniFormat);
    sett->beginGroup(turnName());
    QStringList List, ListName;
    if (sett->contains("/BigName"))
    {
        List = sett->value("/BigName").toString().split("；");
        for (int i = 0; i < List.size(); i++)
        {
            ListName.append(List.at(i).split("|").at(index));
        }
    }
    sett->endGroup();
    // 释放内存
    delete sett;
    sett = nullptr;
    return ListName;
}

QString DataSetCatalog::getHugeSegmentName(int index, int subIndex)
{
    QSettings *sett = new QSettings("data\\verdata.ini", QSettings::IniFormat);
    sett->beginGroup(turnName());
    QStringList List, ListName;
    if (sett->contains("/BigName"))
    {
        List = sett->value("/BigName").toString().split("；");
        for (int i = 0; i < List.size(); i++)
        {
            ListName.append(List.at(i).split("|").at(index));
        }
    }
    sett->endGroup();
    // 释放内存
    delete sett;
    sett = nullptr;
    return ListName.at(subIndex);
}

QStringList DataSetCatalog::getSmallSegmentName(int index)
{
    QSettings *sett = new QSettings("data\\verdata_w.ini", QSettings::IniFormat);
    sett->beginGroup(turnName());
    QString indexname = "/" + QString::number(index);
    QStringList strList;
    if (sett->contains(indexname))
    {
        strList = sett->value(indexname).toString().split("；");
    }
    sett->endGroup();
    // 释放内存
    delete sett;
    sett = nullptr;
    return strList;
}

int DataSetCatalog::getSmallSegmentPage(int index)
{
    QStringList SubSegList = getSmallSegmentName(index);
    int Count = SubSegList.size();
    if (Count <= 0)
    {
        return 0;
    }
    float fsum = Count / 75.0;
    int sum = fsum + 1;
    return sum;
}

int DataSetCatalog::getHintList(QString name, QStringList &list)
{
    if (name.indexOf("费用") >= 0 || name.indexOf("价格") >= 0)
    {
        return 2;
    }
    QSettings *sett = new QSettings("data\\verHint.ini", QSettings::IniFormat);
    sett->beginGroup("hint");
    if (name.indexOf("属性ID") >= 0)
    {
        list = sett->value("/属性").toString().split("；");
        return 1;
    }
    if (name.indexOf("分类") >= 0)
    {
        list = sett->value("/分类").toString().split("；");
        return 1;
    }
    if (name.indexOf("精炼石") >= 0)
    {
        list = sett->value("/精炼石").toString().split("；");
        return 1;
    }
    if (name.indexOf("物品ID") >= 0)
    {
        list = sett->value("/物品").toString().split("；");
        return 1;
    }
    if (name.indexOf("掉落") >= 0)
    {
        list = sett->value("/掉落").toString().split("；");
        return 1;
    }
    sett->endGroup();
    // 释放内存
    delete sett;
    sett = nullptr;
    return 0;
}

QString DataSetCatalog::getSmallSegmentHint(int id, QString subsegName)
{
    QStringList List;
    int brk = getHintList(subsegName, List);

    QList<QString> strList;
    float f, f1;
    switch (brk)
    {
    case 1:
        for (int i = 0; i < List.size(); i++)
        {
            strList << m_Basic_HugeSection.at(List.at(i).toInt()).m_SmallSegment.values(id);
        }
        if (strList.size() > 0)
        {
            return strList.at(0);
        }
        break;

    case 2:
        f1 = id;
        f = f1 / 100000;
        QString str = QString::number(f, 'f', 5);
        int j = str.split(".").at(0).toInt();
        int y = str.split(".").at(1).left(2).toInt();
        int t = str.split(".").at(1).right(3).toInt();
        return QString::number(j) + "金" + QString::number(y) + "银" + QString::number(t).left(2) + "铜";
        break;
    }

    return "";
}