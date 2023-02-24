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
    union el_data
    {
        int int_val;
        float float_val;
        double double_val;
        wchar_t wchar_val[512];
        char char_val[1024];
        uint uint_val;
        bool bool_val;
        __time32_t time_val;
        int64_t int64_val;
        uint64_t uint64_val;
    };

private slots:
    void on_m_ComBox_HugeSectionName_currentIndexChanged(int index);
    void showOperationDetails_Data(const QModelIndex &current, const QModelIndex &previous);
    void on_action_Open_triggered();
    void on_action_Save_triggered();
    void on_action_Ver_triggered();
    void on_action_AboutMe_triggered();
    void on_m_But_UpPage_clicked();
    void on_m_But_NextPage_clicked();

private:
    Ui::MainWindow *ui;
    DataSetCatalog My_Data;
    QStandardItemModel *model_Data;
    QList<subassembly *> m_subassemblyList;
    el_data m_Eldata;
    int m_ComBoxIndex = 0;

public: // 自定义函数
    void setSamllSectionWindow(int paegindex);
    void setSamllSectionWindowName(int dataindex, int paegindex);
};
#endif
