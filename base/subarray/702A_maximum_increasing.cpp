// Your task is to find the maximum length of an increasing subarray of the given array.

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr, int n) {
    int ans = 1, curr = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i - 1] < arr[i]) {
            curr++;
        }else {
            ans = max(ans, curr);
            curr = 1;
        }
    }
    ans = max(ans, curr);

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl;
    cout << solve(arr, n) << endl;



    return 0;
}

// i was trying to directly implement two pointer and got stuck 
// so, first try brute forces, as for this problem its just O(n)

// REMEMBER : brute first, then improve...