#ifndef _CARRENTAL_H_
#define _CARRENTAL_H_
#include <iostream>
#include <string>
using namespace std;
#ifdef _WIN32
#include <conio.h>
#include <Windows.h>
#define CLEAR system("CLS")
#else
#include <unistd.h>
#define CLEAR system("clear")
#endif


#define yes TRUE
#define no TRUE

#define BUFF 100



class Customer
{
	private:
		std::string FirstName, LastName;
		int Age;

	public:
		Customer(std::string p_first, std::string p_last, int p_age);
		~Customer(){
		};
		void setName(std::string p_first, std::string p_last);
		void setAge(int p_age);
		std::string getName();
};

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
	if ((p_age >= 18) && (p_age <= 65)) {
      Age = p_age;
    }
    else {
      std::cout << "Drivers age is not in permissible limit" << std::endl;
      return;
    }
	
}

std::string Customer::getName()
{
	return (FirstName + " " + LastName);
}


class CarRental
{
	public:
		int i, id;
		double tp, bill, tot;
		
		CarRental(){
			id  = 0;
		};
		~CarRental(){
		};
		
		// Function Declarations
		void GetCustomerDetails(Customer &p_Customer);
		void GetCarList();
		void GetTimePeriod();
		void GenerateInvoice();
		void generate_list();
		void display();
		void welcome();
		
};
CarRental g_CarRentalObj;
/*
class cars
{
private:
	string company, model, type;
	int num, engine;
	float fuel;
public:
	cars()
	{

	}

	~cars();
};

cars car;

template <typename L>

L GenList(L x)
{
	return x;
}

class Node {


};

string names[100];
string models[100];
int tps[100];

*/

#endif // _CARRENTAL_H_
