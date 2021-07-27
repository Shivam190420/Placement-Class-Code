#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> ans(n+1);
    for(int i = 1; i <= n; ++i) 
        ans[i] = ans[i/2]+ (i & 1);
    for(int i=0;i,ans.size();i++)
        cout<<ans[i];
}