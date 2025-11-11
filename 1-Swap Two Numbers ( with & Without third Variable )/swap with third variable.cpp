#include <iostream>

using namespace std;

int main() {
    //Variables to store data
    int a = 5, b = 8, temp;

    cout << "a and b values before swapping = " << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n\n";

    //logic to swap number using third variable
    temp = a;
    a = b;
    b = temp;

    cout << "a and b values after swapping = " << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b;
    return 0;
}