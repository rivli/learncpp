#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int num{0};
    std::cin >> num;
    return num;
}
