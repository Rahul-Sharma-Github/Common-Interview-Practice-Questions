#include <iostream>

using namespace std;

int main() {
    // variables to store original numbner, temp number, reverse number
    int n = 223, temp = n, rev = 0;

    // Logic to reverse the number ( Math Formula )
    while (temp != 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    // check original number with reversed number
    if (n == rev) {
        cout << n << " is a Palindrome";
    } else {
        cout << n << " is not a Palindrome";
    }


    return 0;
}