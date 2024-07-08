#pragma once
#ifndef __CAR_CPP__
#define __CAR_CPP__

#include <string>

class Car
{
  private:
    std::size_t make;
    std::string model;
    std::size_t year;

  public:
    Car();               // Constructor
    Car(const Car &obj); // Copy Constructor
    ~Car();              // Destructor

    Car &operator=(const Car &obj); // Copy assignment operator

    void setMake(std::size_t newMake);
    void setModel(std::string newModel);
    void setYear(std::size_t newYear);

    void drive(); // print info
};

#endif
