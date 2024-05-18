#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string x;
        cin >> x;

        int len = x.length();
        int ans = 0;
        int i = 0;
        while (x[i] != '1' && i < len) {
            i++;
        }

        int j = len - 1;
        while (x[j] != '1' && j >= 0) {
            j--;
        }

        for (int k = i; k <= j; k++) {
            if (x[k] == '0') {
                ans++;
            }
        }

        cout << ans << endl;
    }


    return 0;
}