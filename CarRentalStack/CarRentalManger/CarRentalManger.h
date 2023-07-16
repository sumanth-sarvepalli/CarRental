#ifndef _CARRENTALMANGER_H_
#define _CARRENTALMANGER_H_

#include <QObject>

class CarRentalManager
{
public:
    /* Attributes */
	int i, id;
	double tp, bill, tot;
	 // store all customers into a vector or list
    //std::vector<Customer> customers;

    /* Constructor & Destructor */
    static CarRentalManager *getInstance();
    ~CarRentalManager(){}

    /* Function Declarations */
    virtual void SetCustomerDetails() = 0;
	void GetCustomerDetails(Customer &p_Customer);
	void GetCarList();
	void GetTimePeriod();
	void GenerateInvoice();
	void GenerateList();
	void MapData();
    void Welcome();

    void operations();

    // confirm button pressed;
    void GetCustomerInfo();
    void pushDatatoDB();

    // Display Car lis
    void CarList();


private:
    CarRentalManager();

};

#endif // _CARRENTALMANGER_H_
