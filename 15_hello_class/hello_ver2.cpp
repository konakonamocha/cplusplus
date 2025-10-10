#include <iostream>
#include <string>

class Hello{
public:
    Hello() : messages(nullptr), size(0) {
        std::cout << "Constructor" << std::endl;
    }
    Hello(int n) : size(n) {
        std::cout << "Constructor with arguments" << std::endl;
        //dynamically allocate an array of strings
        messages = new std::string[n];
        //initialzie an array
        for(int i = 0; i < n; i++) {
            messages[i] = (i % 2 == 0) ? "Welcome!" : "Not welcome!";
        }
    }

    void bye(void){
        std::cout << "Bye" << std::endl;
    }

    void printGreetings() const{
        for(int i = 0; i < size; i++) {
            std::cout << messages[i] << std::endl;
        }
    }

    //copy constructor
    Hello(const Hello& other) {
        std::cout << "Copy constructor \n";
    }

    //destructor CANNOT BE OVERLOADED, NO ARGS
    ~Hello() {
        delete [] messages;
    }

private:
    std::string *messages; //array of strings
    int size; // size of an aarray of strings


};

void test(Hello h){
    std::cout << "Test\n";
}

int main(void){
    //create an obj dynamically
    Hello *hi = new Hello;
    //access printGreeting method
    hi->printGreetings();

    

    Hello hi2(100);
    Hello hi3 = hi2;
    test(*hi);

    //deallocate the memory
    delete hi;

    return 0;
}