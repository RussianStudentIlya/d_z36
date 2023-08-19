#include "startscrean.h"
#include "ui_startscrean.h"

StartScrean::StartScrean(std::shared_ptr<Chat> command_chat, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartScrean)
{
    ui->setupUi(this);

    if(command_chat != nullptr)
    {
        QMessageBox::information(this, tr("Info"), "Connect");
        //ui->authorizationWidget->setChat(command_chat);
        //AuthorizationForm af(command_chat);
        //ui->registrationWidget->setChat(command_chat);
    }

    connect(ui->registrationWidget, &RegistrationForm::authorizationRequested, this, &StartScrean::setAuthorizationForm);
    connect(ui->registrationWidget, &RegistrationForm::accepted, this, &StartScrean::onLoggedIn);
    connect(ui->registrationWidget, &RegistrationForm::rejected, this, &StartScrean::onRejectedRequested);

    connect(ui->authorizationWidget, &AuthorizationForm::registrationRequested, this, &StartScrean::setRegistrationForm);
    connect(ui->authorizationWidget, &AuthorizationForm::accepted, this, &StartScrean::onLoggedIn);
    connect(ui->authorizationWidget, &AuthorizationForm::rejected, this, &StartScrean::onRejectedRequested);

    //ui->setupUi(this);
}

StartScrean::~StartScrean()
{
    delete ui;
}

void StartScrean::setAuthorizationForm()
{
    ui->stackedWidget->setCurrentIndex(0); // Вызываем форму AuthorizationForm
}

void StartScrean::setRegistrationForm()
{
    ui->stackedWidget->setCurrentIndex(1); // Вызываем форму setRegistrationForm
}

std::string StartScrean::get_loginCurrentUser()
{
    return this->_loginCurrentUser;
}

void StartScrean::onLoggedIn(std::string currentLogin)
{
    this->_loginCurrentUser = currentLogin;
    accept();
}

void StartScrean::onRejectedRequested()
{
    rejected();
}
