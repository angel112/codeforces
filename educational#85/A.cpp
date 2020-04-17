#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n;
        cin >> n;
        ll pm = 0, cm = 0, dm = 0;
        ll p, c;
        bool state = true;
        for (ll i = 0 ; i < n ; i++) {
            cin >> p >> c;
            ll d = p-c;
            if (p < pm || c < cm) {
                state = false;
            } else if (p < c) state = false;
            else if (d < dm) state = false;
            else {
                pm = p;
                cm = c;
                dm = d;
            }

        }
        if (state) cout << "YES\n";
        else cout << "NO\n"; 
        t--;
    }
    return 0;
}