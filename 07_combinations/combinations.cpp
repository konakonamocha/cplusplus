/*
    prints combination of N characters
*/

#include <iostream>
#include <string>

int main(void)
{
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    printCombinations(n);

    return 0;
}

void printCombinations(int n)
{
    // create a string and initialize with n 'a' characters
    std::string s(n, 'a');

    printCombinations(s, n, 0);
}

void printCombinations(std::string& s, int n, int i)
{
    // base case
    if (i >= n)
    {
        std::cout << s << std::endl;
        return;
    }
    while(s[i] <= 'z')
    {
        printCombinations(s, n, i + 1);
        s[i]++;
    }
    s[i] = 'a';
}

// 3662 n = 3
// xxx3v