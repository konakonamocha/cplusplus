#include "MyVector.hpp"
#include <iostream>

// impliment constructor
MyVector::MyVector(int capacity) : size(0) {
    this->capacity = capacity;
    elements = new int(capacity);
}

MyVector::~MyVector() {
    delete [] elements;
}

MyVector::MyVector(const MyVector& other) {
    // TODO 1
}

void MyVector::push_back(int value) {
    //todo 2 (finish it!)
    
    elements[size] = value;
    size++;
}

// TODO 3
// void pop_back(); (capactity should not be greater than doubled size)

void MyVector::print() const {
    std::cout << "[";
    for(int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';

    }
    std::cout << "]\n";
}