#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {
    lli counter = 0, i = 0;
    lli s;
    cin>>s;
    if (s >= 1 && s <= 100 ) {
        string str;
        cin >> str;


        while (i < s) {

            char ch = str[i];
            if (i == 0) {
                if (str[i] == str[i+1] + 1) {
                    str.erase(i,1);
                    s--;
                    counter++;
                }
                else
                    i++;
            }
            else if (i == s-1) {
                if (str[i] == str[i-1] + 1) {
                    str.erase(i,1);
                    s--;
                    counter++;
                }
                i++;
            }
            else if (str[i] == str[i+1] - 1) {
                while (str[i] == str[i+1] - 1 && i != s-1)
                    i++;
                str.erase(i,1);
                s--;
                counter++;
                i--;
            }
            else if (str[i] == str[i+1] + 1) {
                str.erase(i,1);
                s--;
                counter++;
                i--;
            }
            else if (str[i] == str[i-1] + 1) {
                str.erase(i,1);
                s--;
                counter++;
                i--;
            }
            else
                i++; 
            
        }
        cout<<counter;
    }
    return 0;
}

