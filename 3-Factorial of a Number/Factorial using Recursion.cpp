#include <iostream>

using namespace std;

int main() {
    // declared the Function first here
    int factorial(int);

    // called the function here & Stored the returned value to result variable
    int result = factorial(5);

    // Printed the result value
    cout << result;

    return 0;
}

// Recursion Method for getting Factorial of a Number
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        // It repeatedly reduces n until 0, then multiplies results while returning.
        // means = n × (n-1) × (n-1) × (n-1) x (n-1)
        //       = 5 x (5-1) x (4-1) x (3-1) x (2-1) 
        //       = 5 x  (4)  x  (3)  x  (2)  x  (1)
        return n * factorial(n - 1);
    }
}