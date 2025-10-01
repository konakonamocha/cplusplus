//header file
// description of the class
#include <string>

/*
    TODO
    add: 
    mileage: the odometer of the car
    fuel_capacity: tank capacity of the car
    fuel_level: current fuel in gallons

    Methods:
    void refuel(double gallons);
    void drive(double distance); if car has enough fuel to drive the given distance print <Car (make, model) is driving!>

*/

class Car
{
public:
    //constructors
    Car(); //no arg constructor
    Car(std::string make, std::string model, int year, double MPG);

    // getters
    // constant methods = cannot modify class properties
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;

    //setters
    void setMake(std::string newMake);
    void setModel(std::string newModel);
    void setYear(int newYear);
    void setMPG(double newMPG);

    //methods
    void print(void) const;
private:
    std::string make;
    std::string model;
    int year;
    double MPG;
};