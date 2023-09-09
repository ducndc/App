#include "signuppage.h"
#include "ui_signuppage.h"

SignupPage::SignupPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignupPage)
{
    ui->setupUi(this);
}

SignupPage::~SignupPage()
{
    delete ui;
}

void SignupPage::on_pushSignupButton_clicked()
{
    if (ui->usernameLineEdit->text().isEmpty() || ui->passwordLineEdit->text().isEmpty())
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("Wrong username or password!");
        msgbox->open();

        return;
    }

    if (ui->passwordLineEdit->text() != ui->confirmPasswordLineEdit->text())
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("The password is not match!");
        msgbox->open();

        return;
    }
}

