/*************************************************************//**
 * @file CustomerInfo.cpp
 * @author Sumanth Sarvepalli
 * @brief This file is to process the customer information
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 **************************************************************/

#include "CustomerInfo.h"

/**
 * @brief Construct a new Customer Info:: Customer Info object
 * 
 * @param p_firstName 
 * @param p_lastName 
 * @param p_customerAge 
 */
CustomerInfo::CustomerInfo(int p_customerId, const QString p_firstName, const QString p_lastName,
                           int p_customerAge, const QString p_phoneNumber, const QString p_emailAddress)
{
    int setCustomerID(p_customerId);
    setName(p_firstName, p_lastName);
    setAge(p_customerAge);
    QString setPhoneNumber(p_phoneNumber);
    QString setEmailAddress(p_emailAddress);
}

/**
 * @brief Destroy the Customer Info:: Customer Info object
 * 
 */
CustomerInfo::~CustomerInfo()
{
    m_customerID(0);
    m_customerAge(0);
    m_firstName("");
    m_lastName("");
    m_phoneNumber("");
    m_emailAddress("");
}

/**
 * @brief 
 * 
 * @param p_customerId 
 */
void CustomerInfo::setCustomerID(int p_customerId) const
{
    m_customerID = p_customerId;
}

/**
 * @brief set the Name of the customer
 * 
 * @param p_first 
 * @param p_last 
 */
void CustomerInfo::setName(QString p_first, QString p_last) const
{
    m_firstName = p_first;
    m_lastName = p_last;
}

/**
 * @brief set the Age of the customer
 * 
 * @param p_age 
 */
void CustomerInfo::setAge(int p_age) const
{
    if ((p_age >= 18) && (p_age <= 60))
    {
        m_customerAge = p_age;
    }
    else
    {
        qDebug() << "Driver's age is not in permissible limit" << std::endl;
        return;
    }
}

/**
 * @brief 
 * 
 * @param p_phoneNumber 
 */
void CustomerInfo::setPhoneNumber(QString p_phoneNumber) const
{
    m_phoneNumber = p_phoneNumber;
}

/**
 * @brief 
 * 
 * @param p_emailAddress 
 */
void CustomerInfo::setEmailAddress(QString p_emailAddress) const
{
    m_emailAddress = p_emailAddress;
}

/**
 * @brief 
 * 
 * @return int 
 */
int CustomerInfo::getCustomerID() const
{
    return m_customerID;
}

/**
 * @brief get the Name of the customer
 * 
 * @return QString
 */
QString CustomerInfo::getName() const
{
    return (m_firstName + " " + m_lastName);
}

/**
 * @brief get the Age of the customer
 * 
 * @return int 
 */
int CustomerInfo::getAge() const
{
    return m_customerAge;
}

/**
 * @brief to get the phone number of the customer
 * 
 * @return QString 
 */
QString CustomerInfo::getPhoneNumber() const
{
    return m_phoneNumber;
}

/**
 * @brief to get the email Id of the customer
 * 
 * @return QString 
 */
QString CustomerInfo::getEmailAddress() const
{
    return m_emailAddress;
}
