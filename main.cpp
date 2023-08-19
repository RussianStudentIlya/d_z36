#include "mainwindow.h"
//#include "startscrean.h"
#include <fstream>
#include <QApplication>
#include <QDebug>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //24:25
    //MainWindow w;
    //w.show();

    std::string host = "localhost";
    std::string user = "root";
    std::string password = "admin_password23";
    std::string dbName = "db_chat_dz25";

    std::shared_ptr<Chat> command_chat = std::make_shared<Chat>(host, user, password, dbName, 's'); // подключаемся к mysql

    if(!command_chat->get_create_DB())
    {
        qDebug() << "База данных не создана!!!";
    }else
    {
        auto w = MainWindow::createClient(command_chat);
        w->show();
    }

    /*if(command_chat->get_create_DB())
    {
        QMessageBox::information(this, tr("Information"), tr("Connect"));
        ui->authorizationWidget->setChat(command_chat);
        ui->registrationWidget->setChat(command_chat);

        QMessageBox::information(this, tr("Information"), tr("Connect"));
    }else
    {
        QMessageBox::warning(this, tr("Information"), tr("no connect"));
    }*/


    //StartScrean st;
    //st.show();
    return a.exec();
}
