#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> mp;
    vector<bool> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int count = 0;

    for (int i = 1; i < 31; i++)
    {
        int x = pow(2, i);
        for (int j = 0; j < n; j++)
        {
            if (b[j] == false)
            {

                int g = x - a[j];
                if (g > 0)
                {
                    if (mp[g] != 0)
                    {
                        if ((g == a[j] && mp[g] > 1) || g != a[j])
                        {

                            b[j] = true;
                            count++;
                            auto it = find(a.begin(), a.end(), g);
                            if (b[it - a.begin()] == false)
                            {
                                while (it != a.end())
                                {
                                    auto p = it - a.begin();
                                    b[p] = true;
                                    count++;
                                    it = find(it + 1, a.end(), g);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    int ans = n - count;

    cout << ans;

    return 0;
}