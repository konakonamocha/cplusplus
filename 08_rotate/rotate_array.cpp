#include <iostream>

void rotateLeft(const int scr[], int dest[], int size, int k);

int main(void)
{
    const int SIZE = 7;

    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int newList[SIZE];
    rotateLeft{list, newList, SIZE, 1};

    //print the rotated array
    for(int i : newList)
    {
        std::cout << i << ' ';
    }
}

//lmao this does not compile