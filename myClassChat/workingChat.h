#ifndef WORKINGCHAT_H
#define WORKINGCHAT_H

#include "myClassChat/mySQL_db.h"
#include "myClassChat/iTables.h"
#include "myClassChat/db_Table.h"
#include "myClassChat/User.h"
#include <memory>

using std::string;
using std::unique_ptr;

class workingChat
{
public:
    workingChat(mySQL_db &dbConnect, char &mode);
    workingChat();
    //~workingChat() = default;

    void startChat(); // Запуск чата (проверяет создана ли таблица, если таблица не создана создает её)

    const bool get_ChatStart() const; // Чтение флага который показывает статус чата(старт/стоп)

    const string getConnectDB() const;

private:
    mySQL_db _dbConnect;
    iTables* tables[3];
    bool _chatStart;
    bool _userExist; //Пользователь зарегестрирован или уже существует
    string _current_user_login; //текущий логин пользователя
    char _mode;

    //User *users;
};

#endif // WORKINGCHAT_H
