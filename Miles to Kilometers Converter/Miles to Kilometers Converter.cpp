#include <iostream>

int main() {
    double mile;
    double kilo;

    std::cout << "Enter distance in Miles";
    std::cin >> mile;

    kilo = mile * 1.609344;
    std::cout << mile << " miles is equal to " << kilo << " kilometers ";
}