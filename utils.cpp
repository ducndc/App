#include "utils.h"

Utils::Utils()
{

}

int Utils::CheckPassword(QString username,QString password)
{
    QString plaintextUsername = "ducndc";
    QByteArray plaintextUsernameBytes = QCryptographicHash::hash(plaintextUsername.toUtf8(), QCryptographicHash::Sha256);

    QString plaintextPassword = "123456a@";
    QByteArray plaintextPasswordBytes = QCryptographicHash::hash(plaintextPassword.toUtf8(), QCryptographicHash::Sha256);

    QByteArray usernameBytes = QCryptographicHash::hash(username.toUtf8(), QCryptographicHash::Sha256);
    QByteArray passwordBytes = QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Sha256);

    if ((plaintextUsernameBytes != usernameBytes) || (plaintextPasswordBytes != passwordBytes))
    {
        return -1;
    }
    else
    {
        return 0;
    }

}
