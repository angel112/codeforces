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
        vector<ll> a(n);
        vector<ll> b(n);
        ll l = 1000000000000;
        ll tar;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            if (a[i] < l)
                l = a[i];
            tar = i;
        }
        a.push_back(a[0]);
        b.push_back(b[0]);
        ll killed = 0;
        ll shots = 0;
        while (killed != n)
        {
            shots += l;
            killed++;
            a[tar] = 0;
            bool ck = true;
            while (a[tar + 1] != 0 && ck)
            {
                a[tar + 1] -= b[tar];
                if (a[tar + 1] <= 0)
                {
                    killed++;
                    ck = true;
                }
                else
                {
                    if (a[tar + 1] < l)
                    {
                        ck = false;
                    }
                }
                if (tar != n)
                    tar = tar + 1;
                else
                {
                    a[0] = a[n];
                    tar = 0;
                
            }
        }

        t--;
    }
    return 0;
}