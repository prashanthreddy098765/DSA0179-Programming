#include <iostream>

int main() {
    int number, sum = 0;

    std::cout << "Enter a number to find the sum of its digits: ";
    std::cin >> number;

    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    std::cout << "The sum of digits of " << number << " is: " << sum << std::endl;

    return 0;
}

