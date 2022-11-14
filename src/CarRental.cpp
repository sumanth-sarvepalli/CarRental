#include "../inc/carrental.h"

Customer::Customer(std::string p_first, std::string p_last, int p_age)
{
    setName(p_first, p_last);
    setAge(p_age);
}

void Customer::setName(std::string p_first, std::string p_last)
{
    FirstName = p_first;
    LastName = p_last;
}

void Customer::setAge(int p_age)
{
    if ((p_age >= 18) && (p_age <= 65))
    {
        Age = p_age;
    }
    else
    {
        std::cout << "Drivers age is not in permissible limit" << std::endl;
        return;
    }
}

std::string Customer::getName()
{
    return (FirstName + " " + LastName);
}

void CarRental::GetCustomerDetails(Customer &p_Customer)
{
}
void CarRental::GetCarList()
{
}
void CarRental::GetTimePeriod()
{
}
void CarRental::GenerateInvoice()
{
}
void CarRental::GenerateList()
{
}
void CarRental::Display()
{
}
void CarRental::Welcome()
{
}