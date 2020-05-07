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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        sort(all(s));
        mii m;
        if (k == 1)
        {
            cout << s << endl;
            continue;
        }
        fr(0, n) m[s[i] - 97]++;
        int sz = siz(m);
        if (s[0] != s[k - 1])
        {
            cout << s[k - 1] << endl;
        }
        else
        {
            if (sz == 1 || (sz == 2 && s[k] != s[k - 1]))
            {
                int i = 0;
                cout << s[k - 1];
                while (k + i < n)
                {
                    if (i % k == 0)
                        cout << s[k + i];
                    i++;
                }
            }
            else
            {
                fr(k - 1, n) cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}