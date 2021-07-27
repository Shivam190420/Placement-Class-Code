#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n>1)
    {
        if(n%4)
        {
            cout<<"false";
            return 0;
        }
        n=n/4;
    }
    if(n==1)
        cout<<"true";
    else
        cout<<"false";
}