#include <iostream>
#include <string>

int main(void)
{
    int age = 25;
    double gpa = 3.5;
    char grade = 'A';
    std::string name = "Mike Bobaguard"; //str requires <string> header
    bool isActive = true;

    //Scan input
    std::cout << "Enter ur name" << std::endl;
    getline(std::cin, name);

    std::cout << "enter ur age !? and gpa";
    std::cin >> age >> gpa;
    
    std::cout << name << std::endl;
    std::cout << age << std::endl;
    std::cout << grade << std::endl;
    std::cout << gpa << std::endl;

    return 0;
}