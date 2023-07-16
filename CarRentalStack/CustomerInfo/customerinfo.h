#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

class CustomerInfo
{
    Q_OBJECT
private:
    std::string FirstName, LastName;
    int Age;

public:
    CustomerInfo() : FirstName(""), LastName(""), Age(0){}
    CustomerInfo(QString p_first, std::string p_last, int p_age);
    ~CustomerInfo(){}

    // Function Declarations
    void setName(std::string p_first, std::string p_last);
    void setAge(int p_age);
    std::string getName();
    int getAge();
};

#endif // CUSTOMERINFO_H
