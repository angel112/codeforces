#include <bits/stdc++.h>

#define ll long long int

using namespace std;

map<int, vector<int>> m;
vector<int> sz;

int szt(int n, int c) {

    if (m[n].size() == 1 && n != 1) 
        return 0;
    
    int a = 0;
    for (int i = 0 ; i < m[n].size() ; i++) {
        if (m[n][i] != c) {
            a += szt(m[n][i], n);
        }
    }
    a += m[n].size() - 1;
    sz.push_back(a);
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

    int x = szt(1, -1);
    sort(sz.begin(), sz.end());


    return 0;
}