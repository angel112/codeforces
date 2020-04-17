#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n;
        cin >> n;
        n = (n - 1) / 2;
        cout << n << endl;
        t--;
    }
    return 0;
}