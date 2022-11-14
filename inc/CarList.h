#ifndef _CARLIST_H_
#define _CARLIST_H_

class CarData
{
private:
    int TotalCars;
    typedef struct Data
    {
        std::string Company, Model, FuelType;
        int RegNum, EngineNum;
        float FuelCapacity;
    }Data_t;

public:
    
    CarData(){};
    ~CarData(){};

    void readCarList();

    class Cars
    {
    private:
        std::string Company, Model, FuelType;
        int RegNum, EngineNum;
        float FuelCapacity;

    public:
        Cars() : Company(""), Model(""), FuelType(""), RegNum(0), EngineNum(0), FuelCapacity(0){};
        ~Cars();
        void setCarData();
    };
};

#endif // _CARLIST_H_