#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        for (ll i = 0 ; i < n ; i++) {
            cin >> a[i];
        }
        ll m = 0;
        ll ans = 0;
        ll s = a.size() - 1;
        sort(a.begin(), a.end());
        for (ll i = 0 ; i <= s  ; i++) {
            m += a[s - i];
            if (m >= x*(ans+1)) {
                ans++;
            } else {
                m -= a[s - i];
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}