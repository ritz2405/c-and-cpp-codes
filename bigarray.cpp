#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,s;
		cin>>n>>s;
		ll ans=0;
		ans = n * (n+1) / 2;
		ans = ans - s;
		if(ans >=1 && ans<=n)
		{
			cout<<ans<<"\n";
		}
		else
		{
			cout<<-1<<"\n";
		}
	}
}