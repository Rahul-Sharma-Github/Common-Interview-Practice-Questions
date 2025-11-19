#include <iostream>

using namespace std;

int main() {
    // variables
    string s = "hello world";
    int j = s.size() - 1;


    cout << "String Characters = " << j << endl;
    cout << "Original String = " << s << endl;


    // Customized Logic to reverse string ( without any string function )

    cout << "Reversed String = ";
    for (j; j >= 0; --j) {
        cout << s[j];
    }

    return 0;
}