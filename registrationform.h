#ifndef REGISTRATIONFORM_H
#define REGISTRATIONFORM_H

#include <QWidget>
#include "myClassChat/chat.h"
#include <QMessageBox>

namespace Ui {
class RegistrationForm;
}

class RegistrationForm : public QWidget
{
    Q_OBJECT

public:
    explicit RegistrationForm(QWidget *parent = nullptr);
    ~RegistrationForm();

    void setChat(std::shared_ptr<Chat> chat);

    //bool check_exists_login(std::string login); // проверка существования логина

    //bool check_exists_password(std::string h_password);

signals:
    void authorizationRequested();
    void accepted(std::string currentNameUser);
    void rejected();

private slots:
    void on_LoginButton_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_NameEdit_returnPressed();

private:
    Ui::RegistrationForm *ui;

    std::shared_ptr<Chat> command_chat;

    /*mySQL_db _dbConnect;

    iTables* tables[3];

    bool _chatStart;

    bool _userExist;

    std::string _current_user_login;

    User *user;
    Message *messag;*/
};

#endif // REGISTRATIONFORM_H
