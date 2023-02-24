#ifndef DATASETCATALOG_H
#define DATASETCATALOG_H

#include "DataSetCatalog_global.h"

class DATASETCATALOG_EXPORT DataSetCatalog
{
    struct ele_Basic_PaddingData
    {
        int m_PaddingDataBase[256] = {0}; // 数据
        int m_PaddingDataLength = 0;      // 小段长度
        int m_PaddingDataCount = 0;       // 小段数量
        int m_PaddingDataIndex = 0;       // 循环的下标
    };
    struct ele_Basic_Data
    {
        QByteArray m_HeadByte;           // 头文件数据
        ele_Basic_PaddingData m_Base[2]; // 填充数据
    };
    struct ele_Basic_HugeSection
    {
        int m_Length = 0;                       // 小段长度
        int m_Count = 0;                        // 小段数量
        int m_Exc = 0;                          // 偏移
        QByteArray m_Data = NULL;               // 所有字节数据
        QMultiMap<int, QString> m_SmallSegment; // 小段ID和名称
    };

public:
    DataSetCatalog();

public: // 主函数
    int OpenElements(QString Path);

    bool getTable_Model_HugeSegment(int index);

public: // 配置文件函数
    // 是否支持的版本
    bool examine();
    // 头文件转换
    QString turnName();
    // 获取大段名称数组
    QStringList getHugeSegmentName(int index);
    // 获取大段名称数组
    QString getHugeSegmentName(int index, int subIndex);
    // 获取小段名称数组
    QStringList getSmallSegmentName(int index);
    // 获取小段显示的页数
    int getSmallSegmentPage(int index);
    // 获取小段提示需要遍历的数组
    int getHintList(QString name, QStringList &list);
    // 按ID获取小段提示的名称
    QString getSmallSegmentHint(int id, QString subsegName);

public:
    ele_Basic_Data m_Basic_Data;
    QList<ele_Basic_HugeSection> m_Basic_HugeSection;
    QStandardItemModel *model_HugeSection;
};

#endif // DATASETCATALOG_H
