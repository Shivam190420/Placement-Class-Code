#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i=0,n=s.size()-1;
    while(i<n)
    {
        if(((s[i]>='a' and s[i]<='z') or(s[i]>='A' and s[i]<='Z')) and ((s[n]>='a' and s[n]<='z') or(s[n]>='A' and s[n]<='Z')))
        {
            swap(s[i],s[n]);
            i++;
            n--;
        }
        if(!((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')))
            i++;
        if(!((s[n]>='a' and s[n]<='z') or (s[n]>='A' and s[n]<='Z')))
            n--;
    }
    cout<<s;
}