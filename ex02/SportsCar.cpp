#include "SportsCar.hpp"
#include <iostream>

SportsCar::SportsCar() : Car(), topSpeed(0)
{
    std::cout << "** [SportsCar] Class Constructor! **" << std::endl;
}

SportsCar::SportsCar(const SportsCar &obj) : Car(obj), topSpeed(obj.topSpeed)
{
    std::cout << "** [SportsCar] Class Copy constructor! **" << std::endl;
}

SportsCar::~SportsCar()
{
    std::cout << "** [SportsCar] Class Destructor! **" << std::endl;
}

SportsCar &SportsCar::operator=(const SportsCar &obj)
{
    std::cout << "** [SportsCar] Copy assignment operator! **" << std::endl;
    if (this != &obj)
    {
        this->topSpeed = obj.topSpeed;
    }
    return (*this);
}

void SportsCar::drive()
{
    Car::drive();
    std::cout << "+) ** [SportsCar]'s drive function" << std::endl;
    std::cout << "+) topSpeed : [" << this->topSpeed << "]" << std::endl;
}

void SportsCar::setTopSpeed(std::size_t topSpeed)
{
    std::cout << "** [SportsCar] setting value to [year] **" << std::endl;
    this->topSpeed = topSpeed;
}