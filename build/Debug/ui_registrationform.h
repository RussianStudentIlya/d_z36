/********************************************************************************
** Form generated from reading UI file 'registrationform.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONFORM_H
#define UI_REGISTRATIONFORM_H

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

class Ui_RegistrationForm
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *SurnameEdit;
    QLabel *SurnameFlag;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *NameEdit;
    QLabel *NameFlag;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *PatronymicEdit;
    QLabel *PatronymicFlag;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *EmailEdit;
    QLabel *EmailFlag;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *LoginEdit;
    QLabel *LoginFlag;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *PasswordEdit;
    QLabel *PasswordFlag;
    QHBoxLayout *horizontalLayout_7;
    QDialogButtonBox *buttonBox;
    QPushButton *LoginButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RegistrationForm)
    {
        if (RegistrationForm->objectName().isEmpty())
            RegistrationForm->setObjectName("RegistrationForm");
        RegistrationForm->resize(527, 266);
        RegistrationForm->setMinimumSize(QSize(527, 0));
        gridLayout = new QGridLayout(RegistrationForm);
        gridLayout->setObjectName("gridLayout");
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        label = new QLabel(RegistrationForm);
        label->setObjectName("label");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(RegistrationForm);
        label_2->setObjectName("label_2");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(RegistrationForm);
        label_3->setObjectName("label_3");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(RegistrationForm);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(RegistrationForm);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(RegistrationForm);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        SurnameEdit = new QLineEdit(RegistrationForm);
        SurnameEdit->setObjectName("SurnameEdit");

        horizontalLayout->addWidget(SurnameEdit);

        SurnameFlag = new QLabel(RegistrationForm);
        SurnameFlag->setObjectName("SurnameFlag");
        SurnameFlag->setMinimumSize(QSize(51, 0));

        horizontalLayout->addWidget(SurnameFlag);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        NameEdit = new QLineEdit(RegistrationForm);
        NameEdit->setObjectName("NameEdit");

        horizontalLayout_2->addWidget(NameEdit);

        NameFlag = new QLabel(RegistrationForm);
        NameFlag->setObjectName("NameFlag");
        NameFlag->setMinimumSize(QSize(51, 0));

        horizontalLayout_2->addWidget(NameFlag);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        PatronymicEdit = new QLineEdit(RegistrationForm);
        PatronymicEdit->setObjectName("PatronymicEdit");

        horizontalLayout_3->addWidget(PatronymicEdit);

        PatronymicFlag = new QLabel(RegistrationForm);
        PatronymicFlag->setObjectName("PatronymicFlag");
        PatronymicFlag->setMinimumSize(QSize(51, 0));

        horizontalLayout_3->addWidget(PatronymicFlag);


        formLayout_2->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        EmailEdit = new QLineEdit(RegistrationForm);
        EmailEdit->setObjectName("EmailEdit");

        horizontalLayout_4->addWidget(EmailEdit);

        EmailFlag = new QLabel(RegistrationForm);
        EmailFlag->setObjectName("EmailFlag");
        EmailFlag->setMinimumSize(QSize(51, 0));

        horizontalLayout_4->addWidget(EmailFlag);


        formLayout_2->setLayout(3, QFormLayout::FieldRole, horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        LoginEdit = new QLineEdit(RegistrationForm);
        LoginEdit->setObjectName("LoginEdit");

        horizontalLayout_5->addWidget(LoginEdit);

        LoginFlag = new QLabel(RegistrationForm);
        LoginFlag->setObjectName("LoginFlag");
        LoginFlag->setMinimumSize(QSize(51, 0));

        horizontalLayout_5->addWidget(LoginFlag);


        formLayout_2->setLayout(4, QFormLayout::FieldRole, horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        PasswordEdit = new QLineEdit(RegistrationForm);
        PasswordEdit->setObjectName("PasswordEdit");
        PasswordEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(PasswordEdit);

        PasswordFlag = new QLabel(RegistrationForm);
        PasswordFlag->setObjectName("PasswordFlag");
        PasswordFlag->setMinimumSize(QSize(51, 0));

        horizontalLayout_6->addWidget(PasswordFlag);


        formLayout_2->setLayout(5, QFormLayout::FieldRole, horizontalLayout_6);


        gridLayout->addLayout(formLayout_2, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        buttonBox = new QDialogButtonBox(RegistrationForm);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_7->addWidget(buttonBox);

        LoginButton = new QPushButton(RegistrationForm);
        LoginButton->setObjectName("LoginButton");

        horizontalLayout_7->addWidget(LoginButton);


        gridLayout->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        QWidget::setTabOrder(SurnameEdit, NameEdit);
        QWidget::setTabOrder(NameEdit, PatronymicEdit);
        QWidget::setTabOrder(PatronymicEdit, EmailEdit);
        QWidget::setTabOrder(EmailEdit, LoginEdit);
        QWidget::setTabOrder(LoginEdit, PasswordEdit);
        QWidget::setTabOrder(PasswordEdit, LoginButton);

        retranslateUi(RegistrationForm);

        QMetaObject::connectSlotsByName(RegistrationForm);
    } // setupUi

    void retranslateUi(QWidget *RegistrationForm)
    {
        RegistrationForm->setWindowTitle(QCoreApplication::translate("RegistrationForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("RegistrationForm", "Surname: ", nullptr));
        label_2->setText(QCoreApplication::translate("RegistrationForm", "Name: ", nullptr));
        label_3->setText(QCoreApplication::translate("RegistrationForm", "Patronymic: ", nullptr));
        label_4->setText(QCoreApplication::translate("RegistrationForm", "Email: ", nullptr));
        label_5->setText(QCoreApplication::translate("RegistrationForm", "Login: ", nullptr));
        label_6->setText(QCoreApplication::translate("RegistrationForm", "Password: ", nullptr));
        SurnameFlag->setText(QString());
        NameFlag->setText(QString());
        PatronymicFlag->setText(QString());
        EmailFlag->setText(QString());
        LoginFlag->setText(QString());
        PasswordFlag->setText(QString());
        LoginButton->setText(QCoreApplication::translate("RegistrationForm", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationForm: public Ui_RegistrationForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONFORM_H
