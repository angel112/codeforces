#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;

    while (t-- > 0) {
        ll n;
        cin >> n;
        ll i = 2;
        while (true) {
            ll x = pow(2, i) - 1;
            if (n % x == 0) {
                x = n / x;
                cout << x << endl;
                break;
            }
            i++;
        }
    }

    return 0;
}