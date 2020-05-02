#include <bits/stdc++.h>

#define ll long long int
#define pii pair<int, int>
#define vl vector<int>
#define mii map<int, int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(n) for (ll i = 0; i < (ll)n; i++)
#define forn(i, s, f) for (int j = (int)s; j <= (int)f; j++)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, co = 0;
        cin >> n >> k;
        vl a;
        mii mp;
        int mx = 0;
        fr(n)
        {
            int x;
            cin >> x;
            mp[x]++;
            a.pb(x);
        }

        if (mp.size() > k)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto i : mp)
            {
                a.insert(a.begin(), i.first);
            }
            cout << k * n << endl;
            fr(n)
            {
                forn(j, 0, k - 1)
                {
                    cout << a[j] << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}