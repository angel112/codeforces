#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli n;
    cin >> n;
    vector<lli> a, b;
    for (lli i = 0 ; i < n ; i ++) {
        lli x;
        cin >> x;
        a.push_back(x);
    }
    for (lli i = 0 ; i < n ; i ++) {
        lli x;
        cin >> x;
        b.push_back(x);
    }
    vector<lli> ii;
    for (lli i = 0 ; i < n ; i++) {
        ii.push_back(a[i] - b[i]);
    }
    return 0;
}