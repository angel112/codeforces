#include <bits/stdc++.h>

#define ll long long int
#define pii pair <int, int>
#define vl vector<ll>
#define mii map<int,int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(n) for (ll i = 0 ; i < (ll)n ; i++)
#define forn(i, s, f) for (int i = (int)s; i < (int)f; i++)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int y = pow(2, n);
        ll x = pow(2, n + 1)  - 2;
        for (int i = 2 ; i <= n / 2 ; i++) {
            y += pow(2, i - 1);
        }
        int z = x - y;
        int ans = abs(z - y);
        cout << ans << endl;
    }
    return 0;

}