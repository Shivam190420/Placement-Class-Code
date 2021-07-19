#include <bits/stdc++.h>
using namespace std;

int main()
{
    string haystack, needle;
    cin>>haystack>>needle;
    int n = haystack.size();
    int h = needle.size();
	if(n==0)
    {
        cout<<0;
		return 0;
    }
	int j = 0;
	for(int i=0;i<h;i++)
    {
		if(haystack[i] == needle[j])
			j++;
		else
        {
			i = i-j;
			j = 0;
		}
		if(j==n)
        {
			cout<< i-j+1 ;
            return 0;
        }
	}
		cout<<-1;
}