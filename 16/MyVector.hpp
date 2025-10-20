#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class MyVector{
public:
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector<T>& other);
    int getCapacity() const {return capacity;}
    void push_back(const T& value);
    T pop_back(void);
    void print() const;
    T& at(int index);
    
    int& at(int index);
    T push_front(const T& value);

private:
    void allocate_memory(int memory_size);

    T *elements;
    int size;
    int capacity;
};



#endif