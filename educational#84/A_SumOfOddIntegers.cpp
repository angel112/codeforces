#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n, k;
        cin >> n >> k;
        if (n % 2 != k % 2) {
            cout << "NO\n";
        } else {
            float x = sqrt(n);
            if (k <= x) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }

        t--;
    }
}