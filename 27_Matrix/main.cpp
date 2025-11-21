#include "Matrix.hpp"
#include "Matrix.cpp"

int main() {
    Matrix m;

    m = m.load("data.txt");
    m.print();

    return 0;
}