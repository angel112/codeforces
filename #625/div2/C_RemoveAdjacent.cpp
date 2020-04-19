#include <bits/stdc++.h>

#define ll long long int

using namespace std;

string a;

int del(char ch)
{
    auto f = a.find(ch);
    int ans = 0;
    while (f != string::npos)
    {
        if (f != 0 && a[f - 1] == ch - 1) {
            a.erase(f, 1);
            f--;
            ans++;
        } else if (f != a.length() - 1 && a[f + 1] == ch - 1) {
            int i = 1;
            while (a[--f] == ch)   
                i++;
            f++;
            a.erase(f, i);
            f--;
            ans += i;
        }
        f = a.find(ch, f + 1);
    }
    return ans;
}

int main()
{
    ll count = 0, i = 0;
    ll n;
    ll x = 0;
    cin >> n;
    string str;
    cin >> str;
    string s = str;
    sort(s.begin(), s.end());
    // cout << s;
    while (true)
    {
        int ans = 0;
        for (ll i = s.length() - 1; i >= 0; i--)
        {
            char ch = s[i];
            x = 1;
            if (ch == 'a')
                break;
            auto j = s.find(ch);
            i = j;
            if (s[i - 1] == ch - 1)
            {
                a = str;
                ans += del(ch);
                str = a;
            }
        }
        if (ans == 0) {
            break;
        } else {
            count += ans;
        }
        s = str;
        sort(s.begin(), s.end());
    }
    cout << count;
    return 0;
}
