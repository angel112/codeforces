#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t > 0) {
        ll a, b, c, d;
        ll x, y, z;
        cin >> a >> b >> c >> d;
        x = b;
        y = c;
        z = c;

        // while (x + y <= z || y + z <= x || x + z <= y) {
        //     if (x + y <= z && c != z) 
        //         z = (c + z) / 2;
        //     if (x + z <= y && y != b) 
        //         y = (b + y) / 2;
        //     if (z + y <= x && a != x) 
        //         x = (a + x) / 2;
        // }  
        cout << x << " " << y << " " << z << endl;
        t--;
    }
    return 0;
}