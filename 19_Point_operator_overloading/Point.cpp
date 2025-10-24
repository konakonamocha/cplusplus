#include "Point.hpp"

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

bool Point::operator==(const Point& other) const {
    return(x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
    return !(*this == other);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const {
    return Point(x * other.x, y * other.y);
}

Point& Point::operator+=(const Point& other) {
    x += other.x;
    y += other.y;
    return *this;
}

std::string Point::toString(void) const {
    return "(", std::to_string(x) + "," + std::to_string(y) + ")";
}


Point Point::operator-() {
    return Point(-x, -y);
}

Point Point::operator++() {
    x += 1;
    y += 1;
    return *this;
}

Point Point::operator++(int ) {
    Point temp(*this);
    Point temp(x,y);
    this->x += 1;
    this->y += 1;
    return temp;
}