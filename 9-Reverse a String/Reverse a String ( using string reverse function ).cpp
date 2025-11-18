#include <iostream>

#include <algorithm>

#include <string>

using namespace std;

int main() {
    // variables
    string s = "hello";

    // Logic to Reverse a String ( using string reverse function )
    reverse(s.begin(), s.end());

    cout << "Reversed String = " << s << endl;

    return 0;
}