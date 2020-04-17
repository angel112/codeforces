#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n, a, b;
        cin >> n >> a >> b;
        string ans = "";
        if (a == b) {
            char ch = 'a';
            for (ll i = 0 ; i < n ; i++) {
                ll j = i % 26;
                ans += ch + j;
            }
        } else {
            char ch = 'a';
            ll j = 0;
            for (ll i = 0 ; i < a ; i++) {
                if (j >= b) {
                    j = 0;
                }
                ans += ch + j;
                j++;
            }
            j = 0;
            for (ll i = a ; i < n ; i++) {
                ans += ans[j];
                j++;
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}