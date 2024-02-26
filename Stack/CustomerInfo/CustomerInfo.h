#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include <QString>

class CustomerInfo
{
private:
    int m_customerID, m_customerAge;
    QString m_firstName, m_lastName, m_phoneNumber, m_phoneNumber, m_emailAddress;

public:
    CustomerInfo() : m_customerID(0), m_customerAge(0),
        m_firstName(""), m_lastName(""), m_phoneNumber(""), m_phoneNumber(""){}
    CustomerInfo(int p_customerId, const QString p_firstName, const QString p_lastName,
                 int p_customerAge, const QString p_phoneNumber, const QString p_emailAddress);
    ~CustomerInfo();

    /* Methods Declarations */
    void setCustomerID(int p_customerId) const;
    void setName(QString p_first, QString p_last) const;
    void setAge(int p_age) const;
    void setPhoneNumber(QString p_phoneNumber) const;
    void setEmailAddress(QString p_emailAddress) const;

    int getCustomerID() const;
    QString getName() const;
    int getAge() const;
    QString getPhoneNumber() const;
    QString getEmailAddress() const;
};

#endif // CUSTOMERINFO_H
