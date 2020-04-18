#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n, h, l, r;
    int ans = 0;
    cin >> n >> h >> l >> r;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i > 1)
            a[i] += a[i - 1];
    }

    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            ll s = a[i + 1] - j;
            dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + (((s % h) >= l && (s % h) <= r) ? 1 : 0));
            s--;
            dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + (((s % h) >= l && (s % h) <= r) ? 1 : 0));
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (ans < dp[n][i])
            ans = dp[n][i];
    }

    cout << ans;

    return 0;
}