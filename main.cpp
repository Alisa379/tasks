#include <QCoreApplication>
#include <QtNetwork>
#include <QtSql>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTcpSocket q1;
    QSqlQuery q2;

    return a.exec();

}
