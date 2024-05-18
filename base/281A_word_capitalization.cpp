#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter : " << endl;
    string str;
    cin >> str;

    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }

    cout << str << endl;



    return 0;
}