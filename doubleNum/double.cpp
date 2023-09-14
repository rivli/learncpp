#include <iostream>

int main() {
    std::cout << "Enter your number: ";

    int num{0};
    std::cin >> num;

    std::cout << "Your number is - " << num << "\n"
        "Doubled: " << num * 2 << "\nTripple: " << num * 3 << "\n";
    return 0;
}
