#ifndef STARTSCREAN_H
#define STARTSCREAN_H

#include <QDialog>
#include <QMessageBox>
#include "myClassChat/chat.h"

namespace Ui {
class StartScrean;
}

class StartScrean : public QDialog
{
    Q_OBJECT

public:
    explicit StartScrean(std::shared_ptr<Chat> command_chat, QWidget *parent = nullptr);
    ~StartScrean();

    void setAuthorizationForm();
    void setRegistrationForm();

    std::string get_loginCurrentUser();

public slots:
    void onLoggedIn(std::string currentLogin);
    void onRejectedRequested();

private:
    Ui::StartScrean *ui;
    std::string _loginCurrentUser;

    std::shared_ptr<Chat> command_chat;
};

#endif // STARTSCREAN_H
