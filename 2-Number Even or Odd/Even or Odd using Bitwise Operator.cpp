#include <iostream>

using namespace std;

int main() {
    //Variables to store data
    int num = 7;

    // Logic to check even or odd number using bitwise operator
    (num & 1) ? cout << num << " is Odd": cout << num << " is Even";

    return 0;
}