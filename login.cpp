#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include "utils.h"
#include "signuppage.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushLoginButton_clicked()
{
    Utils *utils = new Utils();

    if (ui->usernameLineEdit->text().isEmpty() || ui->passwordLineEdit->text().isEmpty())
    {
        qInfo() << "Empty user";
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("Wrong username or password!");
        msgbox->open();
        delete utils;

        return;
    }

    QString plaintextUsername = "ducndc";
    QByteArray plaintextUsernameBytes = QCryptographicHash::hash(plaintextUsername.toUtf8(), QCryptographicHash::Sha256);

    QString plaintextPassword = "123456a@";
    QByteArray plaintextPasswordBytes = QCryptographicHash::hash(plaintextPassword.toUtf8(), QCryptographicHash::Sha256);

    QString username = ui->usernameLineEdit->text();
    QByteArray usernameBytes = QCryptographicHash::hash(username.toUtf8(), QCryptographicHash::Sha256);
    QString password = ui->passwordLineEdit->text();
    QByteArray passwordBytes = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);

    if (-1 == utils->CheckPassword(username, password))
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("Wrong username or password!");
        msgbox->open();
        delete utils;

        return;
    }
    else
    {
        this->close();
        MainWindow *w = new MainWindow();
        w->show();
        delete utils;

        return;
    }
}


void Login::on_pushSignUpButton_clicked()
{
    this->close();
    SignupPage *signupPage = new SignupPage();
    signupPage->show();
}

