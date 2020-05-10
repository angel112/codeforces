#include <bits/stdc++.h>

#define ll long long int
#define pii pair<int, int>
#define vl vector<ll>
#define vi vector<int>
#define mii map<int, int>
#define pb push_back
#define pop_f pop_front
#define pop_b pop_back
#define ap append
#define fr(s, f) for (ll i = (ll)s; i < (ll)f; i++)
#define fn(s, f) for (ll j = (ll)s; j < (ll)f; j++)
#define frn(s, f) for (ll i = (ll)s; i >= (ll)f; i--)
#define fnr(s, f) for (ll j = (ll)s; j >= (ll)f; j--)
#define all(x) (x).begin(), (x).end()
#define siz(x) (int)(x).size()

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (n < k)
        {
            cout << "NO\n";
        }
        else
        {
            if (n % 2 == 0)
            {
                if (n >= 2 * k)
                {
                    cout << "YES\n";
                    int x = 0;
                    fr(0, k - 1)
                    {
                        cout << 2 << " ";
                        x += 2;
                    }
                    x = n - x;
                    cout << x << endl;
                }
                else
                {
                    if (k % 2 == 1)
                        cout << "NO\n";
                    else
                    {
                        cout << "YES\n";
                        int y = k - ((n - k) / 2);
                        fr(0, y)
                        {
                            cout << 1 << " ";
                        }
                        fr(y, k)
                        {
                            cout << 3 << " ";
                        }
                        cout << endl;
                    }
                }
            }
            else
            {
                if (n < k || k % 2 == 0)
                    cout << "NO\n";
                else
                {
                    if (k % 2 == 1)
                    {
                        cout << "YES\n";
                        int x = 0;
                        fr(0, k - 1)
                        {
                            cout << 1 << " ";
                            x += 1;
                        }
                        x = n - x;
                        cout << x << endl;
                    }
                    else
                    {
                        cout << "NO\n";
                    }
                }
            }
        }
    }

    return 0;
}