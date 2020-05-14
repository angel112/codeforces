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
    while (t--) {
        int n;
        cin >> n;
        vi a(n + 1);
        fr(1, n + 1) {
            cin >> a[i];
        }
        vi b(n + 1, 1);
        int ans = 1;

        fr (1, n + 1) {
            for (int j = i * 2 ; j <= n ; j += i) {
                if (a[i] < a[j]) {
                    b[j] = max(b[j], b[i] + 1);
                    if (b[j] > ans)
                        ans = b[j];
                }
            }
        }

        cout << ans << endl;
        
    }
    
    return 0;
}