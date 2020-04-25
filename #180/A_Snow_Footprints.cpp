#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int b = -1, e = -1;
    int i;
    for (i = 0 ; i < n ; i++) {
        if (s[i] == 'R') {
            b = i + 1;
        }
        if (s[i] == 'L' && e == -1) {
            e = i;
        }
    }
    if (b == -1) {
        b = e + 1;
    } else if (e == -1) {
        e = b + 1;
    }
    cout << b << " " << e;
    return 0;
}