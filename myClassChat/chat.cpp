#include "chat.h"

Chat::Chat(string &host, string &user, string &password, string &dbName, char mode)
    : _host_db(host), _user_db(user), _password_db(password), db_name(dbName), mode_client_or_server(mode)
{
    this->_dbConnect = mySQL_db(_host_db, _user_db, _password_db, db_name);

    _dbConnect.connect_DB(_dbConnect.get_dbName());

    if (_dbConnect.getConnectStatus() != true && mode_client_or_server == 's')
    {
        _dbConnect.create_DB(_dbConnect.get_dbName());
    }
}

Chat::~Chat()
{
    delete tables[0];
    delete tables[1];
    delete tables[2];

    delete user;
    delete messag;
}

void Chat::startChat()
{
    if(_dbConnect.getConnectStatus())
    {
        //ui->statusConnectLabel->setText("Connected to " + QString::fromStdString(_dbConnect.get_dbName()));

        tables[0] = new db_Table_Client(_dbConnect.getConnectStatus(), _dbConnect, mode_client_or_server); // Создание таблицы clients исли она не существуют

        tables[1] = new db_Table_hPassword(_dbConnect.getConnectStatus(), _dbConnect, mode_client_or_server); // Создание таблицы password_hash исли она не существуют

        tables[2] = new db_Table_Messages(_dbConnect.getConnectStatus(), _dbConnect, mode_client_or_server); // Создать таблицу messages если она не существуют

        if (tables[0]->getStatusCreateTable() && tables[1]->getStatusCreateTable() && tables[2]->getStatusCreateTable())
            this->_chatStart = true;
        else
            this->_chatStart = false;
    }
}

const bool Chat::get_ChatStart() const
{
    return this->_chatStart;
}

const string Chat::get_db_Name() const
{
    return _dbConnect.get_dbName();
}

/*void Chat::checking_user_existence(string login, string password)
{
    if(this->checking_login_existence(login) && this->checking_password_existence(password))
        this->_userExist = true;
    else
        this->_userExist = false;
}*/

const bool Chat::get_UserExist() const
{
    return this->_userExist;
}

bool Chat::login_and_password_comparison(string login, string h_password)
{
    std::string h_p = this->user->get_hash_Login(h_password);

    std::string value_1 = tables[0]->get_id_user(login);
    std::string value_2 = tables[1]->get_id_user(h_p);

    if (value_1 == value_2 && value_1 != "-1" && value_2 != "-1")
        return true;

    return false;
}

bool Chat::checking_login_existence(string login)
{
    std::string value = tables[0]->get_id_user(login);

    qDebug() << "Login: " + value;

    if (value != "-1")
        return false;

    return true;
}

bool Chat::checking_password_existence(string h_password)
{
    string h_p = this->user->get_hash_Login(h_password);
    string value = tables[1]->get_id_user(h_p);

    qDebug() << "Password Login: " << h_p;

    if (value != "-1")
        return false;

    return true;
}

bool Chat::user_Registration(string user_list[])
{
    /*          ui->SurnameEdit->text().toStdString(), //0
                ui->NameEdit->text().toStdString(), //1
                ui->PatronymicEdit->text().toStdString(), //2
                ui->EmailEdit->text().toStdString(), //3
                ui->LoginEdit->text().toStdString(), //4
                ui->PasswordEdit->text().toStdString() //5 */

    // User(                last_name,        name,     patronymic,     email,     hash_password,    login)
    this->user =  new User(user_list[0], user_list[1], user_list[2], user_list[3], user_list[5], user_list[4]);


    //qDebug() << user->getLogin();
    std::string list[] = {
        user->getLastName(),
        user->getName(),
        user->getPatronymic(),
        user->getEmail(),
        user->getLogin()
    }; //last_name, name, patronymic, email, login

    bool flag_clients = tables[0]->add_in_table(list);

    std::string list_2[] = {
        tables[0]->get_id_user(user->getLogin()),
        user->getUserPassword()
    }; //id_login, password

    bool flag_h_p = tables[1]->add_in_table(list_2);

    if (flag_clients == true && flag_h_p == true)
    {
        this->_current_user_login = user->getLogin();
        return true;
    }

    return false;
}

const bool Chat::get_create_DB() const
{
    return this->_dbConnect.getConnectStatus();
}


/*bool AuthorizationForm::login_and_password_comparison(std::string login, std::string h_password)
{
    std::string h_p = this->user->get_hash_Login(h_password);

    std::string value_1 = tables[0]->get_id_user(login);
    std::string value_2 = tables[1]->get_id_user(h_p);

    if (value_1 == value_2 && value_1 != "-1" && value_2 != "-1")
        return true;

    return false;
}*/
