#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st; 
    bool t=true; 
    for(auto i:s)  
    {
        if(i=='(' or i=='{' or i=='[') 
            st.push(i); 
        else 
        {
            if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']')) 
            {
                t=false;
                break;
            }
            st.pop();  
        }
    }
    if(t)
        cout<<"true";
    else
        cout<<"false"; 
}