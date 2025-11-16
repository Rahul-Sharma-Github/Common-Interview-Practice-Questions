#include <iostream>

using namespace std;

int main() {
    // Variable to store number & initial fixed values
    int num = 10;
    int a = 0, b = 1;

    // Logic to calculate Fibonacci Series ( using loop )
    for (int i = 0; i < num; ++i) {
        cout << a << (i + 1 == num ? "" : " ");
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}