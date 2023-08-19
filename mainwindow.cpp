#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startscrean.h"
#include "authorizationform.h"
#include "registrationform.h"

MainWindow::MainWindow(std::shared_ptr<Chat> command_chat, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /*std::string host = "localhost";
    std::string user = "root";
    std::string password = "admin_password23";
    std::string dbName = "db_chat_dz25";

    command_chat = std::make_shared<Chat>(host, user, password, dbName, 's'); // подключаемся к mysql

    if(command_chat->get_create_DB())
    {
        QMessageBox::information(this, tr("Information"), tr("Connect"));
    }else
    {
        QMessageBox::warning(this, tr("Information"), tr("no connect"));
    }*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

//MainWindow *MainWindow::createClient()
MainWindow *MainWindow::createClient(std::shared_ptr<Chat> command_chat)
{
    StartScrean s(command_chat);
    AuthorizationForm aF(command_chat);
    RegistrationForm rF(command_chat);
    auto result = s.exec();

    if(result == QDialog::Rejected)
    {
        return nullptr;
    }
    return new MainWindow(command_chat);
}


void MainWindow::on_sendMessagesButton_clicked()
{
    //ui->labelCurrentClient->setText(ui->messagesLineEdit->text());
}


void MainWindow::on_closeClientButton_clicked()
{
    auto w = createClient(this->command_chat);
    w->show();
}


void MainWindow::on_messagesLineEdit_returnPressed()
{
    this->on_sendMessagesButton_clicked();
}

