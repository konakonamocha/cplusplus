#include "Car.hpp"
#include "CarDealer.hpp"
#include <iostream>

//returns true if given car is efficient
bool isEfficient(const Car& car);

int numberOfInefficientCars(const CarDealer&);

int main(void) {
    // Create a car object
    Car ferrari_spider("Ferrari", "Spider", 2021, 16.4);
    Car ferarri_superGT("Ferrari", "Super GT", 2025, 23.4);

    ferrari_spider.print();

    Car ferrari_f50;
    ferrari_f50.setMake("Ferrari");
    ferrari_f50.setModel("F 50");
    ferrari_f50.setYear(2025);
    ferrari_f50.setMPG(10.5);

    ferrari_f50.print();

    //check whether the car is efficient
    std::cout << '\n' << (isEfficient(ferrari_f50) ? "Efficient" : "Inefficient") << '\n' << '\n';
    std::cout << '\n' << (isEfficient(ferarri_superGT) ? "Efficient" : "Inefficient") << '\n' << '\n';

    //create a CarDealer object
    CarDealer ferarri_lakeland;
    ferarri_lakeland.addCar(ferrari_f50);
    ferarri_lakeland.addCar(ferrari_spider);
    ferarri_lakeland.addCar(ferarri_superGT);

    ferarri_lakeland.showInventory();
    //print dealer's inneficient cars
    std::cout <<numberOfInefficientCars(ferarri_lakeland);

    return 0;
}

//function implimentation
bool isEfficient(const Car& car)
{
    return (car.getMPG() > 20.0) ? true : false;
}
int numberOfInefficientCars(const CarDealer& cars)
{
    int n_cars = 0;
    for(Car& car : cars.getInventory())
    {
        if (!isEfficient(car))
        {
            n_cars++;
        }
    }
}