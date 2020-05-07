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

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vl ar;
        int i = 0;
        ll x = 0;
        while (x < n) {
            x += pow(2, i);
            ar.pb(pow(2, i));
            i++;
        }
        x -= pow(2, i - 1);
        ar.pop_b();
        ll a = n - x;
        cout << siz(ar) << endl;
        if (a != 0) {
            ar.pb(a);
            sort(all(ar));
        }
        fr(1, siz(ar)) {
            cout << ar[i] - ar[i - 1] << " ";
        }
        cout << endl;


    }
    return 0;

}