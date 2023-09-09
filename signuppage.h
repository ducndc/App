#ifndef SIGNUPPAGE_H
#define SIGNUPPAGE_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QCryptographicHash>
#include <QString>

namespace Ui {
class SignupPage;
}

class SignupPage : public QWidget
{
    Q_OBJECT

public:
    explicit SignupPage(QWidget *parent = nullptr);
    ~SignupPage();

private slots:
    void on_pushSignupButton_clicked();

private:
    Ui::SignupPage *ui;
};

#endif // SIGNUPPAGE_H
