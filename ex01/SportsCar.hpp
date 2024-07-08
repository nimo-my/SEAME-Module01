#pragma once
#ifndef __SportsCar_CPP__
#define __SportsCar_CPP__

#include "Car.hpp"
#include <string>

class SportsCar : public Car
{
  private:
    std::size_t topSpeed;

  public:
    SportsCar();                     // Constructor
    SportsCar(const SportsCar &obj); // Copy Constructor
    ~SportsCar();                    // Destructor

    SportsCar &operator=(const SportsCar &obj); // Copy assignment operator
    void drive();
    void setTopSpeed(std::size_t topSpeed);
};

#endif
