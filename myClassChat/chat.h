#ifndef CHAT_H
#define CHAT_H

#include "iTables.h"
#include "mySQL_db.h"
#include "db_Table.h"
#include "User.h"
#include "Message.h"
#include <memory>
#include <QDebug>

using std::string;

class Chat
{
public:
    Chat(string &host, string &user, string &password, string &dbName, char mode);
    Chat() = default;
    //~Chat() = default;
    ~Chat();

    void startChat(); // Запуск чата (проверяет создана ли таблица, если таблица не создана создает её)

    const bool get_ChatStart() const;

    const string get_db_Name() const;

    //void checking_user_existence(string login, string password); // Проверка существования пользователя

    const bool get_UserExist() const;

    bool login_and_password_comparison(string login, string h_password);

    bool checking_login_existence(string login); // Проверка существования логина в БД

    bool checking_password_existence(string h_password); // Проверка существования пароля

    bool user_Registration(string user_list[]);
    const bool get_create_DB() const; // получает статус БД создана или нет

private:
    mySQL_db _dbConnect;
    iTables* tables[3];

    bool _chatStart;
    bool _userExist;
    string _current_user_login;

    //std::unique_ptr<User> user;
    //std::unique_ptr<Message> messag;
    User *user;
    Message *messag;

    string _host_db;
    string _user_db;
    string _password_db;
    //std::string password = list[2];
    string db_name;
    //std::string dbName = list[3];

    char mode_client_or_server; // client - c; server - s

public:
};

#endif // CHAT_H
