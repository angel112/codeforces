#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int im = 100000;
int mx = 0, mn = 1, n, x;
vector<vector<int>> m(im + 1, vector<int>(1));

void dfs(int n, int s, int l) {
    if (l != -1) {
        if (m[n][0] == 0) {
            x--;
            if (s % 2 == 1) {
                mn = 3;
            }
        } 
    }
    // cout << x << endl;
    s++;
    int j = 0;
    for (int i = 1 ; i < m[n].size() ; i++) {
        if (m[n][i] != l ) {
            int r = x;
            x++;
            dfs(m[n][i], s, n);
            if (x == r ) 
                j++;
        }
    }
    if (j > 0 && s != 2) {
        x++;
    }
    // cout << x << " " << s << endl;
}

int main() {
    ios::sync_with_stdio(0);
    
    int n;
    cin >> n;
    for (int i = 0 ; i < n - 1 ; i++) {
        ll u, v;
        cin >> u >> v;
        m[u].push_back(v);
        m[v].push_back(u);
        if (m[u].size() > 2) 
            m[u][0] = 1;
        if (m[v].size() > 2)
            m[v][0] = 1;
    }
    for (int i = 1 ; i <= n ; i++) {
        if (m[i][0] == 0) {
            x = 0;
            dfs(i, 0, -1);
            if (x > mx)
                mx = x;
            break;
        }
    }

    cout << mn << " " << mx;


    return 0;
}