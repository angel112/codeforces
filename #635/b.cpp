#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll x, n, m;
        cin >> x >> n >> m;
        if (x <= m * 10)
        {
            cout << "YES\n";
        }
        else
        {
            while (x > m * 10 && n > 0)
            {
                x = x / 2;
                x += 10;
                n--;
            }
            if (x <= m * 10) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }

        t--;
    }
    return 0;
}