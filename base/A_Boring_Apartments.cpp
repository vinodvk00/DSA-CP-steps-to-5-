#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int len = x.length();
        int num = x[0] - '0';
        int ans = (num - 1) * 10;

        // if (len == 1) {
        //     ans += 1;
        // } else if (len == 2) {
        //     ans += 3;
        // } else if (len == 3) {
        //     ans += 6;
        // } else {
        //     ans += 10;
        // }

        //this can be shortened to:

        ans += (len * (len + 1)) / 2;

        cout << ans << endl;
    }


    return 0;
}

// man!! this copilet really puts code from my mind into the screen