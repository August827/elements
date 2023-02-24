#include "mainwindow.h"
#include <QApplication>

void GetQss()
{
    QFile file("interface/css/August.css");
    if (!file.open(QIODevice::ReadOnly))
    {
        exit(0);
    }
    QTextStream in(&file);
    QString css = in.readAll();
    qApp->setStyleSheet(css);
    qApp->setFont(QFont("微软雅黑", 9));
    return;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // GetQss();
    MainWindow w;
    w.show();
    return a.exec();
}
