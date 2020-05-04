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
    int k = 2 * n - 2;
    vector<string> s(k);
    vector<string> a;
    fr(0, k) {
        cin >> s[i];
        if (siz(s[i]) == n - 1) {
            a.pb(s[i]);
        }
    }
    a[0] += a[1][n - 2];
    a[1] += a[0][n - 2];

    string x = "", y = "";
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    mii m1, m2;

    fr(0, k) {
        if (a[0].substr(0, siz(s[i])) == s[i] && m1[siz(s[i])] == 0) {
            x += 'P';
            c1++;
            m1[siz(s[i])]++;
        } else if (a[0].substr(n - siz(s[i]), siz(s[i])) == s[i]) {
            x += 'S';
            c3++;
        }
        if (a[1].substr(0, siz(s[i])) == s[i]  && m2[siz(s[i])] == 0) {
            y += 'P';
            c2++;
            m2[siz(s[i])]++;
        } else if (a[1].substr(n - siz(s[i]), siz(s[i])) == s[i]) {
            y += 'S';
            c4++;
        }
    }
    if (c1 == c3 && c1 == k / 2) {
        cout << x;
    } else if (c2 == c4 && c2 == k / 2) {
        cout << y;
    }
    return 0;
}