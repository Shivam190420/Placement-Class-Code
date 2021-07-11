#include <bits/stdc++.h>
using namespace std;

int roman(char atr)
{
    if(atr=='I')
        return 1;
    else if(atr=='V')
        return 5;
    else if(atr=='X')
        return 10;
    else if(atr=='L')
        return 50;
    else if(atr=='C')
        return 100;
    else if(atr=='D')
        return 500;
    else if(atr=='M')
        return 1000;
    else
        return 0;
}

int main()
{
    string s;
    cin>>s;
    int val=0;
    for(int i=0;i<s.size();i++)
    {
        if(roman(s[i])>=roman(s[i+1]))
            val+=roman(s[i]);

        else
        {
            val+=roman(s[i+1])-roman(s[i]);
            i++;
        }
    }
    cout<<val;
}