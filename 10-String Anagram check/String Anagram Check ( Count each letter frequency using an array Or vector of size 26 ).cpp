#include <iostream>

#include <vector>

#include <string>

using namespace std;

int main() {
    // variables
    string a = "listen";
    string b = "silent";

    // base condition check
    if (a.size() != b.size()) {
        cout << "Not Anagram";
        return 0;
    }

    // Logic to store count in vector/array of 26 size
    vector < int > cnt(26, 0);


    // Increasing Count =>
    // Logic to count character Occurence and storing Occurence count on their character position in vector/array

    for (char c: a) {
        // Knowing position of each character 
        // then storing occurence count of each character on that position

        // shortcut like this
        // cnt[c-'a']++;

        // or in this expanded way for clear understanding
        cnt[c - 'a'] = cnt[c - 'a'] + 1;
    }

    // --------------------------------------------------------------- //

    // Decreasing Count =>
    // Logic to count character Occurence and Decreasing Occurence count on their character position in vector/array

    for (char c: b) {
        // Knowing position of each character 
        // then Decreasing occurence count of each character on that position 

        // shortcut like this
        // cnt[c-'a']--;

        // or in this expanded way for clear understanding
        cnt[c - 'a'] = cnt[c - 'a'] - 1;
    }


    // Now checking, if all are zero than it's Anagram otherwise Not Anagram
    for (int x: cnt) {
        if (x != 0) {
            cout << "Not Anagram";
            return 0;
        } else {
            cout << "Anagram";
            return 0;
        }
    }



    return 0;
}