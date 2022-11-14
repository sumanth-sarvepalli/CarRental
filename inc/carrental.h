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
		Customer(): FirstName(""), LastName(""), Age(0) {};
		Customer(std::string p_first, std::string p_last, int p_age);
		~Customer(){};

		// Function Declarations
		void setName(std::string p_first, std::string p_last);
		void setAge(int p_age);
		std::string getName();
};

class Cars
{
private:
	string company, model, type;
	int num, engine;
	float fuel;
public:
	Cars(): company(""), model(""), type(""), num(0), engine(0), fuel(0) {};
	~Cars();
};

class CarRental
{
	public:
		int i, id;
		double tp, bill, tot;
		Cars car;

		CarRental(): id(0){};
		~CarRental(){};
		
		// Function Declarations
		void GetCustomerDetails(Customer &p_Customer);
		void GetCarList();
		void GetTimePeriod();
		void GenerateInvoice();
		void GenerateList();
		void Display();
		void Welcome();		
};
CarRental g_CarRentalObj;


/*
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
