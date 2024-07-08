#pragma once
#ifndef __CAR_CPP__
#define __CAR_CPP__

#include <string>

class Car
{
  private:
    std::string name;
    std::size_t speed;

  public:
    Car();               // Constructor
    Car(const Car &obj); // Copy Constructor
    ~Car();              // Destructor

    Car &operator=(const Car &obj); // Copy assignment operator
    void setName(std::string newName);
    void setSpeed(std::size_t newSpeed);

    void printInfo();
};

#endif
