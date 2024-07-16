#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,l;
		cin>>n>>m>>l;
		int ids[n+1];
		for(int i=1; i<=m; i++)
		{
			int k; cin>>k;
			for(int j=1; j<=k; j++)
			{
				int x; cin>>x;
				ids[x]=i;
			}
		}
		int prevstrip=0, ans=0;
		for(int i=1; i<=l; i++)
		{
			int s; cin>>s;
			if(ids[s]!=prevstrip)
			{
				ans++;
			}
			prevstrip = ids[s];
		}
		cout<<ans<<"\n";
	}
}