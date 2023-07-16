/************************************************************************************//*!
 * Car Rental Booking System
 * This main file contains the 'main' function. Program execution begins and ends here.
 * Author : Sumanth Sarvepalli
 **************************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "../inc/CarRentalManger.h"
#include "../inc/CarList.h"
#include <vector>
#include <map>
using namespace std;


void startApp()
{

    Customer l_customer;

    while(1)
    {
        std::string ch;
        int choice;
        std::cout << "Hello! Welcome to Car Rental App";
        //display(); change to //welcome();

    select_opt:
        std::cout << "1.Enter new booking\n2.Generate list of customers"
                     "\n3.Exit application\nchoose: ";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "in 1\n";
            g_CarRentalObj.GetCustomerDetails(l_customer);
            //g_CarRentalObj.GetCarList();
            //g_CarRentalObj.GetTimePeriod();
            //g_CarRentalObj.GenerateInvoice();
            //car_list();
            //period_bill();
            //invoice();
            //goto car_rental;
            break;
        case 2:
            //generate_list(); // read from the file
            std::cout << "in 2";

            break;
        case 3:
            CLEAR;
        yesno:
            std::cout << "Are you sure you want to quit?(yes/no) ";
            std::cin >> ch;
            if (ch == "yes")
            {
                exit(0);
            }
            else if (ch == "no")
            {
                //system("CLS");
                CLEAR;
                goto select_opt;
            }
            else
            {
                std::cout << "\n\nplease type yes or no\n\n";
                goto yesno;
            }
            break;
        default:
            std::cout << "\n\nInvalid option\n\n";

        }
        CLEAR;
    }

    return;
}

/*************************************************************//*!
 * \brief CarRentalManager::getInstance
 * \author Sumanth Sarvepalli
 * \return CarRentalManager Obj address
 *************************************************************/
CarRentalManager *CarRentalManager::getInstance()
{
    static CarRentalManager CarRentalManagerObj;
    return &CarRentalManagerObj;
}

/*************************************************************//*!
 * \brief CarRentalManager::GetCustomerDetails
 * \param p_customer
 * \author Sumanth Sarvepalli
 * \return none
 **************************************************************/
//void CarRentalManager::GetCustomerDetails(Customer &p_customer)
//{
//    std::string f , l;
//    std::cout << "\n\t\t\t\t Customer details\n\n ";
//    std::cout << "Please enter your first name : ";
//    std::cin >> f;
//    std::cout << "please enter your second name: ";
//    std::cin >> l;
//    p_customer.setName(f,l);
//    std::cout << std::endl << std::endl;

//    std::cout << "customer details are: "<< p_customer.getName() << std::endl;
//}

//void CarRentalManager::SetCustomerDetails()
//{
//    std::string l_first, l_last;
//    int l_age;
//    std::cout << "Enter the first name: ";
//    std::cin >> l_first;
//    std::cout << "Enter the last name: ";
//    std::cin >> l_last;
//    std::cout << "Enter age: ";
//    std::cin >> l_age;

//    Customer l_Customer(l_first, l_last, l_age);
//    p_Customer = l_Customer;

//    customers.push_back(l_Customer);
//}

void CarRentalManager::GetCustomerDetails(Customer &p_Customer)
{
    cout << "Customer Details are:\n Name: " << p_Customer.getName() << "Age: " << p_Customer.getAge() 
        << "Car Hired: " << endl ; //getCarDetails();
}
void CarRentalManager::GetCarList()
{
    CarData Data; 

}
void CarRentalManager::GetTimePeriod()
{
}
void CarRentalManager::GenerateInvoice()
{
}
void CarRentalManager::GenerateList()
{
}
void CarRentalManager::MapData()
{
    CarData::Cars CarsData;
    CarsData.setCarData();

    map<CarData::Cars, Customer> CustomerCar; 
}
void CarRentalManager::Welcome()
{
}
