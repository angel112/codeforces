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
        int a, b, c;
        string s;
        cin >> a >> b >> c;
        int d = b;
        fr(0, c) s.pb('1');
        if (c != 0) s.pb('1');
        fr(0, a) {
            s.pb('0');
            if (c != 0)
                d = b - 1;
        }
        if (a != 0) s.pb('0');
        fr(0, d) {
            if (s.empty()) s.append("1");
            if (s.back() == '0')
                s.pb('1');
            else 
                s.pb('0');
        } 
        cout << s << endl;
    }
    
    return 0;
}