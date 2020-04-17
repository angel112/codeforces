#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n;
        cin >> n;
        map<ll,ll> a;
        vector<ll> d;
        vector<ll> c;
        ll max = 0;
        ll no;
        ll s = 0;
        for (ll i = 0 ; i < n ; i++) {
            ll x;
            cin >> x;
            c.push_back(x);
            a[x]++;
            if (a[x] == 2) {
                d.push_back(x);
            }
            if (a[x] > max) {
                max = a[x];
                no = x;
            }
        }
        ll m = n / 2;
        ll dis = a.size();
        if (n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << 1 << endl;
        } else if (d.empty()) {
            cout << 1 << endl;
        } else {
            int ans = 0;
            for (ll i = 0 ; i < d.size() ; i++) {
                if (dis >= a[d[i]] - 1) {
                    if (ans < a[d[i]] - 1) {
                        ans = a[d[i]] - 1;
                    }
                } else {
                    if (ans < dis)
                        ans = dis;
                }
                if (a[d[i]] <= dis - 1) {
                    if (ans < a[d[i]]) {
                        ans = a[d[i]];
                    }
                } else {
                    if (ans < dis - 1) { 
                        ans = dis - 1;
                    }
                }
            }
            cout << ans << endl;
        }
        t--;
    }
    return 0;
}