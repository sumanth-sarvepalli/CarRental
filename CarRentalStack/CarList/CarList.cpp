#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "CarList.h"

using namespace std;

void CarData::readCarList()
{
	char *buff = new char;
	string Cars;
	FILE *fp;

	fp = fopen("Cars.txt", "r");

	if (NULL == fp)
	{
		perror("fopen");
		exit(1);
	}

	while (fgets(buff, sizeof(buff), fp) != NULL)
	{
		Cars += buff;
	}
	fclose(fp);
	cout << endl;

	int opt;
	char model_opt;
	// map<string, CarData> CarMap;

	std::cout << "\n\n\t\t\t\t List of cars available\n";
	std::cout << "\t\t\t\t **********************\n";

	std::cout << "select the car from the list\n\n";
	// std::cout << Cars;

	size_t pos = 0;
	std::string token;
	while ((pos = Cars.find("\n")) != std::string::npos)
	{
		token = Cars.substr(0, pos);
		std::cout << token << std::endl;
		//    s.erase(0, pos + delimiter.length());
	}
	std::cout << "Choose your option: ";
	std::cin >> opt;
	std::cout << std::endl
			  << std::endl;

#if 0
cars:
	// std::cout << "\t\t1.SUZUKI\n\t\t2.HYUNDAI\n\t\t3.HONDA\n\t\t4.RENAULT\n\t\t5.FORD\n\n";
	std::cout << "Enter your option: ";
	std::cin >> opt;
	std::cout << std::endl
			  << std::endl;

	switch (opt)
	{
	case 1:
		car.company = "SUZUKI";
		std::cout << car.company << endl
				  << endl;
		std::cout << "\ta)Marurti\t\tb)Baleno\t\t" << endl
				  << endl;

	carmodel1:
		std::cout << "choose a model: ";
		std::cin >> model_opt;

		if (model_opt == 'a')
		{
			car.model = "Maruti";
			car.fuel = 28;
			car.engine = 796;
		}
		else if (model_opt == 'b')
		{
			car.model = "Baleno";
			car.fuel = 37;
			car.engine = 1248;
		}
		else
		{
			std::cout << endl
					  << "Invalid option, please choose model! Enter a or b \n"
					  << endl;
			goto carmodel1;
		}
		break;
	case 2:
		car.company = "HYUNDAI";
		std::cout << car.company << endl
				  << endl;
		std::cout << "\ta)i10\t\ti20\t\t" << endl
				  << endl;
	carmodel2:
		std::cout << "choose a model: ";
		std::cin >> model_opt;
		if (model_opt == 'a')
		{
			car.model = "i10";
			car.fuel = 43;
			car.engine = 1197;
		}
		else if (model_opt == 'b')
		{
			car.model = "i20";
			car.fuel = 40;
			car.engine = 1197;
		}
		else
		{
			std::cout << endl
					  << "Invalid option, please choose model! Enter a or b " << endl
					  << endl;
			goto carmodel2;
		}
		break;
	case 3:
		car.company = "HONDA";
		std::cout << car.company << endl
				  << endl;
		std::cout << "\ta)Jazz\t\tb)Amaze\t\t" << endl
				  << endl;
	carmodel3:
		std::cout << "choose a model: ";
		std::cin >> model_opt;
		if (model_opt == 'a')
		{
			car.model = "Jazz";
			car.fuel = 40;
			car.engine = 1498;
		}
		else if (model_opt == 'b')
		{
			car.model = "Amaze";
			car.fuel = 35;
			car.engine = 1498;
		}
		else
		{
			std::cout << endl
					  << "Invalid option, please choose model! Enter a or b " << endl
					  << endl;
			goto carmodel3;
		}
		break;
	case 4:
		car.company = "RENAULT";
		std::cout << car.company << endl
				  << endl;
		std::cout << "\ta)Kwid\t\tb)Pulse\t\t" << endl
				  << endl;
	carmodel4:
		std::cout << "choose a model: ";
		std::cin >> model_opt;
		if (model_opt == 'a')
		{
			car.model = "Kwid";
			car.fuel = 28;
			car.engine = 999;
		}
		else if (model_opt == 'b')
		{
			car.model = "Pulse";
			car.fuel = 41;
			car.engine = 1461;
		}
		else
		{
			std::cout << endl
					  << "Invalid option, please choose model! Enter a or b " << endl
					  << endl;
			goto carmodel4;
		}
	}
case 5:
	car.company = "FORD";
	std::cout << car.company << endl
			  << endl;
	std::cout << "\ta)Figo\t\tb)Ecosport\t\t" << endl
			  << endl;
carmodel5:
	std::cout << "choose a model: ";
	std::cin >> model_opt;
	if (model_opt == 'a')
	{
		car.model = "Figo";
		car.fuel = 40;
		car.engine = 1499;
	}
	else if (model_opt == 'b')
	{
		car.model = "Ecosport";
		car.fuel = 52;
		car.engine = 1498;
	}
	else
	{
		std::cout << endl
				  << "Invalid option, please choose model! Enter a or b " << endl
				  << endl;
		goto carmodel5;
	}
	break;
default:
	std::cout << "Invalid option! please select again!!\n\n"
			  << endl
			  << endl;
	goto cars;

	break;
}
#endif

std::cout << endl
		  << endl;
}

void CarData::Cars::setCarData()
{
	CarData cd1;
	cd1.TotalCars = 10;
}

/*
int main()
{
	CarData cd;
	cd.readCarList();
	return 0;
}
*/
