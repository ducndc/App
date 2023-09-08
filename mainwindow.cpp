#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushLoginButton_clicked()
{
    if (ui->usernameLineEdit->text().isEmpty() || ui->passwordLineEdit->text().isEmpty())
    {
        qInfo() << "Empty user";
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("Wrong username or password!");
        msgbox->open();

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

    if ((plaintextUsernameBytes != usernameBytes) || (plaintextPasswordBytes != passwordBytes))
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("Wrong username or password!");
        msgbox->open();

        return;
    }
    else
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Notification");
        msgbox->setText("Login successfully!");
        msgbox->open();

        return;
    }

}
