#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a)
        cin >> x;
 
    long long ans = 0;
 
    vector<long long> sums = {0};
    for (int x : a)
        sums.push_back(x + sums.back());
 
    int l = 0;
    set<long long> q = {0};
    for (int i = 1; i <= n; ++i) {
        while (q.find(sums[i]) != q.end())
            q.erase(sums[l++]);
        ans += i - l;
        q.insert(sums[i]);
        

    }
    cout << ans << endl;
    return 0;
}