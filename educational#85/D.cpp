#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int i = 0, j = 0;
    int mx = 0;
    int cl = 0;
    vector<int> mp(128, 0);
    while (j < s.length())
    {
        char ch = s[j];
        if (mp[ch] == 0)
        {
            cl += 1;
            mp[ch] = j+1;
            if (mx < cl)
                mx = cl;
            j++;
        }
        else
        {
            int ta = mp[ch] - 1;
            while ((i != ta + 1) && j != s.size())
            {
                mp[s[i]] = 0;
                i++;
                mp[s[i]] = i + 1;
                if (mp[s[j]] != 0)
                {
                    if (ta < mp[s[j]] - 1)
                        ta = mp[s[j]] - 1;
                } else
                    mp[s[j]] = j + 1;
                j++;
            }
        }
    }
    return mx;
}

    int main()
    {
        string s = "busvutpwmu";
        int x = lengthOfLongestSubstring(s);
        cout << x;
        return 0;
    }