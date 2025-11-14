#include <iostream>

#include <algorithm>

using namespace std;

int main() {

    // variable to store number
    string s = "01230";


    // logic to Reverse a Number ( using String Methods )


    // Reversing the String using reverse function
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}