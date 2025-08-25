/* lowercase ASCII characters will be bigger bc they appear later in ASCII
abc > ABC
*/

/*
    if (x > 50)
    {
        y = 50;
    } else
    {
        y = x;
    }

    this can be rewitten into one line:

    y = (x > 50)? 50:x;
*/

/*
OPERATORS

&& = and
|| = or
== = is equal to
!= = is not equal to
*/

//A+ code lmaooo
#include <iostream>
#include <string>

int main()
{
    std::string s0("W");
    std::string s1 = "F";
    std::string s2 = s0 + s1;
    s2 += 'N';
    s2 += (s1 < s2) ? s0 : s1;
    std::cout << s2 << "Z";
}

/*
*/