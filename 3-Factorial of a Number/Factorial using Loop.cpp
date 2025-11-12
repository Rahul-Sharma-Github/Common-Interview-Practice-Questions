#include <iostream>

using namespace std;

int main() {
    int num = 5;
    long long fact = 1;

    //Logic to calculate Factorial using loop
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }

    cout << "Factorial of " << num << " is " << fact << endl;


    return 0;
}