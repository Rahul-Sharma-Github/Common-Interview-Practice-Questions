#include <iostream>

#include <algorithm>

#include <string>

using namespace std;

int main() {
    // variables
    string a = "listen";
    string b = "silent";

    // Base case Checking ( Length check )
    if (a.size() != b.size()) {
        cout << "Not Anagram" << endl;
        return 0;
    }

    // using string sort() function
    // Sorting characters of both string word - Alphabetically
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());


    // checking if string similar or not & printing result
    cout << (a == b ? "Anagram" : "Not Anagram");

    return 0;
}