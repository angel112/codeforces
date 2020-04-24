#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n+1);
        // vector<pair<int, int>> p;
        vector<bool> pk(n + 1);
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            if (i >= 3) {
                if (a[i] < a[i - 1] && a[i- 2] < a[i - 1]) {
                    // p.push_back(make_pair(a[i - 1], i - 1));
                    pk[i - 1] = true;
                }
            }
        }
        int l, r;
        l = 1;
        r = l + k - 1;
        int ans = 0;;
        for (int i = 2 ; i < r ; i++) {
            if (pk[i] == true) {
                ans++;
            }
        }
        l++;
        r++;
        int x = ans;
        int peak = 1;
        while (r <= n) {
            if (pk[l] == true)
                x--;
            if (pk[r - 1] == true)
                x++;
            if (x > ans) {
                ans = x;
                peak = l;
            }
            l++;
            r++;
        }
        cout << ans+1 << " " << peak << endl;
    }
    return 0;
}