#include "MyVector.hpp"
#include <iostream>

// impliment constructor
template <typename T>
MyVector<T>::MyVector(int capacity) : size(0) {
    this->capacity = capacity;
    elements = new T(capacity);
}

template <typename T>
MyVector<T>::~MyVector() {
    delete [] elements;
}

template <typename T>
MyVector<T>::MyVector(const MyVector<T>& other) {
    // TODO 1
}

template <typename T>
void MyVector<T>::push_back(const T& value) {
    if(size >= capacity) {
        allocate_memory(capacity * 2);
    }
    elements[size] = value;
    size++;
}

template <typename T>
T MyVector<T>::pop_back(void){
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

template <typename T>
void MyVector<T>::print() const {
    std::cout << "[";
    for(int i = 0; i < size; i++) {
        std::cout << elements[i] << ' ';

    }
    std::cout << "]\n";
}

template <typename T>
void MyVector<T>::allocate_memory(int memory_size){
    capacity = memory_size;
    T *old = elements;
    // allocate a new memory (bigger or smaller)
    elements = new T[memory_size];
    for(int i = 0; i < size; i++){
        elements[i] = old[i];
    }
    //deallocate the old memory
    delete [] old;
}

template <typename T>
T& MyVector<T>::at(int index){
    if(index < 0 || index > size - 1) {
        throw "Invalid index!";
    }
    return elements[index];
}