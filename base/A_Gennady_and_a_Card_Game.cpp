#include <bits/stdc++.h>
using namespace std;

int main() {
    string inhand;
    vector<string> table(5);

    cin >> inhand;
    for (int i = 0; i < 5; i++) {
        cin >> table[i];
    }

    for (int i = 0; i < 5; i++) {
        if (inhand[0] == table[i][0] || inhand[1] == table[i][1]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;


    return 0;
}