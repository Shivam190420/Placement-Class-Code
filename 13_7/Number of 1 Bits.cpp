#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint32_t n;
    cin>>n;
    int count=0;
    while(n)
    {
        if(n&1)
            count++;
        n=n>>1;
    }
    cout<<count;
}