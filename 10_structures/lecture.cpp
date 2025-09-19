#include <iostream>
#include <string>
#include <iomanip>


//prototype
void printLecture(const struct Lecture& lecture);
struct Lecture createLecture(std::string title, std::string author, int duration);

//create a struct
struct Lecture
{
    std::string title;
    std::string author;
    int duration;
};

int main(void)
{
    struct Lecture oop_the_best = createLecture("Structures", "Adam", 50);
    //call a function
    printLecture(oop_the_best);



    return 0;
}

void printLecture(const struct Lecture& lecture)
{
    //access properties of object
    std::setw(15) << std::left << "Title: " << lecture.title << std::endl;
    std::cout << "Author: " << lecture.author << std::endl;
    std::cout << "Duration: " << lecture.duration / 60 << " minutes" << std::endl;
}

struct Lecture createLecture(std::string title, std::string author, int duration)
{
    //create a lecture object
    struct Lecture oop_the_best;
    
    //modify the properties of an object
    oop_the_best.title = title;
    oop_the_best.author = author;
    oop_the_best.duration = duration * 60;

    return oop_the_best;

}