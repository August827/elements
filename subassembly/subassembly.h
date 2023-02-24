#ifndef SUBASSEMBLY_H
#define SUBASSEMBLY_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>
#include <QSettings>
#include <QPushButton>
#include <QTableView>
#include <QHeaderView>
#include <QCheckBox>
#include <QStandardItemModel>
#include <QMenu>
#include <QAction>
#include <QTextEdit>

namespace Ui
{
    class subassembly;
}

class subassembly : public QWidget
{
    Q_OBJECT
    struct TypeWindow
    {
        QComboBox *m_ComboBox;
        QLabel *m_Lable;
        QLabel *m_Lable2;
        QLineEdit *m_Edit;
        QPushButton *m_But;
        int m_Type = 0;
        int m_Length = 0;
        int m_Exc = 0;
    };
    struct NameWindow
    {
        bool AutoExclusive = false;

        QStandardItemModel *model;
        QTableView *m_TableView;
        QTextEdit *m_Edit;
        QCheckBox *m_Check;
        QPushButton *m_But_Confirm;
        QPushButton *m_But_Cancel;
    };

public:
    explicit subassembly(QWidget *parent = nullptr);
    ~subassembly();

private slots:
    void on_Button_Clicked();                    // 动态创建QPushButton按钮信号槽函数
    void on_CheckBox_Clicked();                  // 动态创建QCheckBox按钮信号槽函数
    void on_m_But_Confirm_clicked();             // 动态创建确定按钮信号槽函数
    void on_m_But_Cancel_clicked();              // 动态创建取消按钮信号槽函数
    void on_CheckBox_All_stateChanged(int arg1); // 全选QCheckBox按钮信号槽函数

private:
    Ui::subassembly *ui;

public:
    subassembly *m_subassemblyWindow;
    TypeWindow m_TypeWindow;
    NameWindow m_NameWindow;

    int combo_but_Flag = 0;

public:
    void setSubassembly(QString LableText, QString EditText, QString LableText2);
    int AddUpWidget(QString name, QStringList &list);
    void AddUpWindow(QString name, int type);
};

#endif // SUBASSEMBLY_H
