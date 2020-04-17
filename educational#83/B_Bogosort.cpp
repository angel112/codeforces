#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {

    lli t, n;
    cin >> t;
    while (t > 0) {
        cin >> n;
        vector<lli> arr;
        for (lli i = 0 ; i < n ; i++) {
            lli x;
            cin>>x;
            arr.push_back(x);
        }

        sort(arr.begin(), arr.end(), greater<lli>());

        for (lli i = 0 ; i < n ; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        t--;
    }
    return 0;
}