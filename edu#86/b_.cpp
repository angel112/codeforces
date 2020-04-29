#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    ll tt;
    cin >> tt;
    while (tt--) {
        string t;
        cin >> t;
        bool one = true;
        for(int i = 0 ; i < t.size() - 1; i++) {
            if (t[i] != t[i + 1]) {
                one = false;
            }
        }
        if (one) {
            cout << t << endl;
        } else {
            string s = "";
            for (int i = 0 ; i < t.size() ; i++) {
                s.append("10");
            }
            cout << s << endl;
        }
    }

    return 0;
}