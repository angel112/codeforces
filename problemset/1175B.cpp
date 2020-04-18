#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll n;
    cin >> n;
    ll u = pow(2, 32) - 1, j = 1, ln = 0, x = 0, lm, jj;
    bool of = false, ov = true;;
    vector<int> d;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "add" && ov)
        {
            if (of == true) {
                ov = false;
            } else {
                x += j;
                if (x > u) {
                    ov = false;
                }
            }
        }
        else if (s == "end" && ov)
        {
            ln--;
            if (of) {
                if (ln == lm) {
                    lm = -1;
                    of = false;
                }
            } else {
                j /= d[d.size() - 1];
            }
            d.erase(d.end() - 1);
        }
        else if (s == "for" && ov)
        {
           cin >> jj;
           if (u < j * jj) {
               if (of == false) {
                   lm = ln;
               }
               of = true;
           } else {
               j *= jj;
           }
           d.push_back(jj);
           ln++;
        }
    }

    if (ov == false)
        cout << "OVERFLOW!!!";
    else
        cout << x;
    return 0;
}