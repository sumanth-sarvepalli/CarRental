#ifndef CUSTOMERDATABASE_H
#define CUSTOMERDATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class CustomerDatabase : public QObject
{
    Q_OBJECT
public:
    static CustomerDatabase *getInstance();

    Q_INVOKABLE void addCustomer(const QString &firstName, const QString &lastName);

private:
    explicit CustomerDatabase(QObject *parent = nullptr);

    QSqlDatabase db;
};

#endif // CUSTOMERDATABASE_H
