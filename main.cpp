#include "mainwindow.h"
//#include "startscrean.h"
#include <fstream>
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //24:25
    //MainWindow w;
    //w.show();

    auto w = MainWindow::createClient();

    w->show();

    //StartScrean st;
    //st.show();
    return a.exec();
}
