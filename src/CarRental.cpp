#include "../inc/CarRental.h"
#include "../inc/CarList.h"
#include <vector>
#include <map>
using namespace std;

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

std::string Customer::getName()
{
    return (FirstName + " " + LastName);
}

int Customer::getAge()
{
    return Age;
}

void CarRental::SetCustomerDetails(Customer &p_Customer)
{
    std::string l_first, l_last;
    int l_age;
    std::cout << "Enter the first name: ";
    std::cin >> l_first;
    std::cout << "Enter the last name: ";
    std::cin >> l_last;
    std::cout << "Enter age: ";
    std::cin >> l_age;

    Customer l_Customer(l_first, l_last, l_age);
    p_Customer = l_Customer;

    customers.push_back(l_Customer);
}

void CarRental::GetCustomerDetails(Customer &p_Customer)
{
    cout << "Customer Details are:\n Name: " << p_Customer.getName() << "Age: " << p_Customer.getAge() 
        << "Car Hired: " << endl ; //getCarDetails();
}
void CarRental::GetCarList()
{
    CarData Data; 

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
void CarRental::MapData()
{
    CarData::Cars CarsData;
    CarsData.setCarData();

    map<CarData::Cars, Customer> CustomerCar; 
}
void CarRental::Welcome()
{
}
