#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;
    while (t-- > 0) {
        ll n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        ll x = a - b;
        ll y = a + b;
        x = x * n;
        y = y * n;
        ll p = c - d;
        ll q = c + d;
        if (max(x,p) <= min(y,q)) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        } 
    }
    return 0;
}