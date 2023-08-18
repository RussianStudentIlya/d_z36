#include "authorizationform.h"
#include "ui_authorizationform.h"

AuthorizationForm::AuthorizationForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthorizationForm)
{
    ui->setupUi(this);
    //auto list = get_config_file<std::string>("cofig_file.txt");


    std::string host = "localhost";
    std::string user = "root";
    std::string password = "admin_password23";
    std::string dbName = "db_chat_dz25";


    //command_chat = std::make_shared<Chat>(host, user, password, dbName, 's');

    command_chat->startChat();

    if(command_chat->get_ChatStart())
    {
        ui->statusConnectLabel->setText("Connected to " + QString::fromStdString(command_chat->get_db_Name()));
    }

    /*this->_dbConnect = mySQL_db(host, user, password, dbName);

    _dbConnect.connect_DB(_dbConnect.get_dbName());

    if (_dbConnect.getConnectStatus() != true)
    {
        _dbConnect.create_DB(_dbConnect.get_dbName());
    }

    if(_dbConnect.getConnectStatus())
    {
        ui->statusConnectLabel->setText("Connected to " + QString::fromStdString(_dbConnect.get_dbName()));

        tables[0] = new db_Table_Client(_dbConnect.getConnectStatus(), _dbConnect, 's'); // Создание таблицы clients исли она не существуют

        tables[1] = new db_Table_hPassword(_dbConnect.getConnectStatus(), _dbConnect, 's'); // Создание таблицы password_hash исли она не существуют

        tables[2] = new db_Table_Messages(_dbConnect.getConnectStatus(), _dbConnect, 's'); // Создать таблицу messages если она не существуют

        if (tables[0]->getStatusCreateTable() && tables[1]->getStatusCreateTable() && tables[2]->getStatusCreateTable())
            this->_chatStart = true;
        else
            this->_chatStart = false;
    }*/
}

AuthorizationForm::~AuthorizationForm()
{
    /*delete tables[0];
    delete tables[1];
    delete tables[2];

    delete user;
    delete messag;*/

    delete ui;
}

void AuthorizationForm::setChat(std::shared_ptr<Chat> chat)
{
    this->command_chat = chat;
}

/*void AuthorizationForm::setChat(std::shared_ptr<Chat> chat)
{
    this->command_chat = chat;
}*/

/*bool AuthorizationForm::login_and_password_comparison(std::string login, std::string h_password)
{
    std::string h_p = this->user->get_hash_Login(h_password);

    std::string value_1 = tables[0]->get_id_user(login);
    std::string value_2 = tables[1]->get_id_user(h_p);

    if (value_1 == value_2 && value_1 != "-1" && value_2 != "-1")
        return true;

    return false;
}*/

void AuthorizationForm::on_RegistrationButton_clicked()
{
    emit registrationRequested();
}


void AuthorizationForm::on_buttonBox_accepted()
{
    std::string login = ui->LoginEdit->text().toStdString();
    std::string pass = ui->PasswordEdit->text().toStdString();

    //command_chat->checking_user_existence(login, pass);

    if(command_chat->login_and_password_comparison(login, pass))
    {
        emit accepted(login);
        QMessageBox::information(this, tr("Messages"), tr("Input"));
    }else
    {
        QMessageBox::warning(this, tr("Messages"), tr("Error"));
    }
}


void AuthorizationForm::on_buttonBox_rejected()
{
    emit rejected();
}


/*template<typename T>
std::vector<T> AuthorizationForm::get_config_file(const std::string fileName)
{
    std::ifstream file = std::ifstream(fileName);
    std::vector<T> result;
    T item;

    if (file.is_open())
    {
        char ch;
        while (file.get(ch))
        {
            if (ch == '\n')
            {
                result.push_back(item);
                item = "";
                continue;
            }
            item += ch;
        }

        result.push_back(item);
        item = "";
    }

    file.close();

    return result;
}*/
