#include <iostream>

class Dad {
public:
    Dad() {
        std::cout << "Dad's constructor\n";
    }
    virtual ~Dad() {
        std::cout << "Dad's destructor\n";
    }
};

class Son : public Dad {
public:
    Son() {
        std::cout << "Son's constructor \n";
        std::cout << "Dynamic memory was allocated\n";
    }
    ~Son() {
        std::cout << "Dynamic memory was deallocated\n";
    }
};

int main(void) {
    Dad *dad = new Son();

    delete dad;

    return 0;
}