#include <iostream>
#include <ctime>
#include <string>

///create a route struct
class Route
{
private: // access specifier
    std::string source;
    std::string destination;
    int length;

    void updateLength(void)
    {
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }

public:
    // constructors
    // constructors have no return type. 
    // constructors are called when the object is created
    // constructors should be public
    // constructors cannot be called explicitely
    
    //no arguement constructor (first version)
    /*Route()
    {
        length = 0;
    }*/

    
    //no arguement constructor (second version)
    Route() : length(0)
    {
        
    }

    //overloaded constructor
    Route(std::string source_, std::string destination_)
    {
        setSource(source_);
        setDestination(destination_);
    }

    //get functions (getters, accessor functions)
    std::string getSource(void)
    {
        return source;
    }
    std::string getDestination(void)
    {
        return destination;
    }
    int getLength(void)
    {
        return length;
    }

    // set function (mutator function)
    void setSource(std::string new_source)
    {
        source = new_source;
        updateLength();
    }
    void setDestination(std::string new_destination)
    {
        destination = new_destination;
        updateLength();
    }

    void print(void)
    {
        std::cout << source << " -> " << destination << " : " << length << std::endl;
    }

    //returns whether the route is long or not
    bool isLong();
};

int main(void)
{
    srand(time(0)); // set the seed of random numbers
    //create an obj of route
    Route fall_trip;
    fall_trip.print();

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();
    fall_trip.setDestination("New York");
    fall_trip.print();

    //create a Route object with constructor with arguements
    Route christmas_trip("Orlando", "Los Angeles");

    christmas_trip.print();

    //creating objects
    Route route1;//no arguement constructor
    Route route2("A", "B"); // construcor with arguements
    Route route3 = Route(); // no arguement constructor
    Route route4 = Route("C", "D"); // constructor with arguements

    // Route route5(); // THIS IS NOT AN OBJECT, ACTS LIKE FUNCTION PROTOTYPE
    std::cout << route4.isLong() << std::endl;

    return 0;
}

// method implimentation
bool Route::isLong()
{
    return getLength() > 300;
}

/*
constructor must have the same name as class itself
creates an object
no return type
invoked when object is created
ClassName objectName(arguements);

*/