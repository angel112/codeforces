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
        int n;
        cin >> n;
        vi a(n);
        fr(0, n)
        {
            cin >> a[i];
        }
        ll c = 0, b = 0;

        int x = 0;
        int y = n - 1;
        int m = 0, v = 0;
        bool chance = false;
        int tot = 0;
        while (x <= y)
        {
            int u;
            if (chance == false)
            {
                u = x;
                while (m <= v && u <= y)
                {
                    m += a[u];
                    u++;
                }
                c += m;
                x = u;
                chance = true;
            }
            else
            {
                u = y;
                 while (m <= v && u >= x)
                {
                    m += a[u];
                    u--;
                }
                b += m;
                y = u;
                chance = false;
            }
            v = m;
            m = 0;
            tot++;
        }
        cout << tot << " " << c << " " << b << endl;
    }

    return 0;
}