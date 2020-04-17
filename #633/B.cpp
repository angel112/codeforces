#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {

    ll t;
    cin >> t;
    while (t > 0) {
        ll n;
        vector<ll> a(n);
        for (ll i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll x = a.size();
        x = (x - 1) / 2;
        ll c = 1;
        for (ll i = 0 ; i <= n ; i++) {
            cout << a[x] << " ";
            x += c * (i + 1);
            c *= -1;
        }
        cout << a[x] << endl;
        t--;
    }
    return 0;
}