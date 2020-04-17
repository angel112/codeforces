#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli t, n, k;
    cin >> t;
    while (t > 0) {
        cin >> n >> k;
        map<lli, lli> i;
        bool answer = true;
        for (lli j = 0 ; j < n ; j++) {
            lli x;
            cin>>x;
            if(x > pow(10,16))
                answer = false;
            if (x < (pow(2, 32) - 1)) {
                while (x != 0 && answer) {
                    float lx = log(x);
                    float lk = log(k);
                    float a = lx / lk;
                    a = floor(a);
                    if (i.find(a) != i.end()) {
                        answer = false;
                    } else {
                        lli y = pow(k,a);
                        x -= y;
                        i.insert(pair<lli,lli>(a,1));
                    }
                }
            } else {
                while (x != 0 && answer) {
                    double a = log(x) / log(k);
                    a = floor(a);
                    if (i.find(a) != i.end()) {
                        answer = false;
                    } else {
                        lli y = pow(k,a);
                        x -= y;
                        i.insert(pair<lli,lli>(a,1));
                    }
                }
            }
        }
        if (answer == true) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        t--;
    }
    return 0;
}