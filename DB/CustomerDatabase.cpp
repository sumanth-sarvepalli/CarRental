#include "CustomerDatabase.h"

CustomerDatabase::CustomerDatabase(QObject *parent)
    : QObject(parent)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("customers.db");
    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
    } else {
        qDebug() << "Database: connection ok";
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS customers (id INTEGER PRIMARY KEY, firstName TEXT, lastName TEXT)");
}

CustomerDatabase *CustomerDatabase::getInstance()
{
    static CustomerDatabase customerDatabaseObj;
    return &customerDatabaseObj;
}

void CustomerDatabase::addCustomer(const QString &firstName, const QString &lastName) {
    QSqlQuery query;
    query.prepare("INSERT INTO customers (firstName, lastName) VALUES (:firstName, :lastName)");
    query.bindValue(":firstName", firstName);
    query.bindValue(":lastName", lastName);
    if (!query.exec()) {
        qDebug() << "addCustomer error:" << query.lastError();
    }
}
