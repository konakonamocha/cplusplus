#include <iostream>
#include <string>


class Human { // Base (Parent) class 
public:
    std::string name;
    int age;
    Human(): name("John Doe"), age(1) {
        std::cout << "The constructor for Human was called" << std::endl;
    }
    Human(std::string name, int age): name(name), age(age) {
        std::cout << "The constructor with args for Human was called" << std::endl;
    }

    void print(void) const {
        std::cout << "Hi! My name is " << name << '\n';
        std::cout << "I am " << age << '\n';
    }
};

class Student : public Human {   // Student is a child of Human class
public:
    int student_id;

    Student(std::string name = "John Doe", int age = 1, int student_id = 0) : 
        Human(name, age), student_id(student_id) {
            std::cout << "The constructor for Student was called" << std::endl;
        } 

    void print(void) const {
        Human::print(); // Calling the method of parent class
        std::cout << "My student ID is " << student_id << std::endl;
    }

};

int main(void) {
    Human h("Slim Shady", 52);
    h.print();
    Student st("Michael Jordan", 57, 23);
    st.print();

    return 0;
}
