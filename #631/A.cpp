#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n, x, a;
        cin >> n >> x;
        vector<ll> r(200, 0);
        for (ll i = 0 ; i < n ; i++) {
            cin >> a;
            r[a]++;
        }
        ll i = 1;
        while (x != 0 && i <= 200) {
            if (r[i] == 0) {
                r[i]++;
                x--;
            } 
            i++;
        }
        x = 1;
        while(x != 0 && i < 200) {
            if (r[i] == 0) 
                x = 0;
            else 
                i++; 
        }
        i--;
        cout << i << endl;
        t--;
    }
    return 0;
}