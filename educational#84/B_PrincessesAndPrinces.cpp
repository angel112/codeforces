#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n;
        cin >> n;
        bool im = false;
        vector<ll> k(n + 1, 0);
        ll a, b;
        int f = 0;
        for (int i = 1; i <= n; i++)
        {
            ll x, y;
            cin >> x;
            bool m = false;
            for (int j = 0; j < x; j++)
            {
                cin >> y;
                if (k[y] == 0 && m == false)
                {
                    k[y] = 1;
                    m = true;
                }
            }
            if (m == false && im == false)
            {
                a = i;
                im = true;
            }
        }
        if (im == false)
        {
            cout << "OPTIMAL\n";
        }
        else
        {
            vector<ll>::iterator it;
            it = find(k.begin() + 1, k.end(), 0);
            if (it != k.end())
            {
                ll index = it - k.begin();
                b = index;
                cout << "IMPROVE\n";
                cout << a << " " << b << endl;
            }
        }
    t--;
    }
    return 0;
}