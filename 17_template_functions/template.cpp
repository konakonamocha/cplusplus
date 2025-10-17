#include <iostream>
#include <vector>

// a template function
template <typename T>
T largest(const T& n1, const T& n2, const T& n3);

template <typename T>
T findMax(std::vector<T>& V);

//template class
template<typename T1, typename T2>
class Pair{
public:
    Pair(const T1& f, const T2& s) : first(f), second(s) ()

    //getters
    T1 getFirst() const {return first;}
    T2 getSecond() const {return second;}

    //setters
    void setFirst(const T1& first) {
        this->first = first;
    }
    void setSecond(const T1& second) {
        this->second = second;
    }

private:
    T1 first;
    T2 second;
};

//create a template function that takes 2 args of any type and returns a pair of those arguements
template<typename T1, typename T2>
Pair<T1, T2> createPair(const T1& f, const T2& s) {
    return Pair<T1, T2>;
}

int main(void) {
    int n1 = 1, n2 = 2, n3 = 5;
    std::cout << largest(n1, n2, n3) << std::endl;
    double d1 = 1, d2 = 20.5, d3 = 1.5;
    std::cout << largest(d1, d2, d3) << std::endl;

    char c1 = 'A', c2 = 'Y', c3 = 'b';
    std::cout << largest(c1, c2, c3) << std::endl;

    std::vector<std::string> v = {"Hello", "Bye", "Good Morning"};
    std::cout << findMax(v) << std::endl;
    

    //create an object of paisr strings
    Pair<int, std::string> p(1, "Jelly");

    std::cout << p.getFirst() << p.getSecond() <<std::endl;

    std::coud << createPair(100, 0.4).getFirst() << " "
              << createPair;

    return 0;
}

template <typename T>
T largest(const T& n1, const T& n2, const T& n3) {
    if (n1 >= n2 && n1 >= n3) {
        return n1;
    }
    else if (n2 >= n3) {
        return n2;
    }
    else {
        return n3;
    }
}

template <typename T>
T findMax(std::vector<T>& v) {
    if (v.empty()) {
        // throw an exception
        throw "Empty vector!";
    }
    T max = v[0];
    for (const T& el : v) {
        if (el > max) {
            max = el;
        }
    }
    return max;
}

/*
NOOOOOTES
instead of overloading, we can just have one function with a generic type

GenericType maxValue(const GenericType& value1, const GenericType& value 2);

add the keyword template followed by a list of parameters (<typename T>)
T is convention used to denote a type parameter

you can define a generic type for a class
*/