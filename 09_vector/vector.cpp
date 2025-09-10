#include <iostream>
#include <vector>

void print(const std::vector<int> v);
void rotateRight(std::vector<int>& v, int k);
//void rotateLeft(std::vector<int>& v, int k);

int main(void)
{
    //create a vector (initialization list)
    std::vector<int> v {1, 2, 3, 4, 5, 6};
    print(v);

    //create with size and default value
    std::vector<int> v2(5, 10); //5 elements with each value being 10
    print(v2);

    //create a copy from another vector
    std::vector<int> v3{v};
    print(v3);

    //print the current number of elements
    std::cout << v3.size() << std::endl;

    //front and back
    std::cout << "front " << v3.front() << std::endl;
    std::cout << "back " << v3.back() << std::endl;

    //add to the end
    v3.push_back(8);
    v3.push_back(9);

    //remove the last element
    v3.pop_back();
    std::cout << "after addition and removal\n";
    print(v3);

    //iterators - is an object that enables traversal over 
    /*
        begin(): point to the first element
        end(): points to the one past the last element
    */

    // insert an element(iterator, value)

    v3.insert(v3.begin(), 100);
    print(v3);

    //insert 999 in the midle
    int middle = v3.size() / 2;
    v3.insert(v3.begin() + middle, 999);
    print(v3);

    //erase (iterator)
    v3.erase(v3.begin() + 1); //remove the second element
    print(v3);

    //rotate right
    rotateRight(v3, 2);
    print(v3);
    return 0;
}

void print(const std::vector<int> v)
{
    for (int el : v)
    {
        std::cout << el << ' ';
    }
    std::cout << std::endl;
}

void rotateRight(std::vector<int>& v, int k)
{
    k %= v.size();
    while (k)
    {
        //get the last
        v.insert(v.begin(), v.back());
        //remove the last element
        v.pop_back();
        k--;
    }
}