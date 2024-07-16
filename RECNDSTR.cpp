#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	l = s.length();
	if(l%2!=0)
	{
		for(int i=0; i<l-1; i++)
		{
			if(s[i] != s[i+1])
			{
				y = 1;
				break;
			}
		}
		if(y==1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
	else
	{
		for(int i=0; i<l-2; i++)
		{
			if(s[i] != s[i+2])
			{
				y=1;
				break;
			}
		}
		if(y==1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
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