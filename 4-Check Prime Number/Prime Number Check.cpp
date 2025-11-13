#include <iostream>

using namespace std;

int main() {

    // Number to Test
    int n = 2;
    // Flag to check, is it a prime number or not? 
    bool isPrime = true;

    // Checking if number is 1 or Negative
    if (n <= 1) {
        isPrime = false;
    } else {
        // Checking the Divisors of n 
        for (int i = 2; i < n / 2; ++i) {
            // if Divisors available, then n is not Prime and then the Loop will Stop
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // if isPrime is True, then it will print, Prime otherwise it will print Not Prime
    if (isPrime) {
        cout << n << " is Prime Number";
    } else {
        cout << n << " is not Prime Number";
    }


    return 0;

}