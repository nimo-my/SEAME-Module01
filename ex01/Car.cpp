#include "Car.hpp"
#include <iostream>

Car::Car() : make(0), model("defaultModel"), year(0)
{
    std::cout << "** [Car] Class Constructor! **" << std::endl;
}

Car::Car(const Car &obj) : make(obj.make), model(obj.model), year(obj.year)
{
    std::cout << "** [Car] Class Copy constructor! **" << std::endl;
}

Car::~Car()
{
    std::cout << "** [Car] Class Destructor! **" << std::endl;
}

Car &Car::operator=(const Car &obj)
{
    std::cout << "** [Car] Copy assignment operator! **" << std::endl;
    if (this != &obj)
    {
        this->make = obj.make;
        this->model = obj.model;
        this->year = obj.year;
    }
    return (*this);
}

void Car::setMake(std::size_t newMake)
{
    std::cout << "** [Car] setting value to [make] **" << std::endl;
    this->make = newMake;
}

void Car::setModel(std::string newModel)
{
    std::cout << "** [Car] setting value to [model] **" << std::endl;
    this->model = newModel;
}

void Car::setYear(std::size_t newYear)
{
    std::cout << "** [Car] setting value to [year] **" << std::endl;
    this->year = newYear;
}

void Car::drive()
{
    std::cout << "** [Car] printing all the values inside the class [Car] **" << std::endl;
    std::cout << "** Car's make : [" << this->make << "], model : [" << this->model << "], year : [" << this->year
              << "] " << std::endl;
}