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
        int a, b, c;
        cin >> a >> b >> c;
        int i = a + b + c;
        int e = a, f = b, g = c;
        int x = min(a, b / 2);
        a -= x;
        b -= 2 * x;
        x = min(b, c / 2);
        b -= x;
        c -= 2 * x;
        x = min(f, g / 2);
        f -= x;
        g -= x * 2;
        x = min(e, f / 2);
        e -= x;
        f -= x * 2;
        int ans = max(i - (a + b + c), i - (e + f + g));
        cout << ans << endl;
    }
    return 0;
}