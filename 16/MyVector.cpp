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
    if(size >= capacity) {
        allocate_memory(capacity * 2);
    }
    elements[size] = value;
    size++;
}

int MyVector::pop_back(void){
    if(size > 0){
        if (size - 1 < capacity / 2){
            allocate_memory(capacity / 2);
        }
        return elements[--size];
    }
    else {
        // throw an exeption
        throw "The vector is empty!";
    }
}

void MyVector::print() const {
    std::cout << "[";
    for(int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';

    }
    std::cout << "]\n";
}

void MyVector::allocate_memory(int memory_size){
    capacity = memory_size;
    int *old = elements;
    // allocate a new memory (bigger or smaller)
    elements = new int[memory_size];
    for(int i = 0; i < size; i++){
        elements[i] = old[i];
    }
    //deallocate the old memory
    delete [] old;
}

int& MyVector::at(int index){
    if(index < 0 || index > size - 1) {
        throw "Invalid index!";
    }
    return elements[index];
}