/********************************************************************************
** Form generated from reading UI file 'startscrean.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREAN_H
#define UI_STARTSCREAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include "authorizationform.h"
#include "registrationform.h"

QT_BEGIN_NAMESPACE

class Ui_StartScrean
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    AuthorizationForm *authorizationWidget;
    RegistrationForm *registrationWidget;

    void setupUi(QDialog *StartScrean)
    {
        if (StartScrean->objectName().isEmpty())
            StartScrean->setObjectName("StartScrean");
        StartScrean->resize(400, 300);
        verticalLayout = new QVBoxLayout(StartScrean);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(StartScrean);
        stackedWidget->setObjectName("stackedWidget");
        authorizationWidget = new AuthorizationForm();
        authorizationWidget->setObjectName("authorizationWidget");
        stackedWidget->addWidget(authorizationWidget);
        registrationWidget = new RegistrationForm();
        registrationWidget->setObjectName("registrationWidget");
        stackedWidget->addWidget(registrationWidget);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(StartScrean);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StartScrean);
    } // setupUi

    void retranslateUi(QDialog *StartScrean)
    {
        StartScrean->setWindowTitle(QCoreApplication::translate("StartScrean", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScrean: public Ui_StartScrean {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREAN_H
