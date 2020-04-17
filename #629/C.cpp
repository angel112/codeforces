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
        string x;
        cin >> x;
        ll l = x.length();
        string a(n, 0), b(n, 0);
        bool big = false;
        for (ll i = 0; i < l; i++)
        {
            char ch = x.at(i);
            if (ch == '0')
            {
                a.at(i) = '0';
                b.at(i) = '0';
            }
            else if (ch == '1')
            {
                if (big == false)
                {
                    a.at(i) = '1';
                    b.at(i) = '0';
                    big = true;
                }
                else
                {
                    a.at(i) = '0';
                    b.at(i) = '1';
                }
            }
            else
            {
                if (big == false)
                {
                    a.at(i) = '1';
                    b.at(i) = '1';
                }
                else
                {
                    a.at(i) = '0';
                    b.at(i) = '2';
                }
            }
        }
        cout << a << endl
             << b << endl;
        t--;
    }
    return 0;
}