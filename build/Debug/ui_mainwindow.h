/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCurrentClient;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QLineEdit *messagesLineEdit;
    QPushButton *sendMessagesButton;
    QPushButton *closeClientButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(821, 347);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelCurrentClient = new QLabel(centralwidget);
        labelCurrentClient->setObjectName("labelCurrentClient");
        labelCurrentClient->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(labelCurrentClient);

        horizontalSpacer = new QSpacerItem(45, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        messagesLineEdit = new QLineEdit(centralwidget);
        messagesLineEdit->setObjectName("messagesLineEdit");
        messagesLineEdit->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(messagesLineEdit);

        sendMessagesButton = new QPushButton(centralwidget);
        sendMessagesButton->setObjectName("sendMessagesButton");
        sendMessagesButton->setMinimumSize(QSize(125, 0));

        horizontalLayout->addWidget(sendMessagesButton);

        closeClientButton = new QPushButton(centralwidget);
        closeClientButton->setObjectName("closeClientButton");

        horizontalLayout->addWidget(closeClientButton);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 821, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelCurrentClient->setText(QCoreApplication::translate("MainWindow", "Current_Client", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "You messages: ", nullptr));
        sendMessagesButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        closeClientButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
