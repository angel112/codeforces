#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x, y, x1, x2, y1, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        ll xx, yy;
        xx = x - a + b;
        yy = y - c + d;
        if (xx >= x1 && xx <= x2 && yy >= y1 && yy <= y2 && (x2 > x1 || a + b == 0) && (y2 > y1 || c + d == 0)) {
            cout << "Yes\n";
        } else cout << "No\n";
        t--;
    }
    return 0;
}