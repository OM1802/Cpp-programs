//cpp code to find if a number is positive(+) or negative(-) 
#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num<0) {
        cout << num << " is negative." << endl;
    } else {
        cout << num << " is positive." << endl;
    }
    
    return 0;
}
