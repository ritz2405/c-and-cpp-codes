#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int c=0;
	if(s[0] == '0')
	{
		c = 1;
	}
	for(int i=1; i<s.length(); i++)
	{
		if(s[i] != s[i-1])
		{
			c++;
		}
	}
	cout<<c<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}