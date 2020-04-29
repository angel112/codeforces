#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, q;
        cin >> a >> b >> q;
        if (a > b)
        {
            ll t = a;
            a = b;
            b = t;
        }
        ll lcm = (a * b) / gcd(b, a);
        string ans = "";
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (b % a == 0)
            {
                ans.append("0 ");
                continue;
            }
            ll c = 0;
            ll sl = (l / lcm);
            ll hl = (r / lcm);
            ll lc = sl * lcm;
            if (l >= lc && l < lc + b)
            {
                c += min(r + 1, lc + b) - l;
            }
            sl++;
            ll v = hl - sl;
            if (v >= 0)
            {
                c += v * b;
                lc = hl * lcm;
                c += min(lc + b, r + 1) - lc;
            }
            ll k = (r - l + 1) - c;
            ans.append(to_string(k));
            ans.append(" ");
        }
        cout << ans << endl;
    }

    return 0;
}