#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    map<char,int> m;
    for(auto &i:magazine)
        m[i]++;
    for(auto &i:ransomNote)
    {
        if(m[i]>0)
            m[i]--;
        else
        {
            cout<<"false";
            return 0;
        }
    }
        cout<<"true";
}