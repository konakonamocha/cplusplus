#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>

class Point {
public:
    Point(int x = 0, int y = 0, const char *tag = nullptr);
    ~Point();
    Point(const Point& other); // copy constructor
    // Logic operator
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    // Arithmetic operator
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;
    // Augmented Assignment Operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other);
    // Subscript operator
    int& operator[](int index);
    // Unary operator
    Point operator-();
    // Increment
    Point operator++(); // Pre
    Point operator++(int );
    // TODO Decrement
    // assignment operator
    void operator=(const Point& other);
    std::string toString(void) const;

    //friend function
    friend int sum_coordinates();
    friend std::ostream& operator<<(std::ostream& out, Point& point);
    //TODO
    friend std::istream& operator>>(std::istream& in, Point& point);

private:
    int x;
    int y;
    char *tag;
};

// std::ostream& operator<<(std::ostream& out, Point& point);

#endif
