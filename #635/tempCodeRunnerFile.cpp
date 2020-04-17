#include <bits/stdc++.h>

#define ll long long int

using namespace std;

map<int, vector<int>> m;
vector<pair<int, int>> sz;
vector<pair<int, int>> lvl;

int szt(int n, int c, int l)
{

    if (m[n].size() == 1 && n != 1)
    {
        lvl.push_back(make_pair(l, n));
        return 0;
    }

    int a = 0;
    for (int i = 0; i < m[n].size(); i++)
    {
        if (m[n][i] != c)
        {
            a += szt(m[n][i], n, l + 1);
            m[m[n][i]].push_back(n);
        }
    }
    a += m[n].size() - 1;
    if (n == 1)
    {
        a++;
    }
    sz.push_back(make_pair(a, n));
    lvl.push_back(make_pair(l, n));
    return a;
}

int main()
{
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

    int x = szt(1, -1 , 0);
    m[1].push_back(-1);
    sort(sz.begin(), sz.end());
    sort(lvl.begin(), lvl.end());
    vector<pair<int, int>> r = sz;
    vector<pair<int, int>> l = lvl;
    // map<int, vector<int>> mm = m;
    int y = n - k;
    int ans = 0;
    vector<bool> t(n + 1, false);
    int i = r.size() - 1;
    while (i >= 0 && y > 0)
    {
        t[r[i].second] = true;
        y--;
        i--;
    }
    if (y > 0) {
        i = 0;
        while (y > 0) {
            if (t[l[i].second] == false) {
                t[l[i].second] = true;
                y--;
            }
            i++;
        } 
    }
    y = n - k ;
    int p = r.size() - 1;
    ans = 0;
    for (int i = 1 ; i < t.size() ; i++) {
        if (t[i] == false) {
            int g = i;
            while (g != 1) {
                int h = m[g][m[g].size() - 1];
                if (t[h] == true)
                    ans++;
                g = h;
            }
        }
    }
    cout << ans;

    return 0;
}