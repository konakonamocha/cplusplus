#include <iostream>
#include <string>

class A {
public:
    std::string public_msg = "1";
private:
    std::string private_msg = "2";
protected:
    std::string protected_msg = "3";

    friend class B;

};

class B : public A {
public:
    void print_msg() {
        std::cout << public_msg << std::endl;
        std::cout << private_msg << std::endl;
        std::cout << protected_msg << std::endl;
    }
};

int main(void) {
    B b;
    b.print_msg();
    b.public_msg; // can access
    // b.protected_msg; no access
    // b.private_msg; no access


    return 0;
}