#include <iostream>

#include <algorithm>

using namespace std;

int main() {
    // variables to store original string, reverse string
    string n = "012210", rev = "";
    rev = n;

    // Logic to reverse the string ( using String Method )
    reverse(rev.begin(), rev.end());

    // check original string with reversed string
    if (n == rev) {
        cout << n << " is a Palindrome";
    } else {
        cout << n << " is not a Palindrome";
    }


    return 0;
}