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
    ll n, p, w, d;
    cin >> n >> p >> w >> d;
    ll x, y, z;
    bool a = false;
    fr(0, w) {
        x = p - (i * d);
        if (x % w == 0) {
            x = x / w;
            if (x >= 0 && i + x <= n) {
                y = i;
                a = true;
                break;
            }
        }
    }
    if (a) {
        z = n - (y + x);
        cout << x << " " << y << " " << z;
    } else {
        cout << -1;
    }
    return 0;
}