#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cout<<nums[i];
    int ans = 0;
    for(int i=0; i<nums.size(); i++) 
    {
        ans = ans^nums[i];
    }
    cout<<ans;
}