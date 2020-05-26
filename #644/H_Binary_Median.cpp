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
        int n, m;
        cin >> n >> m;
        vl b(n);
        vector<string> a(n);
        fr (0, n){
         cin >> a[i];
         ll x = 0;
         fn (0, m) {
             if (a[i][m - j - 1] == '1') {
                 x += pow (2, j);
             }
         }
         b[i] = x;
        }
        sort(all(b));

        ll y = pow(2, m) - n;
        ll ans = (y - 1) / 2;
        fr (0, n) {
            if (b[i] <= ans) {
                ans++;
            } else 
                break;
        }
        vi s(m);
        int j = 0;
        while (ans > 0) {
            s[j] = ans%2;
            ans /= 2;
            j++;
        }
        frn (m - 1, 0) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}