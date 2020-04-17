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
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            ll c = a / b;
            c++;
            c = c * b;
            c = c - a;
            cout << c << endl;
        }
        t--;
    }
    return 0;
}