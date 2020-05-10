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
    ll n;
    cin >> n;
    vector<vi> a(3, vi(n));
    map<int, vi> m;
    fr(0, 3) {
        fn(0, n) {
            cin >> a[i][j];
        }
    }
    fr(0, n - 1) {
        int x, y;
        cin >> x >> y;
        m[x].pb(y);
        m[y].pb(x);
    }
    vi chain = {-1};
    fr(1, n + 1) {
        if (siz(m[i]) > 2) {
            cout << -1 ;
            return 0;
        } else if (siz(m[i]) == 1) {
            chain[0] = i;
        }
    }
    while (siz(chain) < n) {
        int g = siz(chain);
        int c = chain.back();
        for (int nxt : m[c]) {
            if (siz(chain) == 1 || chain[siz(chain) - 2] != nxt) {
                chain.pb(nxt);
                break;
            }
        }
    }
    ll mnscore = 2e18 + 5;
    vi bstpnt;

    fr (1, 4) {
        fn (1, 4) {
            vi paint(n + 1);
            ll score = 0;
            if (i == j) {
                continue;
            }
            int k = 6 - i - j;
            vl arr = {i, j, k};
            int y = 0;
            for (int b : chain) {
                score += a[arr[y % 3] - 1][b - 1];
                paint[b] = arr[y % 3];
                y++;
            }
            if (score < mnscore) {
                mnscore = score;
                bstpnt = paint;
            }
        }
    }

    cout << mnscore << endl;
    fr (1, n + 1) {
        cout << bstpnt[i] << " ";
    }
    return 0;
}