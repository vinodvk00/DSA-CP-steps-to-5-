#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string encoded;
    cin >> encoded;

    string decoded = "";

    // int i = 0;
    // while(i < n) {
    //     decoded += encoded[i];
    //     i = (i + 1) * 2 - i;
    // }

    // its failed because i should be incremented by the length of the decoded string
    int i = 0;

    while(i < n) {
        decoded += encoded[i];
        i += decoded.length();
    }

    cout << decoded << endl;


    return 0;
}