#ifndef _CARRENTAL_H_
#define _CARRENTAL_H_

#include <iostream>
#include <vector>

#ifdef _WIN32
#include <conio.h>
#include <Windows.h>
#define CLEAR system("CLS")
#else
#include <unistd.h>
#define CLEAR system("clear")
#endif // _WIN32

class Customer
{
private:
	std::string FirstName, LastName;
	int Age;

public:
	Customer() : FirstName(""), LastName(""), Age(0){};
	Customer(std::string p_first, std::string p_last, int p_age);
	~Customer(){};

	// Function Declarations
	void setName(std::string p_first, std::string p_last);
	void setAge(int p_age);
	std::string getName();
	int getAge();
};

class CarRental
{
public:
	int i, id;
	double tp, bill, tot;
	 // store all customers into a vector or list
    std::vector<Customer> customers; 

	CarRental() : id(0){};
	~CarRental(){};

	// Function Declarations
	void SetCustomerDetails(Customer &p_Customer);
	void GetCustomerDetails(Customer &p_Customer);
	void GetCarList();
	void GetTimePeriod();
	void GenerateInvoice();
	void GenerateList();
	void MapData();
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
