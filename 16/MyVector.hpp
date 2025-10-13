#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector{
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector& other);

    void push_back(int value);
    void print() const;

private:
    int *elements;
    int size;
    int capacity;
};



#endif