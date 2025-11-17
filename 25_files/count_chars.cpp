#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    // for(int i = 0; i < argc; i++) {
    //     std::cout << argv[i] << std::endl;
    // }

    if (argc != 2) {
        std::cout << "usage : " << argv[0] << " <file_name>\n";
        return 1;
    }

    std::ifstream in;
    std::string file_name(argv[1]);
    if (in.fail()) {
        std::cout << file_name << " couldn't be opened\n";
        return 1; // error
    }

    char ch;
    int count_chars = 0;
    while (!in.eof()) {
        ch = in.get(); // gets one char from a file
        if (ch != ' ' && ch != '\n' && ch != EOF) {
            count_chars++;
        }
    }
    std::cout << file_name << " has " << count_chars << " characters\n";

    //todo
    // count the number of lines in the file


    

    in.close();

    return 0;
}