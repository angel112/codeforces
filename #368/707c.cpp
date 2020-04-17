#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main() {
    ios::sync_with_stdio(0);

    ll n;
    cin >> n;
    ll a, b;
    if (n == 1 || n == 2) {
        cout << -1;
    } else {
        if (n % 2 == 0) {
            a = pow(n, 2) / 4;
            b = a;
            a--;
            b++;
        } else {
            a = pow(n, 2);
            b = a;
            a--;
            b++;
            a /= 2;
            b /= 2;
        }
        cout << a << " " << b;
    }
    return 0;
}