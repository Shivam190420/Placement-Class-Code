#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int sum1=0,sum2=0;
    for(int i=0;i<=nums.size();i++)
        sum1+=i;
    for(int i=0;i<nums.size();i++)
        sum2+=nums[i];
    cout<<sum1-sum2;
}