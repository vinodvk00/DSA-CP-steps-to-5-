#include <bits/stdc++.h>
using namespace std;

int main() {
    string sum;
    cin >> sum;

    int one = 0, two = 0, three = 0;

    for(char ch : sum) {
        if(ch == '1') one++;
        else if(ch == '2') two++;
        else if(ch == '3') three++;
    }

    string added = "";

    while(one--) {
        added += '1';
        added += '+';
    }

    while(two--) {
        added += '2';
        added += '+';
    }

    // int n = sum.size();

    while(three--) {
        added += '3';
        added += '+';
    }

    added.pop_back();

    cout << added << endl;


    return 0;
}