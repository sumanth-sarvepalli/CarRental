/*************************************************************//**
 * @file DatabaseManager.h
 * @author Sumanth Sarvepalli
 * @brief Header for accessing DB with Objects, implementing Data Access Object (DAO) pattern
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 **************************************************************/

#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

#include "../Stack/CustomerInfo/CustomerInfo.h"
#include "../Stack/CarList/CarList.h"

class DatabaseManager {
public:
    DatabaseManager();
    bool openDatabase();
    bool closeDatabase();

    /* CustomerInfo Methods */
    bool insertCustomer(const CustomerInfo& customer);
    bool updateCustomer(const CustomerInfo& customer);
    bool retrieveCustomer(const CustomerInfo& customer);
    bool deleteCustomer(const CustomerInfo& customer);

    /* CarList Methods */


private:
    QSqlDatabase m_db;
};

#endif // DATABASEMANAGER_H
