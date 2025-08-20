#include <iostream>

//create namespace
namespace first
{
    int a = 5;

    void print()
    {
        std::cout << "First" << std::endl;
    }
}

namespace second
{
    void print()
    {
        std::cout << "Second" << std::endl;
    }
}

int main(void)
{
    first::print();

    return 0;
}