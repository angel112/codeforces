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

double PI = 3.14159265359;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n *= 2;
        double x = PI / n;
        double s = sin(x);
        double c = cos(x);
        double r = 1 / (2 * s);
        double a = r * c;
        cout << fixed << setprecision(8);
        if ((n / 2) % 2 == 0) {
            cout << a * 2 << endl;
        } else {
            r = cos(x / 2) / sin(x);
            cout << r << endl;
        }
    }
    return 0;
}