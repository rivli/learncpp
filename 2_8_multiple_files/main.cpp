#include <iostream>

int getInteger();

int main() 
{
    int x{getInteger()};
    int y{getInteger()};

    std::cout << "sum of x and y is " << x + y << '\n';
    return 0;
}
