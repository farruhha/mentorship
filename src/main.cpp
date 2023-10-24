#include <iostream>
#include <vector>

// Function to reverse a vector
std::vector<int> reverseVector(const std::vector<int> &v) {
    std::vector<int> reversed;
    for (int i = v.size() - 1; i >= 0; i--) {
        reversed.push_back(v[i]);
    }
    return reversed;
}

// Function to remove all odd numbers from a vector
void removeOdd(std::vector<int> &v) {
    for (auto it = v.begin(); it != v.end();) {
        if (*it % 2 != 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
}

// Function to check if a vector is a palindrome
bool isPalindrome(const std::vector<int> &v) {
    for (size_t i = 0; i < v.size() / 2; i++) {
        if (v[i] != v[v.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Test the functions
    std::vector<int> testVector = {1, 2, 3, 4, 3, 2, 1};

    std::vector<int> reversed = reverseVector(testVector);
    std::cout << "Reversed Vector: ";
    for (int num : reversed) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    removeOdd(testVector);
    std::cout << "Vector with Odd Numbers Removed: ";
    for (int num : testVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    if (isPalindrome(testVector)) {
        std::cout << "The modified vector is a palindrome." << std::endl;
    } else {
        std::cout << "The modified vector is not a palindrome." << std::endl;
    }

    return 0;
}
