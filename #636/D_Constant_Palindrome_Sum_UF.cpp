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
        ll v = n / 2;
        vector<int> a(n + 1);
        vector<int> s(v + 1);
        map<int,int> mp;
        int j = 1; 
        int x, y;
        int mx = INT_MAX, mn = INT_MIN;
        for (int i = 1 ; i <= n ; i++) {
            cin >> a[i];
            if (i > v) {
                if (a[i] <= s[i - j]) {
                    x = a[i];
                    y = s[i - j];
                } else {
                    x = s[i - j];
                    y = a[i];
                }
                if (x + 1 > mn)
                    mn = x + 1;
                if (y + k < mx)
                    mx = y + k;
                s[i - j] += a[i];
                j = j + 2;
            } else {
                s[i] += a[i];
            }
        }
        int m = 0;
        int c= 0;
        for (int i = 1 ; i <= v ; i++) {
            if (s[i] >= mn && s[i] <= mx) {
                c++;
                mp[s[i]]++;
                if (mp[s[i]] > m) {
                    m = mp[s[i]];
                }
            }
        }
        int ans = 0;
        ans += 2 * (v - c);
        ans += c - m;
        cout << ans << endl;
    }
    return 0;
}