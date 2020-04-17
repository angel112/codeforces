#include <bits/stdc++.h>

#define ll int

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n;
        cin >> n;
        map<ll, vector<ll>> mp;
        vector<vector<ll>> pre(201, vector<ll>(n + 1, 0));
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x].push_back(i);
            if (i >= 0)
            {
                ll j = 1;
                for (auto it = mp.begin(); it != mp.end(); ++it)
                {
                    pre[it->first][i + 1] = pre[it->first][i];
                }
                pre[x][i + 1]++;
            }
        }
        ll ans = 0;
        for (auto it1 = mp.begin() ; it1 != mp.end() ; ++it1) {
            ll s = it1->second.size();
            ans = max(ans, s);
            for (ll i = 0 ; i < s / 2 ; i++) {
                ll l = mp[it1->first][i] + 1;
                ll r = mp[it1->first][s - i - 1] - 1;
                for (auto it2 = mp.begin() ; it2 != mp.end() ; ++it2) {
                    ans = max(ans, (i + 1) * 2 + pre[it2->first][r + 1] - pre[it2->first][l]);
                }
            }
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}