#include "MyVector.hpp"
#include "MyVector.cpp"

int main(void) {
    MyVector<int> mv;
    mv.push_back(100);
    mv.push_front(1);

    mv.print();
}