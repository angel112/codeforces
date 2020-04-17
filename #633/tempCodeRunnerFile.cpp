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
        ll n;
        cin >> n;
        ll mx = 0;
        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            if (i > 0)
            {
                ll j = 0;
                if (mx > 0)
                {
                    b[i] += pow(2, mx) - 1;
                    j = mx;
                }
                while (b[i] < a[i - 1] || b[i] < b[i - 1])
                {
                    b[i] += pow(2, j);
                    j++;
                }
                if (j > mx)
                    mx = j;
                j = mx - 1;
                while (j > 0)
                {
                    b[i] -= pow(2, j);
                    if (b[i] < a[i - 1] || b[i] < b[i - 1])
                    {
                        b[i] += pow(2, j);
                    }
                    j--;
                }
                if (j > mx)
                    mx = j;
            }
        }
        cout << mx << endl;
        t--;
    }
    return 0;
}