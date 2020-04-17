#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli t;
    cin >> t;
    while (t > 0) {

        lli n;
        cin >> n;
        vector<lli> tetris;
        lli odd = 0;
        lli even = 0;
        for (lli i = 0 ; i < n ; i++) {
            lli x;
            cin >> x;
            if ( x % 2 == 0)
                even++;
            else
                odd++;
        }
        if(even == 0 || odd == 0) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}