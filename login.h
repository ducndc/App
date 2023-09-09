#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QString>

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushLoginButton_clicked();

    void on_pushSignUpButton_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
