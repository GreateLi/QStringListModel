//#include "mainwindow.h"
#include <QApplication>
#include <QTGUI>
#include <QLabel>
#include "showtableform.h"
#include "mylistview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //ShowTableForm w;
    MyListView   w  ;
    w.show();

    return a.exec();
}
