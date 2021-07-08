#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> strs(n);
    for(int i=0;i<n;i++)
        cin>>strs[i];
    if(strs.size()==0)
    {
        cout<<"";
        return 0;
    }
    if(strs.size()==1)
    {
        cout<<strs[0];
        return 0;
    }
    string s;
    for(int i=0;i<min(strs[0].size(),strs[1].size());i++)
        {
            if(strs[0][i]==strs[1][i])
                s+=strs[0][i];
            else
                break;
        }
    for(int i=2;i<strs.size();i++)
    {
        string temp;
        int k=0;
        while((k<s.size()) and (s[k]==strs[i][k]))
        {
            temp+=strs[i][k];
            k++;
        }
        s=temp;
    }
    cout<<s;   
}