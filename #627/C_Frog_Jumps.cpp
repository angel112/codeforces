#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli t;
    cin >> t;
    while (t > 0) {
        string jump;
        cin >> jump;
        lli mj = 0, nj = 0;
        lli len = jump.length();
        for (lli i = 0 ; i < len ; i++) {
            nj++;
            char j = jump.at(i);
            if (j == 'R' ) {
                if (nj >= mj) {
                    mj = nj;
                }
                nj = 0;
            }
        }
        nj++;
        if (nj > mj) {
            mj = nj;
            nj = 0;
        }
        cout << mj << endl;
        t--;
    }
    return 0;
}