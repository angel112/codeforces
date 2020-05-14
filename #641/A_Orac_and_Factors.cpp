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
        int n, k;
        cin >> n >> k;
        int d = 2;
        if (n % 2 == 0)
            d = 2;
        else 
            d = 3; 
        while (d * d <= n && d != 2) {
            if (n % d == 0) {
                break;
            }
            d += 2;
        }
        if (d * d > n) 
            d = n;
        n += d;
        n += (k - 1) * 2;
        cout << n << endl;
    }
    return 0;
}