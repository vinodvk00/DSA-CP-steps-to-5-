#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // int req = 0, sum = 0, i = 1;

    // while (sum + i * (i + 1) / 2 <= n) {
    //     sum += i * (i + 1) / 2;
    //     i++;
    // }

    // cout << i - 1 << endl;

    //optimized version -- idk why im doing this but it's fun
    int i = 1;
    while (n >= i * (i + 1) / 2) {
        n -= i * (i + 1) / 2;
        i++;
    }

    cout << i - 1 << endl;




    return 0;
}