#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli t;
    cin>>t;
    lli n, m;
    while (t>0) {
        cin>>n>>m;
        if (n % m == 0) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
        t--;
    }

    return 0;
}