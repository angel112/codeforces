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
        ll n, k;
        cin >> n >> k;
        ll i = 1;
        ll x = 0;
        int f = 0;
        while (i * i <= n && i <= k) {
            if (n % i == 0) {
                if (n / i > k) {
                    x = i;
                } else {
                    f = 1;
                    x = i;
                    break;
                }
            }
            i++;
        }

        if (f == 1)
            cout << x << endl;
        else 
            cout << n / x << endl;
    }
    return 0;
}