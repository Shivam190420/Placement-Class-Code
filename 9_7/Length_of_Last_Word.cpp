#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;
    int n=s.size()-1;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]==' ')
            n--;
        else
            break;
    }
    for(int i=n;i>=0;i--)
    {
        if(s[i]!=' ')
            c++;
        else
            break;
    }
    return c;
}