#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;
    while (t--) {
        ll x, y, a, b;
        ll ans = 0;
        cin >> x >> y >> a >> b;
        ll p = abs(x - y);
        ans += p * a;
        p = (x <= y) ? x : y;
        ans += min(p * b, 2 * (p * a));
        cout << ans << endl;
    }

    return 0;
}