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
        if (n < 4) {
            cout << -1 << endl; 
            continue;
        }
        int a = n;
        if (a % 2 == 0)
            a = n - 1;
        while (a >= 1) {
            cout << a << " ";
            a -= 2;
        } 
        cout << 4 << " " << 2 << " ";
        a = 6;
        while (a <= n) {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
    
    return 0;
}