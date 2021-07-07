#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    vector<vector<int> > grid;
    vector<int> r;
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
        grid.push_back(a);
    }

    int count=0;
    for(int i =0;i<n;i++)
        for(int j=m-1;j>=0;j--)
        {
            if(grid[i][j] < 0)
                count++;
            else
                break;
        }    
    cout<<count;
}