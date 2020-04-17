#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n;
    cin>>n;
    vector<long long int> b;
    vector<long long int> f;
    map<long long int, long long int> g;
    map<long long int, long long int>::iterator it;
    pair<long long int, long long int> h;
    h.first = 0;
    h.second = 0;
    for (int i = 1 ; i <= n ; i++) {
        long long int x;
        long long int y;
        cin>>x;
        b.push_back(x);
        y = i-x;
        f.push_back(y);
        it = g.find(y);
        if(it == g.end()) {
            g[y] = x;
        } else {
            g[y] += x;
        } 
        if(g[y] > h.second) {
            h.first = y;
            h.second = g[y];
        }
    }

    // cout<<h.first<<endl;
    cout<<h.second;

    return 0;
}