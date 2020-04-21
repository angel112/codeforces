#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll LLMIN = pow(10,9) * (-1);

int main()
{
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;

    while (t-- > 0)
    {
        ll n;
        cin >> n;
        ll p = 0, m = LLMIN, x = 0;
        ll ns = 0;

        vector<ll> a(n);
        vector<ll> ans;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
            {
                if (a[i] > 0)
                {
                    if (x == 1 && a[i] > p)
                    {
                        p = a[i];
                    }
                    else if (x == 0)
                    {
                        x = 1;
                        ans.push_back(m);
                        p = a[i];
                        m = LLMIN;
                    }
                }
                else
                {
                    if (x == 0 && a[i] > m)
                    {
                        m = a[i];
                    }
                    else if (x == 1)
                    {
                        x = 0;
                        ans.push_back(p);
                        m = a[i];
                        p = 0;
                    }
                }
            }
            else
            {
                if (a[i] > 0)
                {
                    x = 1;
                    p = a[i];
                }
                else
                {
                    x = 0;
                    m = a[i];
                }
            }
        }

        if (x == 0) {
            ans.push_back(m);
        } else {
            ans.push_back(p);
        }

            
        for (ll i = 0; i < ans.size(); i++)
        {
            ns += ans[i];
        }
        cout << ns << endl;
    }

    return 0;
}