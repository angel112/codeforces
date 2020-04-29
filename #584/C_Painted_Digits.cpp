#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> s1;
        string s2 = "";
        map<int, vector<int>> mp;
        for (int i = 0 ; i < n ; i++) {
            mp[s[i] - 48].push_back(i);
        }
        int x = -1, y = -1;
        for (int i = 0 ; i < 10 ; i++) {
            vector<int> m = mp[i]; 
            if(!m.empty()) {
                for (int j = 0 ; j < m.size() ; j++) {
                    if (s1.size() == 0) {
                        s1.push_back(m[j]);
                        x = m[j];
                    } else {
                        if (m[j] > x) {
                            s1.push_back(m[j]);
                            x = m[j];
                        } else {
                            y = i;
                        }
                    }
                }
                if (y != -1) {
                    break;
                }
            }
        }
        // if (y != -1) {
        //     for (int i = y ; i < 10 ; i++) {
        //         vector<int> m = mp[i];
        //         int j;
        //         if (y != -1) {
        //             j = x  + 1;
        //             y = -1;
        //         } else {
        //             j = 0;
        //         }
        //         x = m[j];
        //         for (; j < m.size() ; j++) {
        //             if (m[j] < x) {
        //                 y = 1;
        //                 break;
        //             } else {
        //                 x = m[j];
        //             }
        //         }
        //         if (y == 1) {
        //             break;
        //         }
        //     }
        // }
        x = 0;
        int k = 0, l = -1;
        for (int i = 0 ; i < n ; i++) {
            if (k < s1.size() && s1[k] == i) {
                s2.append("1");
                k++;
            } else if (s[i] >= l) {
                s2.append("2");
                l = s[i];
            } else {
                x = 12;
                break;
            } 
        }
        if (x == 12) {
            cout << "-\n";
        } else {
            cout << s2 << endl;
        }
    }

    return 0;
}