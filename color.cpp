#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int r=0, g=0, b=0;
		int ans=0;
		string s;
		cin>>s;
		for(int i=0; i<n; i++)
		{
			if(s[i] == 'R')
			{
				r++;
			}
			else if(s[i] == 'G')
			{
				g++;
			}
			else
			{
				b++;
			}
		}
		if(r == n || g == n || b == n)
		{
			cout<<0<<"\n";
		}
		else
		{
			ans = n - max(max(r,g), b);
			cout<<ans<<"\n";
		}
	}
}