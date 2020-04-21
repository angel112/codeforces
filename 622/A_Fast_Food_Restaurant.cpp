#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin >> t;

    while (t-- > 0) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        sort(a.begin(), a.end());
        int ans = 7;
        if (a[0] >= 4) {
            cout << ans << endl;
        } else if (a[0] == 3) {
            cout << 6 << endl;
        } else if (a[0] == 2) {
            if (a[1] == 2 && a[2] == 2)
                cout << 4 << endl;
            else
                cout << 5 << endl; 
        } else if (a[0] == 1) {
            if (a[1] == 1)
                cout << 3 << endl;
            else
                cout << 4 << endl;
        }
        else if (a[0] == 0) {
            if (a[1] == 0 && a[2] == 0) 
                cout << 0 << endl;
            else if (a[1] == 1)
                cout << 2 << endl;
            else if (a[1] == 0)
                cout << 1 << endl;
            else
                cout << 3 << endl;
        }
    }
    return 0;
}