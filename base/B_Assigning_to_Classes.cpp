#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> v(2 * n);
        for(int i = 0; i < 2 * n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int ans = v[n] - v[n - 1];

        //for this simple part i was overthinking if just dividing into two equal parts will give answer or not... 
        //if i'd just try it, saved some time

        cout << ans << endl;
    }


    return 0;
}