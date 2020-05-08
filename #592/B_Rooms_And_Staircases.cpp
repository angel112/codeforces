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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0;
        int a = 0, b = 0;
        if (s[0] == '1' || s[n - 1] == '1')
        {
            cout << 2 * n << endl;
        }
        else
        {
            fr(0, n)
            {
                if (s[i] == '1') {
                    b = i + 1;
                    x++;
                    if (x == 1) {
                        a = i;
                    }
                }
            }
            if (a != 0) {
                a = (n - a) * 2;
                b = b * 2;
            }
            cout << max(max(a,b), n + x) << endl;
        }
    }
    return 0;
}