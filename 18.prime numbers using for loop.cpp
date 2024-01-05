#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int start, end;

    std::cout << "Enter the range to print prime numbers (start and end): ";
    std::cin >> start >> end;

    std::cout << "Prime numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    return 0;
}

