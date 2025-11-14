#include <iostream>

using namespace std;

int main() {

    // Variables to store original & Reversed Number
    int n = 1234;
    int rev = 0;

    // Logic to Reverse Digits of a Number ( using Math Formulas )
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << "Reversed Number = " << rev << endl;

    return 0;
}