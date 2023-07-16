#include "customerinfo.h"

CustomerInfo::CustomerInfo()
{

}

CustomerInfo::CustomerInfo(std::string p_first, std::string p_last, int p_age)
{
    setName(p_first, p_last);
    setAge(p_age);
}

void CustomerInfo::setName(std::string p_first, std::string p_last)
{
    FirstName = p_first;
    LastName = p_last;
}

void CustomerInfo::setAge(int p_age)
{
    if ((p_age >= 18) && (p_age <= 60))
    {
        Age = p_age;
    }
    else
    {
        std::cout << "Drivers age is not in permissible limit" << std::endl;
        return;
    }
}

std::string CustomerInfo::getName()
{
    return (FirstName + " " + LastName);
}

int CustomerInfo::getAge()
{
    return Age;
}
