#include <bits/stdc++.h>

#define lli long long int
using namespace std;

int main() {

    lli n;
    int a;
    int c1 = 0, c2 = 0;
    vector<int> r;
    cin>>n;
    if (n >= 1 && n <= 100 ) {
        for (int i = 0 ; i < n ; i++) {
            int x; 
            cin>>x;
            r.push_back(x);
        }
        for (int i = 0 ; i < n ; i++) {
            int x; 
            cin>>x;
            if (x == 1) {
                r[i] += 2;
            }
            int b = r[i];
            if (b == 1) { 
                c1++;
            } else if (b == 2) {
                c2++;
            }
        }
        if (c1 == 0 ) {
            cout<<-1;
        } else {
            a = c2 / c1;
            a++;
            cout<<a;
        }
    }
    return 0;
}