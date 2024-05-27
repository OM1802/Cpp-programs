//CPP code to calculate G.S.T on the total of a bill
#include <iostream>
using namespace std;

int main() {
    double originalAmount, gstRate, gstAmount, totalAmount;
    gstRate = 18.0;

    
    cout << "Enter the original bill amount: ";
    cin >> originalAmount;
    gstAmount = (originalAmount * gstRate) / 100;
    totalAmount = originalAmount + gstAmount;
    cout << totalAmount;

