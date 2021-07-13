#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    vector<int> c1(26, 0), c2(26, 0);
    for (auto c: s) 
        c1[c-'a'] ++;

    for (auto c: t) 
        c2[c-'a'] ++;
        
    if(c1 == c2)
        cout<<"true";
    else
        cout<<"false";
}