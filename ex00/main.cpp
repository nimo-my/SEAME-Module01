#include "Car.hpp"
#include <iostream>

int main()
{
    Car *redCar = new Car;
    Car *blueCar = new Car;

    std::cout << "\n==== Printing default info. ====\n";
    redCar->printInfo();
    blueCar->printInfo();
    std::cout << "+) redcar's address : " << &redCar << ", bluecar's adress : " << &blueCar << std::endl;

    redCar->setName("redy");
    redCar->setSpeed(70);

    blueCar->setName("bluey");
    blueCar->setSpeed(100);

    std::cout << "\n==== Printing info after modyfing. ====\n";
    redCar->printInfo();
    blueCar->printInfo();

    std::cout << "\n==== Copy blueCar's info to the redCar. ====\n";
    *redCar = *blueCar;

    std::cout << "\n==== Print redCar's info. ====\n";
    redCar->printInfo();
    std::cout << "+) redcar's address : " << &redCar << ", bluecar's adress : " << &blueCar << std::endl;

    std::cout << "\n==== Delete redcar. ====\n";
    delete redCar;
    redCar = nullptr;

    std::cout << "\n==== Delete bluecar. ====\n";
    delete blueCar;
    blueCar = nullptr;

    return 0;
}