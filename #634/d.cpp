#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t > 0) {
        vector<string> sud;
        for (ll i = 0 ; i < 9 ; i++) {
            string s;
            cin >> s;
            auto found = s.find('1');
            s[found] = '2';
            sud.push_back(s);
        } 
        for (ll i = 0 ; i < 9 ; i++) {
            cout << sud[i] << endl;
        }
        t--;
    }
    return 0;
}