//CPP code to check if a number is strong or not
#include <iostream>
using namespace std;

class StrongNumber {
public:
     
    int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }

    
    bool isStrongNumber(int num) {
        int originalNum = num;
        int sum = 0;

        while (num > 0) {
            int digit = num % 10;
            sum += factorial(digit);
            num /= 10;
        }

        return sum == originalNum;
    }
};

int main() {
    StrongNumber sn;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (sn.isStrongNumber(number)) {
        cout << number << " is a strong number." << endl;
    } else {
        cout << number << " is not a strong number." << endl;
    }

    return 0;
}
