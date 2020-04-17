#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli n, h, l, r;
    cin >> n >> h >> l >> r;
    lli gd = 0, sc = 0, hour = 0;
    for (lli i = 0 ; i < n ; i++) {
        lli x;
        cin >> x;
        sc++;
        hour += x;
        
        if (hour >= l && hour <= r) {
            gd++;
        }
        else {
            if (((hour - r) > 0) && ((hour - r) <= sc)) {
                sc = sc - (hour - r);
                hour = r;
                gd++; 
            }  else {
                if (hour >= h)
                    hour -= h;
                if (hour >= l && hour <= r) 
                    gd++;    
                else if (((hour - r) > 0) && ((hour - r) <= sc)) {
                    sc = sc - (hour - r);
                    hour = r;
                    gd++;
                }
            }         
        }
        if (hour >= h)
            hour -= h;
    }
    cout << gd;
    return 0;
}