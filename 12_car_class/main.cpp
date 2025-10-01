//testing file
#include "Car.hpp"

int main(void)
{
    //create a car object
    Car ferarri_spider("Ferarri", "Spider", 2021, 16.4);
    ferarri_spider.print();

    Car ferarri_f50;
    ferarri_f50.setMake("Ferarri");
    ferarri_f50.setModel("F 50");
    ferarri_f50.setYear(2025);
    ferarri_f50.setMPG(10.5);
    
    ferarri_f50.print();

    return 0;
}