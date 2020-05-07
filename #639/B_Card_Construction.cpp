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
        ll n;
        cin >> n;
        ll a = 3;
        ll b = 1;
        ll ans = 0;
        while (n > 0)
        {
            ll c = (-2) * n;
            double y = sqrt(1 - (12 * c));
            double x1 = (b*(-1) + y) / (2 * a);
            double x2 = (b*(-1) - y) / (2 * a);
            double x = max(x1, x2);
            x = floor(x);
            ll i = (x / 2) * (4 + ((x - 1) * 3));
            x++;
            ll j = (x / 2) * (4 + ((x - 1) * 3));
            if(j < n) {
                x = j;
            } else {
                x = i;
            }

            if (x == 0) {
                break;
            }
            n -= x;
            ans ++;
        }
        cout << ans << endl;
    }

    return 0;
}