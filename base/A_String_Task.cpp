#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

// almost missed the given condition that 'y' is also a vowel in problem statement

int main() {
    string input;
    cin >> input;

    string output = "";
    for(int i = 0; i < input.length(); i++) {
        if(!isVowel(tolower(input[i]))) {
            output += ".";
            output += tolower(input[i]);
        }
    }

    cout << output << endl;


    return 0;
}