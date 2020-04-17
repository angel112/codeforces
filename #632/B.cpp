#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0 ; i < n; i++) {
            cin >> a[i];
        }
        for (ll i = 0 ; i < n; i++) {
            cin >> b[i];
        }
        bool ad = false, su = false, ans = true;
        if (a[0] != b[0]) {
            ans = false;
        }
        for (ll i = 0 ; i < n ; i++ ) {
            if (i != 0) {
                if (a[i] > b[i]) {
                    if (!su) {
                        ans = false;
                    }
                } else if (a[i] < b[i]) {
                    if (!ad) {
                        ans = false;
                    }
                }
            }
            if (a[i] == 1) ad = true;
            else if (a[i] == -1) su = true;
            if (!ans) break;
        }
        if (ans) cout << "YES\n";
        else cout << "NO\n";
        t--;
    } 
    return 0;
}