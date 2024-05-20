#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        cout << 2 << endl;
        int a = n;
        int b = n - 1;
        

        // here also i was overthinking about the problem statement and solution

        // front next time i should try to solve the problem with the given constraints and not overthink about the problem statement
        
        for(int i = 0; i < n - 1; i++) {
            cout << a << " " << b << endl;
            a = (a + b + 1) / 2;
            b--;
        }

    }


    return 0;
}