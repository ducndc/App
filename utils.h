#ifndef UTILS_H
#define UTILS_H

#include <QCryptographicHash>
#include <QString>
#include <QDebug>
#include <QMessageBox>

class Utils
{
public:
    Utils();
    int CheckPassword(QString username,QString password);
};

#endif // UTILS_H
