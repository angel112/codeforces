#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli t;
    cin >> t;
    while (t < 0) {
        lli n;
        cin >> n;
        vector<lli> arr;
        for (lli i = 0 ; i < n ; i++) {
            lli x;
            cin >> x;
            arr.push_back(x);

        }
        t--;
    }
    return 0;
}