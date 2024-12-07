#include <iostream>

int add(int x, int y);

int main() {
    std::cout << "The sum of 3 and 4 is: " << add(3,4) << std::endl;
    return 0;
}

/*
    In order for this program to work you need to compile both files at the same time.
    Since I compiling via the command line, I need to compile as such:
        `g++ add.cpp main.cpp -o run.out`
*/