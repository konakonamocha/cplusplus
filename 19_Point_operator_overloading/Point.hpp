#ifndef POINT_HPP
#define POINT_HPP

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

private:
    int x;
    int y;
};

#endif