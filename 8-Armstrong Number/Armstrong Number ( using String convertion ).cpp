#include <iostream>

#include <cmath>

#include <string>

using namespace std;

int main() {
    // variables
    int n = 153;
    string s = to_string(n);
    int sum = 0;

    // Logic to know Armstrong Number ( using string conversion )
    for (char c: s) {
        sum = sum + (int) pow(c - '0', s.size());
    }

    cout << (sum == n ? "Armstrong" : "Not Armstrong");

    return 0;
}