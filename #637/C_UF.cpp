#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        vector<int> b(n + 1, 1);
        vector<bool> c(n + 1);
        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            p[x] = i;
            if (x == 1)
            {
                c[i] = true;
            }
            a[i] = i;
        }
        a[p[1]] = 0;
        b[p[1]] = 0;
        bool ans = true;
        int i = 2;
        while (ans && i <= n)
        {
            int mx = 1;
            int j = p[i - 1];
            if (j != n)
            {
                int h = a[j + 1];
                while (c[j] == true)
                {
                    b[a[j]]--;
                    a[j] = h;
                    b[h]++;
                    j--;
                }
                if (b[h] > mx && h != 0)
                    mx = b[h];
            }
            if (b[p[i]] == mx)
            {
                ans = true;
                c[p[i]] = true;
            }
            else
                ans = false;
            i++;
        }
        if (ans)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}