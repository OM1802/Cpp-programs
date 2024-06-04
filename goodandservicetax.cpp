//CPP code to calculate GST
#include <iostream>
using namespace std;
class GSTCalculator {
private:
    double originalPrice;
    double gstRate;

public:
    GSTCalculator(double price, double rate) : originalPrice(price), gstRate(rate) {}
    double calculateGST() {
        return (originalPrice * gstRate) / 100;
    }

    
    double calculateFinalPrice() {
        return originalPrice + calculateGST();
    }

    
    void displayDetails() {
        cout << "Original Price: $" << originalPrice << endl;
        cout << "GST Rate: " << gstRate << "%" << endl;
        cout << "GST Amount: $" << calculateGST() << endl;
        cout << "Final Price: $" << calculateFinalPrice() << endl;
    }
};

int main() {
    double price, rate;

    
    cout << "Enter the original price: ";
    cin >> price;
    cout << "Enter the GST rate (%): ";
    cin >> rate;

    GSTCalculator calculator(price, rate);

    calculator.displayDetails();

    return 0;
}
