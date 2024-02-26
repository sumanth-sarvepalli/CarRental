#ifndef CARDATA_H
#define CARDATA_H

#include <QString>

class CarData
{
private:
    int TotalCars;

    class Car
    {
    private:
        QString m_companyName, m_modelName, m_regNumber, m_fuelType, m_engineNumber;
        float m_fuelCapacity, m_engineCapacity;

    public:
        Car();
        ~Car();

        /* Methods */
        void setCarData(QString p_companyName, QString p_modelName, QString p_regNumber,
            QString p_fuelType, float p_fuelCapacity, QString p_engineNumber,
            float p_engineCapacity) const;
    };

public:
    CarData();
    ~CarData();

    /* Methods */
    void getCarData() const;
    void readCarList();
};

#endif // CARDATA_H
