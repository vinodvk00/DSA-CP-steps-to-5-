#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char>(m));
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }
        int ans = 0;

        // check for the last row and last column
        for(int i = 0; i < n; i++) {
            if(v[i][m-1] == 'R') {
                ans++;
            }
        }
        for(int i = 0; i < m; i++) {
            if(v[n-1][i] == 'D') {
                ans++;
            }
        }
        cout << ans << endl;
    }


    return 0;
}