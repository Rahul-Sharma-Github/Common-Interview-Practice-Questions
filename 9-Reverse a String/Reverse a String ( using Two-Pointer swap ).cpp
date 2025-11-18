#include <iostream>

#include <string>

using namespace std;

int main() {
    // variables
    string s = "hello";
    int i = 0;

    int j = s.size() - 1;


    // Logic to Reverse String ( using two-pointer swap )
    while (i < j) {
        swap(s[i], s[j]);
        ++i;
        --j;
    }

    cout << "Reversed String = " << s << endl;

    return 0;
}