#include <bits/stdc++.h>

#define ll long long int
#define pii pair <int, int>
#define vl vector<ll>
#define vi vector<int>
#define mii map<int,int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(s, f) for (ll i = (ll)s ; i < (ll)f ; i++)
#define fn(s, f) for (ll j = (ll)s; j < (ll)f; j++)
#define frn(s, f) for (ll i = (ll)s; i >= (ll)f; i--)
#define fnr(s, f) for (ll j = (ll)s; j >= (ll)f; j--)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vi a(n);
    fr(0, n) cin >> a[i];
    sort(all(a));
    frn(n - 1, 2) {
        if (a[i - 2] + a[i - 1] > a[i]) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;

}