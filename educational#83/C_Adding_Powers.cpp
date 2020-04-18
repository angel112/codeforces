#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        bool yes = true;
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        map<ll,ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
                continue;
            if (a[i] == a[i + 1])
            {
                yes = false;
                break;
            }
            ll y = a[i];
            ll x = (log10(y) / log10(k));
            x++;
            vector<ll> mu;
            yes = false;
            while (!yes && x >= 0)
            {
                if (mp[x] == 0)
                {
                    y = y - pow(k, x);
                    if (y == 0)
                    {
                        yes = true;
                        mu.push_back(x);
                    } else if (y > 0) {
                        mu.push_back(x);
                    } else {
                        y += pow(k, x);
                    }
                }
                x--;
            }
            if (yes) {
                for (ll j = 0 ; j < mu.size() ; j++) {
                    mp[mu[j]] = 1;
                }
                mu.clear();
            } else {
                break;
            }
        }
        if (yes) {
            cout << "YES\n";
        } else 
            cout << "NO\n";
    }
    return 0;
}