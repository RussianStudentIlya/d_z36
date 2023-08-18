#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QMessageBox>
#include "myClassChat/chat.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //MainWindow(QWidget *parent = nullptr); - исходное
    MainWindow(std::shared_ptr<Chat> command_chat = nullptr, QWidget *parent = nullptr);
    ~MainWindow();
    //static MainWindow* createClient();
    static MainWindow* createClient(std::shared_ptr<Chat> command_chat = nullptr);

private slots:
    void on_sendMessagesButton_clicked();

    void on_closeClientButton_clicked();

    void on_messagesLineEdit_returnPressed();

private:
    Ui::MainWindow *ui;

    std::shared_ptr<Chat> command_chat;
};
#endif // MAINWINDOW_H
