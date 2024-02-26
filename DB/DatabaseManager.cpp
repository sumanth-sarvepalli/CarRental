/*************************************************************//**
 * @file DatabaseManager.cpp
 * @author Sumanth Sarvepalli
 * @brief Accessing Database with Objects
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 **************************************************************/

#include <QCoreApplication>
#include "DatabaseManager.h"

/**
 * @brief Construct a new Database Manager:: Database Manager object
 * 
 * @param path 
 */
DatabaseManager::DatabaseManager()
{
    // Create a SQLite database connection
    path = QCoreApplication::applicationDirPath() + "/CarRentalDB.db";
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);
}

/**
 * @brief Interface to open the database connection
 * 
 * @return true or false
 */
bool DatabaseManager::openDatabase()
{
    if (db.open())
    {
        qDebug() << "Database: connection established successfully!";
        return true;
    }
    else
    {
        qDebug() << "Error: opening database failed: " << db.lastError().text();
        return false;
    }
}

/**
 * @brief Interface to close the database connection
 * 
 * @return true or false
 */
bool DatabaseManager::closeDatabase()
{
    m_db.close();
    m_db.removeDatabase(QSqlDatabase::defaultConnection);
}

/**
 * @brief Interface to insert customer data into the database
 * 
 * @param customer 
 * @return true or false
 */
bool DatabaseManager::insertCustomer(const CustomerInfo &customer)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Customer (CustomerID, FirstName, LastName, PhoneNumber, EmailAddress) "
                  "VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(customer.getCustomerID());
    query.addBindValue(customer.getFirstName());
    query.addBindValue(customer.getLastName());
    query.addBindValue(customer.getPhoneNumber());
    query.addBindValue(customer.getEmailAddress());

    return query.exec();
}

/**
 * @brief Interface to insert customer data into the database
 * 
 * @param customer 
 * @return true or false
 */
bool DatabaseManager::updateCustomer(const CustomerInfo &customer)
{

}

/**
 * @brief Interface to insert customer data into the database
 * 
 * @param customer 
 * @return true or false
 */
bool DatabaseManager::retrieveCustomer(const CustomerInfo &customer)
{

}

/**
 * @brief Interface to insert customer data into the database
 * 
 * @param customer 
 * @return true or false
 */
bool DatabaseManager::deleteCustomer(const CustomerInfo &customer)
{

}
