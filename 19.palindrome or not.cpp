#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(const std::string &str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(str[left])) {
            ++left;
        }
        while (left < right && !isalnum(str[right])) {
            --right;
        }
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string to check if it's a palindrome: ";
    std::getline(std::cin, inputString);

    if (isPalindrome(inputString)) {
        std::cout << "The string is a palindrome.\n";
    } else {
        std::cout << "The string is not a palindrome.\n";
    }

    return 0;
}

