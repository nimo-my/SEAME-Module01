#include "Car.hpp"
#include "SportsCar.hpp"
#include <iostream>

int main()
{
    Car *cc = new Car;
    std::cout << std::endl;

    SportsCar *sc = new SportsCar;
    std::cout << std::endl;

    cc->setMake(2000);
    cc->setModel("BMW");
    cc->setYear(1990);

    std::cout << std::endl;
    sc->setMake(2024);
    sc->setModel("Audi");
    sc->setYear(2018);
    sc->setTopSpeed(200);

    std::cout << "\n==== [Car] Call drive function. ====\n";
    cc->drive();

    std::cout << "\n==== [SportsCar] Call drive function. ====\n";
    sc->drive();

    std::cout << "\n==== Delete c. ====\n";
    delete cc;
    cc = nullptr;

    std::cout << "\n==== Delete sc. ====\n";
    delete sc;
    sc = nullptr;

    return 0;
}