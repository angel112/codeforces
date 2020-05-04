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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int x = n / k;
        int l = 0;
        fr(0, k - 1) {
            char ch = 97 + i;
            fn(0, x) {
                cout << ch;
                l++;
            }
        }
        char ch = 96 + k; 
        while (l < n) {
            cout << ch;
            l++;
        }
        cout << endl;
    }
    return 0;

}