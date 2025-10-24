#include <iostream>
#include "Point.hpp"

int main(void) {
    Point p1(3,4);
    std::cout << p1.toString() << std::endl;

    Point p2 = -p1;
    std::cout << p2.toString() << std::endl;

    //test ++
    ++p2;
    p2++;
    std::cout << p1.toString() << std::endl;
    return 0;
}