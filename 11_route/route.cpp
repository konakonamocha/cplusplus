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
    //get functions (getters, accessor functions)
    std::string getSource(void)
    {
        return source;
    }
    std::string getDestination(void)
    {
        return destination;
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
};

int main(void)
{
    srand(time(0)); // set the seed of random numbers
    //create an obj of route
    Route fall_trip;

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();
    fall_trip.setDestination("New York");
    fall_trip.print();

    return 0;
}