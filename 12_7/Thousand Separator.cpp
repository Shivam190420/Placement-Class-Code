#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int k=n;
    while(n)
    {
        int n1=n%10;
        v.push_back(n1);
        n=n/10;
    }
    if(v.size()<4)
        return to_string(k);
    string s="";
    int j=v.size();
    for(int i=v.size()-1;i>=0;i--)
    {
        s+=to_string(v[i]);
        j--;
        if(j%3==0 and j!=0)
        {
            s+=".";
        }
    }
    cout<<s;
}