#include "Car.hpp"
#include <iostream>

Car::Car() : name("default"), speed(0)
{
    std::cout << "** Car Constructor initialized! **" << std::endl;
}

Car::Car(const Car &obj) : name(obj.name), speed(obj.speed)
{
    std::cout << "** Car Copy constructor initialized! **" << std::endl;
}

Car::~Car()
{
    std::cout << "** Car Destructor initialized! **" << std::endl;
}

Car &Car::operator=(const Car &obj)
{
    std::cout << "** Car Copy assignment operator initialized! **" << std::endl;
    if (this != &obj)
    {
        this->name = obj.name;
        this->speed = obj.speed;
    }
    return (*this);
}

void Car::setName(std::string newName)
{
    std::cout << "** Car setting name to [" << newName << "] **" << std::endl;
    this->name = newName;
}

void Car::setSpeed(std::size_t newSpeed)
{
    std::cout << "** Car setting speed to [" << newSpeed << "] **" << std::endl;
    this->speed = newSpeed;
}

void Car::printInfo()
{
    std::cout << "** Car's name : [" << this->name << "], speed : [" << this->speed << "]" << std::endl;
}