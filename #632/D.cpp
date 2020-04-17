#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    vector<int> nums = {2, 5, 6, 3, 15, 11};
    int target = 9;
    vector<int> a = nums;
    for (int i = 0 ; i < nums.size() ; i++) 
    {
        nums[i] = (nums[i] - target) * (-1);
    }
    int i = 0;
    vector<int> ans;
    int j = 0;
    while (j != 2)
    {
        auto it = find(nums.begin(), nums.end(), a[i]);
        if (it != nums.end())
        {
            ans.push_back(i);
            j++;
        }
        i++;
    }
    return 0;
}