#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string a,b;
	cin>>a>>b;
	int ans=0;
	int n = a.length();
	if(a == b)
	{
		cout<<ans<<"\n";
	}
	else
	{
		int i=0; 
		while(i<n)
		{
			if(a[i] == b[i])
			{
				i+=2;
			}
			else
			{
				while(a[i] != b[i])
					i+=2;
				ans++;
			}
		}
		i=1;
		while(i<n)
		{
			if(a[i] == b[i])
			{
				i+=2;
			}
			else
			{
				while(a[i] != b[i])
					i+=2;
				ans++;
			}
		}
		cout<<ans<<"\n";
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