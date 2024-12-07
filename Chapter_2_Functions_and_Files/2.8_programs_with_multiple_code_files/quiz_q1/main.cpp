#include <iostream>

int getInteger(void);

int main() {
    int x{ getInteger() };
    int y{ getInteger() };
    
    std::cout << x << " + " << y << " is " << x + y << std::endl;
    return 0;
}

