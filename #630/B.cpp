#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ll t;
    cin >> t;
    ll div[12] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    while (t > 0)
    {
        ll n;
        cin >> n;
        vector<ll> cm;
        bool visit[12];
        memset(visit, false, sizeof visit);
        ll cols[12];
        memset(cols, 0, sizeof cols);
        ll count = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            for (ll j = 1; j <= 11; j++)
            {
                if (x % div[j] == 0)
                {
                    if (visit[j] == false)
                    {
                        count++;
                        cols[j] = count;
                        visit[j] = true;
                    }
                    cm.push_back(j);
                    break;
                }
            }
        }
        cout << count << endl;
        for (ll i = 0 ; i < n - 1 ; i++) {
            cout << cols[cm[i]] << " ";
        }
        cout << cols[cm[n - 1]] << endl;
        t--;
    }
    return 0;
}