#include <iostream>
#include <cmath>

class ArmstrongChecker {
private:
    int number;

    // Helper function to count the number of digits in the number
    int countDigits(int n) {
        int count = 0;
        while (n != 0) {
            n /= 10;
            count++;
        }
        return count;
    }

public:
    // Constructor to initialize the number
    ArmstrongChecker(int num) : number(num) {}

    // Function to check if the number is an Armstrong number
    bool isArmstrong() {
        int n = number;
        int numDigits = countDigits(n);
        int sum = 0;
        int temp = n;

        while (temp != 0) {
            int digit = temp % 10;
            sum += std::pow(digit, numDigits);
            temp /= 10;
        }

        return sum == number;
    }
};

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    ArmstrongChecker checker(num);

    if (checker.isArmstrong()) {
        std::cout << num << " is an Armstrong number." << std::endl;
    } else {
        std::cout << num << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
