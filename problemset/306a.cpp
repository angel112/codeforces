#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int i = 0;
    bool l = false;
    while (i < s.length() - 1)
    {
        if (s[i] == 'A')
        {
            if (s[i + 1] == 'B')
            {
                int j = i + 1;
                while (j++ < s.length())
                {
                    if (s[j] == 'B')
                    {
                        if (s[j + 1] == 'A')
                        {
                            cout << "YES";
                            return 0;
                        }
                    }
                }
            }
        }
        else if (s[i] == 'B')
        {
            if (s[i + 1] == 'A')
            {
                l = true;
                int j = i + 1;
                while (j++ < s.length())
                {
                    if (s[j] == 'A')
                    {
                        if (s[j + 1] == 'B')
                        {
                            cout << "YES";
                            return 0;
                        }
                    }
                }
            }
        }
        i++;
    }
    cout << "NO";
    return 0;
}