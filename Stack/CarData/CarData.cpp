/*************************************************************//**
 * @file CarList.cpp
 * @author Sumanth Sarvepalli
 * @brief The purpose of this file is read list of cars data from a file
 * @version 0.1
 * @date 2024-02-26
 * 
 * @copyright Copyright (c) 2024
 * 
 **************************************************************/

#include <QDebug>
#include "CarData.h"

/**
 * @brief Construct a new Car Data:: Car Data object
 * 
 */
CarData::CarData()
{

}

/**
 * @brief Destroy the Car Data:: Car Data object
 * 
 */
CarData::~CarData()
{

}

/**
 * @brief get the Car Data from DB
 * 
 */
void CarData::getCarData() const
{

}

/**
 * @brief
 *
 */
void CarData::readCarList()
{
    // map<QString, CarData> CarMap;
}

/**
 * @brief Construct a new Car Data:: Car:: Car object
 * 
 */
CarData::Car::Car():
    m_companyName(""),
    m_modelName(""),
    m_regNumber(""),
    m_fuelType(""),
    m_engineNumber(""),
    m_fuelCapacity(0),
    m_engineCapacity(0)
{

}

/**
 * @brief Destroy the Car Data:: Car:: Car object
 * 
 */
CarData::Car::~Car()
{

}

/**
 * @brief to set Car Data
 *
 */
void CarData::Car::setCarData(QString p_companyName, QString p_modelName,
                              QString p_regNumber, QString p_fuelType,
                              float p_fuelCapacity, QString p_engineNumber,
                              float p_engineCapacity) const
{
    m_companyName = p_companyName;
    m_modelName = p_modelName;
    m_regNumber = p_regNumber;
    m_fuelType = p_fuelType;
    m_engineNumber = p_engineNumber;
    m_fuelCapacity = p_fuelCapacity;
    m_engineCapacity = p_engineCapacity;
}
