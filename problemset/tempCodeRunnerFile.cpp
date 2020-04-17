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
        if (s[i] == 'A') {
            if (s[i + 1] == 'B') {
                break;
            }
        } else if (s[i] == 'B') { 
            if (s[i + 1] == 'A') {
                l = true;
                break;
            }
        }
        i++;
    }
    i++;
    if (l) {
        while (i++ < s.length()) {
            if (s[i] == 'A') {
                if (s[i + 1] == 'B') {
                    cout << "YES";
                    return 0;
                }
            }
        }
    } else {
        while (i++ < s.length()) {
            if (s[i] == 'B') {
                if (s[i + 1] == 'A') {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}