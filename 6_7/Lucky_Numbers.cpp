#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<vector<int> > mat;
    int ma,mi;
    vector<int> minm;
    vector<int> maxm;;
    cin>>n>>m;
    for (int i=0;i<n;i++)
    {
        vector<int> a;
        for(int j=0;j<m;j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        mat.push_back(a);
    }
        
    for(int i=0;i<mat.size();i++)
    {
        mi =100000;
        for(int j=0;j<mat[i].size();j++)
            mi = min(mat[i][j],mi);
        minm.push_back(mi);
    }
        
    for(int i=0;i<mat[0].size();i++)
    {
        ma =0;
        for(int j=0;j<mat.size();j++)
            ma = max(mat[j][i],ma);
        maxm.push_back(ma);
    }
        
    int a;
    for(int i=0;i<mat.size();i++)
        for(int j=0;j<mat[i].size();j++)
            if(minm[i]==maxm[j])
                a=minm[i];

    cout<<a;
}