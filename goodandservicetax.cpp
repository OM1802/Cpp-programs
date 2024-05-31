#include <iostream>
using namespace std;

// Class to handle GST calculations
class GSTCalculator {
private:
    double originalPrice;
    double gstRate;

public:
    // Constructor to initialize the original price and GST rate
    GSTCalculator(double price, double rate) : originalPrice(price), gstRate(rate) {}

    // Method to calculate GST amount
    double calculateGST() {
        return (originalPrice * gstRate) / 100;
    }

    // Method to calculate the final price including GST
    double calculateFinalPrice() {
        return originalPrice + calculateGST();
    }

    // Method to display the details
    void displayDetails() {
        cout << "Original Price: $" << originalPrice << endl;
        cout << "GST Rate: " << gstRate << "%" << endl;
        cout << "GST Amount: $" << calculateGST() << endl;
        cout << "Final Price: $" << calculateFinalPrice() << endl;
    }
};

int main() {
    double price, rate;

    // Input the original price and GST rate
    cout << "Enter the original price: ";
    cin >> price;
    cout << "Enter the GST rate (%): ";
    cin >> rate;

    // Create an object of GSTCalculator class
    GSTCalculator calculator(price, rate);

    // Display the GST calculation details
    calculator.displayDetails();

    return 0;
}
