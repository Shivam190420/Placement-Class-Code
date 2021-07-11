#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    string result = "";
        
    while (i >= 0 || j >= 0 || carry) 
    {
        if (i >= 0 && a[i--] == '1') 
            ++carry;
        if (j >= 0 && b[j--] == '1') 
            ++carry;
        result.insert(0, 1, carry % 2 == 1 ? '1' : '0');
        carry /= 2;
    }
        
        cout<<result;
}