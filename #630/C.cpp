#include <bits/stdc++.h>

#define ll long long int

using namespace std;

char seg(ll x, ll diff, string str) {
    char ch = str.at(x + diff);
    return ch;
}

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        ll n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        ll a = n / k;
        ll s[a];
        ll b = 0;
        for (ll i = 0 ; i < a ; i++) {
            s[i] = b;
            b += k;
        }
        ll w[k];
        memset(w, 0, sizeof w);
        for (ll i = 0 ; i < k ; i++) {
            for (ll j = 0 ; j < a ; j++) {
                
            }
        }
        t--;
    }
    return 0;
}