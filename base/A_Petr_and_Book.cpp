#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pagesPerDay(7);

    for(int i = 0; i < 7; i++) {
        cin >> pagesPerDay[i];
    }

    int PagesPerWeek = accumulate(pagesPerDay.begin(), pagesPerDay.end(), 0);
    // cout << PagesPerWeek << endl;

    int pagesLeft = n % PagesPerWeek;

    //be carefull with modulo operator, especially when modulo result = 0

    if(pagesLeft == 0) {
        pagesLeft = PagesPerWeek;
    }

    for(int i = 0; i < 7; i++) {
        pagesLeft -= pagesPerDay[i];
        if(pagesLeft <= 0) {
            cout << i + 1 << endl;
            break;
        }
    }


    return 0;
}