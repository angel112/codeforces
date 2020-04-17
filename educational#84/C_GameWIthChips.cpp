#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll x, y;
    for (int i = 0 ; i < 2*k ; i ++ ) cin >> x >> y;
    string ans(n-1, 'U');
    for (int i = 0 ; i < m - 1 ; i++) ans.push_back('L');
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m - 1 ; j++) {
            if(i % 2 == 0) ans.push_back('R');
            else ans.push_back('L');
        }
        if (i != n-1) ans.push_back('D');
    }

    cout << ans.length() << endl << ans;
    return 0;
}
