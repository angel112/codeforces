#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> m(200001, vector<int>(2));
vector<int> z;

int dfs(int n, int l, int s) {
    m[n][1] = m[n].size() - 2;
    if (n != 1 && m[n][1] == 1) {
        z.push_back(0 - s);
        return 0;
    }
    int y = 0;
    for (int i = 0 ; i < m[n][1] ; i++) {
        int x = m[n][i + 2];
        if(x != l) {
            y++;
            m[x][0] = n;
            y += dfs(x, n, s + 1);
        }
    }
    z.push_back(y - s);
    return y;
}


int main() {
    ios::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
    }
    
    dfs(1, 0, 0);
    vector<int> zz = z;
    sort(zz.begin(), zz.end());
    int q = n - k;
    int i = zz.size() - 1;
    long long ans = 0;
    while (q > 0) {
        ans += zz[i];
        i--;
        q--;
    }
    cout << ans;
    return 0;
}