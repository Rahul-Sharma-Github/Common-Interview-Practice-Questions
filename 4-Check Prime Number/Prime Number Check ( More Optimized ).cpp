#include <iostream>

using namespace std;

int main() {

    // Number to Test
    int n = 1;
    // Flag to check, is it a prime number or not? 
    bool isPrime = true;

    // Checking if number is 1 or Negative
    if (n <= 1) {
        isPrime = false;
    } else {
        // Checking for prime using *More Optimized way*
        // “We only check up to √n because if a number has a factor larger than √n, the smaller factor would already be found.”
        for (int i = 2; i * i <= n; ++i)
        {
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