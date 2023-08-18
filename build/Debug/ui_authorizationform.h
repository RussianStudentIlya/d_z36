/********************************************************************************
** Form generated from reading UI file 'authorizationform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONFORM_H
#define UI_AUTHORIZATIONFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthorizationForm
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *RegistrationButton;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *LoginEdit;
    QLineEdit *PasswordEdit;
    QSpacerItem *verticalSpacer;
    QLabel *statusConnectLabel;

    void setupUi(QWidget *AuthorizationForm)
    {
        if (AuthorizationForm->objectName().isEmpty())
            AuthorizationForm->setObjectName("AuthorizationForm");
        AuthorizationForm->resize(415, 153);
        AuthorizationForm->setMinimumSize(QSize(415, 153));
        gridLayout = new QGridLayout(AuthorizationForm);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        buttonBox = new QDialogButtonBox(AuthorizationForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        RegistrationButton = new QPushButton(AuthorizationForm);
        RegistrationButton->setObjectName("RegistrationButton");

        horizontalLayout->addWidget(RegistrationButton);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(AuthorizationForm);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(AuthorizationForm);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        LoginEdit = new QLineEdit(AuthorizationForm);
        LoginEdit->setObjectName("LoginEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, LoginEdit);

        PasswordEdit = new QLineEdit(AuthorizationForm);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, PasswordEdit);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        statusConnectLabel = new QLabel(AuthorizationForm);
        statusConnectLabel->setObjectName("statusConnectLabel");

        gridLayout->addWidget(statusConnectLabel, 0, 0, 1, 1);

        QWidget::setTabOrder(LoginEdit, PasswordEdit);
        QWidget::setTabOrder(PasswordEdit, RegistrationButton);

        retranslateUi(AuthorizationForm);

        QMetaObject::connectSlotsByName(AuthorizationForm);
    } // setupUi

    void retranslateUi(QWidget *AuthorizationForm)
    {
        AuthorizationForm->setWindowTitle(QCoreApplication::translate("AuthorizationForm", "Form", nullptr));
        RegistrationButton->setText(QCoreApplication::translate("AuthorizationForm", "Registration", nullptr));
        label->setText(QCoreApplication::translate("AuthorizationForm", "Login:  ", nullptr));
        label_2->setText(QCoreApplication::translate("AuthorizationForm", "Password: ", nullptr));
        statusConnectLabel->setText(QCoreApplication::translate("AuthorizationForm", "StatusConnectToServer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationForm: public Ui_AuthorizationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONFORM_H
