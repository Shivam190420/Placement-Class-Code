#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n;
    vector<vector<int> > mat,target;
    for(int i=0;i<n;i++)
    {
        vector<int> row;
        int val;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            row.push_back(val);
        }
        mat.push_back(row);
    }
    for(int i=0;i<n;i++)
    {
        vector<int> row;
        int val;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            row.push_back(val);
        }
        target.push_back(row);
    }
     for(int i=0;i<4;i++)
    {
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
                swap(mat[i][j],mat[j][i]);
        reverse(mat.begin(),mat.end());
        if(mat==target)
            h=1;
    }
    if(h==1)
        cout<<"true";
    else
        cout<<"false";
 
}