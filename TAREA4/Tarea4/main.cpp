#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    int matrix[1000][1000];


    QApplication a(argc, argv);


    MainWindow w;
    w.show();

    return a.exec();
}
