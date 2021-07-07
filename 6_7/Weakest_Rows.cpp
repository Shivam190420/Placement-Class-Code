#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count,n,m,k;
    vector<vector<int> > mat;
    vector<pair<int,int> >v;
    vector<int> r;
    cin>>n>>m>>k;
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

    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1)
                count++;
            else
                break;
        }
        v.push_back(make_pair(count,i));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
        cout<<r[i];
}