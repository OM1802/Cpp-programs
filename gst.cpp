#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double originalAmount, gstRate, gstAmount, totalAmount;

    // Initialize GST rate (18%)
    gstRate = 18.0;

    // Prompt the user to enter the original bill amount
    cout << "Enter the original bill amount: ";
    cin >> originalAmount;

    // Calculate the GST amount
    gstAmount = (originalAmount * gstRate) / 100;

    // Calculate the total amount including GST
    totalAmount = originalAmount + gstAmount;

    // Display the results

