#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <datasetcatalog.h>
#include <subassembly.h>

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QStandardItemModel>

#pragma warning(disable : 4996)

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // 大段ComboBox名称改变时，刷新小段ComboBox名称
    void on_m_ComBox_HugeSectionName_currentIndexChanged(int index);
    // 小段名称改变时，刷新小段数据
    void showOperationDetails_Data(const QModelIndex &current, const QModelIndex &previous);
    // 打开按钮槽函数
    void on_action_Open_triggered();
    // 保存按钮槽函数
    void on_action_Save_triggered();
    // 版本信息按钮槽函数
    void on_action_Ver_triggered();
    // 关于按钮槽函数
    void on_action_AboutMe_triggered();
    // 上一页按钮槽函数
    void on_m_But_UpPage_clicked();
    // 下一页按钮槽函数
    void on_m_But_NextPage_clicked();
    // 搜索按钮槽函数
    void on_m_But_Search_clicked();
    // 重置搜索按钮槽函数
    void on_m_But_Search_Reset_clicked();
    // 过滤按钮槽函数
    void on_m_But_Filter_clicked();
    // 单击TAB切换页面
    void on_tabWidget_currentChanged(int index);
    // 全局搜索按钮槽函数
    void on_m_But_Search_All_clicked();
    // 双击全局搜索Tableview 显示数据
    void on_m_TabVw_Search_All_doubleClicked(const QModelIndex &index);
    // 主Tableview右键菜单响应函数
    void slotContextMenu(QPoint pos);
    // 单击菜单项响应函数
    void slotMenu_triggered();

private:
    Ui::MainWindow *ui;
    DataSetCatalog My_Data;
    QStandardItemModel *model_Search_All;
    QList<subassembly *> m_subassemblyList;
    QMenu *m_popMenu; // 右键菜单
    el_data m_Eldata;
    int m_ComBoxIndex = 0;

public: // 自定义函数
    void setSamllSectionWindow(int paegindex);
    void setSamllSectionWindowName(int dataindex, int paegindex);
};
#endif
