/* 
 * Car Rental Booking System 
 * This main file contains the 'main' function. Program execution begins and ends here.
 * Author : Sumanth Sarvepalli
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include <carrental.h>
#include "../inc/carrental.h"

int main()
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

	return 0;
}



void CarRental::GetCustomerDetails(Customer &p_customer)
{
	std::string f , l;
	std::cout << "\n\t\t\t\t Customer details\n\n ";
	std::cout << "Please enter your first name : ";
	std::cin >> f;
	std::cout << "please enter your second name: ";
	std::cin >> l;
	p_customer.setName(f,l);
	std::cout << std::endl << std::endl;

	std::cout << "customer details are: "<< p_customer.getName() << std::endl;
}
