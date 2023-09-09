#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login loginPage;

    loginPage.show();

    return a.exec();
}
