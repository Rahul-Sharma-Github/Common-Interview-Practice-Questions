#include <iostream>

using namespace std;

// Recursive Function to calculate next number
int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    // variables
    int num = 10;

    // logic to call recursive function and print next value
    for (int i = 0; i < num; ++i) {
        cout << fib(i) << " ";
    }

    return 0;
}

