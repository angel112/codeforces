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
        ll n;
        cin >> n;
        vi a(n + 1, 0);
        int l = 1;
        int r = n;
        map<int, priority_queue<int, vector<int>, greater<int>>> m;
        int g;
        if (n % 2 == 0)
            g = (l + r - 1) / 2;
        else
            g = (l + r) / 2;
        a[g] = 1;
        m[g - l].push(l);
        m[r - g].push(g + 1);
        auto it = m.rbegin();
        l = m[it->first].top();
        r = it->first + l - 1;

        fr(2, n + 1)
        {
            if (it->first % 2 == 0)
                g = (l + r - 1) / 2;
            else
                g = (l + r) / 2;
            a[g] = i;
            m[g - l].push(l);
            m[r - g].push(g + 1);
            m[it->first].pop();
            if (m[it->first].empty())
                m.erase(it->first);
            it = m.rbegin();
            l = m[it->first].top();
            r = it->first + l - 1;
        }

        fr(1, n + 1)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}