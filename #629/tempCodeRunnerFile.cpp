#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        ll a, b;
        ll n, k;
        cin >> n >> k;
        if (k == n * (n - 1) / 2)
        {
            a = n - 1;
            b = n - 2;
        }
        else
        {

            b = 0;
            ll c = 0;
            for (a = 1; a < n; a++)
            {
                c = c + a;
                if (c > k)
                {

                    c = c - a;
                    for (b = 0; b < a; b++)
                    {
                        c++;
                        if (c == k)
                        {
                            break;
                        }
                    }
                }
                if (c == k)
                    break;
            }
        }
        string ans(n, 'a');
        ans.at(n - a - 1) = 'b';
        ans.at(n - b - 1) = 'b';
        cout << ans << endl;
        t--;
    }
    return 0;
}