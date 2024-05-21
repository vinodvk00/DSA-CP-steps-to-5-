#include <bits/stdc++.h>
using namespace std;

int main() {
    string ingredients;
    cin >> ingredients;

    int b = 0, s = 0, c = 0;
    for(int i = 0; i < ingredients.size(); i++) {
        if(ingredients[i] == 'B') {
            b++;
        } else if(ingredients[i] == 'S') {
            s++;
        } else {
            c++;
        }
    }

    int nb, ns, nc;
    cin >> nb >> ns >> nc;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long r;
    cin >> r;

    long long h = 0;
    long long cost;
    
    long long low = 0, high = 1e13;

    while(low <= high) {
        long long mid = low + (high - low) / 2;
        long long cost = max(0ll, mid * b - nb) * pb 
            + max(0ll, mid * s - ns) * ps 
            + max(0ll, mid * c - nc) * pc;

        if(cost <= r) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << high << endl;

    
    return 0;
}


// toke 1 hour to solve this problem, but go 90% of the way there