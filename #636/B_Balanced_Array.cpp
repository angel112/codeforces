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
        if ((n / 2) % 2 == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            ll j = 1;
            for (ll i = 1 ; i < n ; i++) {
                if (i <= n / 2) {
                    cout << i * 2 << " ";
                } else {
                    cout << ((j * 2) - 1) << " ";
                    j++;
                }
            }
            cout << ((j * 2) - 1) + (n / 2) << endl;

        }

    }

    return 0;

}