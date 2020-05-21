#include <bits/stdc++.h>

#define ll long long int
#define pii pair<int, int>
#define vl vector<ll>
#define vi vector<int>
#define mii map<int, int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(s, f) for (ll i = (ll)s; i < (ll)f; i++)
#define fn(s, f) for (ll j = (ll)s; j < (ll)f; j++)
#define frn(s, f) for (ll i = (ll)s; i >= (ll)f; i--)
#define fnr(s, f) for (ll j = (ll)s; j >= (ll)f; j--)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vi f;
        vi a(4, -1);
        ll l = siz(s);
        ll ans = 0;
        fr(0, l)
        {
            char ch = s[i];
            if (a[ch - 48] == -1)
            {
                f.pb(ch - 48);
            }
            a[ch - 48] = i;
            if (siz(f) == 3)
            {
                ll x = a[f[2]] - min(a[f[0]], a[f[1]]) + 1;
                if (ans > x || ans == 0)
                    ans = x;
                if (ans == 3)
                {
                    break;
                } 
                ll y = a[f[0]] < a[f[1]] ? 0 : 1;
                a[f[y]] = -1;
                f.erase(f.begin() + y);
            }
        }
        cout << ans << endl;
    }
return 0;
}