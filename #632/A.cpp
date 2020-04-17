#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll n, m;
        cin >> n >> m;
        ll a = n * m;
        if (a % 2 == 0)
        {
            ll b = -1;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if (i == 0 && j == 0)
                        cout << "B";
                    else
                    {
                        if (b == -1)
                            cout << "W";
                        else
                            cout << "B";
                    }
                    b = b * (-1);
                }
                cout << endl;
                if (m % 2 == 0) b = b * -1;
            }
        }
        else
        {

            ll b = 1;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if (b == -1)
                        cout << "W";
                    else
                        cout << "B";
                    b = b * -1;
                }
                cout << endl;
            }
        }
        t--;
    }
    return 0;
}