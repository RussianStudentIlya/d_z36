#ifndef AUTHORIZATIONFORM_H
#define AUTHORIZATIONFORM_H

#include <QWidget>
#include <QMessageBox>
#include <fstream>
#include "myClassChat/chat.h"

namespace Ui {
class AuthorizationForm;
}

class AuthorizationForm : public QWidget
{
    Q_OBJECT

public:
    explicit AuthorizationForm(std::shared_ptr<Chat> chat = nullptr, QWidget *parent = nullptr);
    ~AuthorizationForm();

    //bool login_and_password_comparison(std::string login, std::string h_password);

   //template <typename T> std::vector<T> get_config_file(const std::string fileName); // Считывание конфигурационного файла

    //void setChat(std::shared_ptr<Chat> chat);

signals:
    void registrationRequested();
    void accepted(std::string currentNameUser);
    void rejected();

private slots:
    void on_RegistrationButton_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AuthorizationForm *ui;
    /*mySQL_db _dbConnect;

    iTables* tables[3];

    bool _chatStart;

    bool _userExist;

    std::string _current_user_login;

    User *user;
    Message *messag;*/

    std::shared_ptr<Chat> command_chat;

};

#endif // AUTHORIZATIONFORM_H
