#ifndef POINT_HPP
#define POINT_HPP
#include <string>

class Point {
public:
    Point(int x = 0, int y = 0);

    //logic operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // arithmetic operator
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;

    //arithmetic assignment operator
    Point& operator+=(const Point& other);
    int& operator[](int index);

    Point operator-();
    Point operator++();
    Point operator++(int );

    //TODO


    std::string toString(void) const;

private:
    int x;
    int y;
};

#endif