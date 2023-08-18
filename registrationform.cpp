#include "registrationform.h"
#include "ui_registrationform.h"

RegistrationForm::RegistrationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegistrationForm)
{
    ui->setupUi(this);

    //std::string host = "localhost";
    //std::string user = "root";
    //std::string password = "admin_password23";
    //std::string dbName = "db_chat_dz25";

    ui->LoginEdit->setReadOnly(true);

    //command_chat = std::make_shared<Chat>(host, user, password, dbName, 's');

    command_chat->startChat();

    /*if(command_chat->get_ChatStart())
    {
        ui->statusConnectLabel->setText("Connected to " + QString::fromStdString(command_chat->get_db_Name()));
    }*/

    /*this->_dbConnect = mySQL_db(host, user, password, dbName);

    _dbConnect.connect_DB(_dbConnect.get_dbName());

    if (_dbConnect.getConnectStatus() != true)
    {
        _dbConnect.create_DB(_dbConnect.get_dbName());
    }

    if(_dbConnect.getConnectStatus())
    {
        ///ui->statusConnectLabel->setText("Connected to " + QString::fromStdString(_dbConnect.get_dbName()));

        tables[0] = new db_Table_Client(_dbConnect.getConnectStatus(), _dbConnect, 's'); // Создание таблицы clients исли она не существуют

        tables[1] = new db_Table_hPassword(_dbConnect.getConnectStatus(), _dbConnect, 's'); // Создание таблицы password_hash исли она не существуют

        tables[2] = new db_Table_Messages(_dbConnect.getConnectStatus(), _dbConnect, 's'); // Создать таблицу messages если она не существуют

        if (tables[0]->getStatusCreateTable() && tables[1]->getStatusCreateTable() && tables[2]->getStatusCreateTable())
            this->_chatStart = true;
        else
            this->_chatStart = false;
    }*/
}

RegistrationForm::~RegistrationForm()
{
    delete ui;
}

void RegistrationForm::setChat(std::shared_ptr<Chat> chat)
{
    this->command_chat = chat;
}

/*void RegistrationForm::setChat(std::shared_ptr<Chat> chat)
{
    this->command_chat = chat;
}/

/*
bool RegistrationForm::check_exists_login(std::string login)
{
    std::string value = tables[0]->get_id_user(login);

    if (value != "-1")
        return false;

    return true;
}

bool RegistrationForm::check_exists_password(std::string h_password)
{
    std::string h_p = this->user->get_hash_Login(h_password);
    std::string value = tables[1]->get_id_user(h_p);

    if (value != "-1")
        return false;

    return true;
}*/


void RegistrationForm::on_LoginButton_clicked()
{
    ui->SurnameEdit->clear();
    ui->NameEdit->clear();
    ui->PatronymicEdit->clear();
    ui->EmailEdit->clear();
    ui->LoginEdit->clear();
    ui->PasswordEdit->clear();

    ui->SurnameFlag->clear();
    ui->NameFlag->clear();
    ui->PatronymicFlag->clear();
    ui->EmailFlag->clear();
    ui->LoginFlag->clear();
    ui->PasswordFlag->clear();

    emit authorizationRequested();
}


void RegistrationForm::on_buttonBox_accepted()
{
    /*Проверка чтобы строка не была пустой и не состояла из пробелов*/
    if(ui->SurnameEdit->text().isEmpty() || ui->SurnameEdit->text().contains(' '))
    {
        ui->SurnameFlag->setText("X");
    }
    else
        ui->SurnameFlag->setText("V");

    if(ui->NameEdit->text().isEmpty() || ui->NameEdit->text().contains(' '))
    {
        ui->NameFlag->setText("X");
    }
    else
        ui->NameFlag->setText("V");

    if(ui->PatronymicEdit->text().isEmpty() || ui->PatronymicEdit->text().contains(' '))
    {
        ui->PatronymicFlag->setText("X");
    }
    else
        ui->PatronymicFlag->setText("V");

    if(ui->PatronymicEdit->text().isEmpty() || ui->PatronymicEdit->text().contains(' '))
    {
        ui->PatronymicFlag->setText("X");
    }
    else
        ui->PatronymicFlag->setText("V");


    if(ui->EmailEdit->text().isEmpty() || ui->EmailEdit->text().contains(' '))
    {
        ui->EmailFlag->setText("X");
    }
    else
        ui->EmailFlag->setText("V");


    if(ui->LoginEdit->text().isEmpty() || ui->LoginEdit->text().contains(' '))
    {
        ui->LoginFlag->setText("Error");
    }else
    {
        if(command_chat->checking_login_existence(ui->LoginEdit->text().toStdString()))
        {
            ui->LoginFlag->setText("V");
            ui->LoginEdit->setStyleSheet("border: solid black");
        }
        else
        {
            ui->LoginEdit->setReadOnly(false);
            ui->LoginFlag->setText("X");
            ui->LoginEdit->setStyleSheet("border: 1px solid red");
        }
    }


    if(ui->PasswordEdit->text().isEmpty() || ui->PasswordEdit->text().contains(' '))
    {
        ui->PasswordFlag->setText("Error");
    }else
    {
        if(command_chat->checking_password_existence(ui->PasswordEdit->text().toStdString()))
        {
            ui->PasswordFlag->setText("V");
            ui->PasswordEdit->setStyleSheet("border: solid black");
        }
        else
        {
            ui->PasswordFlag->setText("X");
            ui->PasswordEdit->setStyleSheet("border: 1px solid red");
        }
    }

    if(command_chat->get_ChatStart())
    {
        if(ui->SurnameFlag->text() == "V" && ui->NameFlag->text() == "V" && ui->PatronymicFlag->text() == "V" &&
            ui->EmailFlag->text() == "V"  && ui->LoginFlag->text() == "V" && ui->PasswordFlag->text() == "V")
        {
            //this->user =  new User(last_name, name, patronymic, email, password_h, login);

            //QMessageBox::information(this, tr("information"), tr("Зарегестрирован"));

            string list[] = {
                ui->SurnameEdit->text().toStdString(), //0
                ui->NameEdit->text().toStdString(), //1
                ui->PatronymicEdit->text().toStdString(), //2
                ui->EmailEdit->text().toStdString(), //3
                ui->LoginEdit->text().toStdString(), //4
                ui->PasswordEdit->text().toStdString() //5
            };

            //qDebug() <<"Current login: " << list[4];

            if(command_chat->user_Registration(list))
            {
                emit accepted(list[4]);
                QMessageBox::information(this, tr("information"), tr("Зарегестрирован"));
            }
        }
    }
}


void RegistrationForm::on_buttonBox_rejected()
{
    emit rejected();
}

void RegistrationForm::on_NameEdit_returnPressed()
{
    std::string login = "@" + ui->SurnameEdit->text().toStdString() + "_" + ui->NameEdit->text().toStdString();
    ui->LoginEdit->setText(QString::fromStdString(login));
    login.clear();
}
