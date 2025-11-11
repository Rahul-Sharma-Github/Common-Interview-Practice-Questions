#include <iostream>

using namespace std;

int main() {
    //Variables to store data
    int a = 5, b = 8;

    cout << "a and b values before swapping = " << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n\n";

    //logic to swap number without using third variable
    a=a+b;
    b=a-b;
    a=a-b;

    cout << "a and b values after swapping = " << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b;
    return 0;
}