#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll ans = 0;
	for(ll i=1; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			ll div1 = i, div2=n/i;
			if(div2 == 2)
			{
				ans++;
			}
			else
			{
				ans+=2;
			}
			if(div2!=div1 && div2!=n)
			{
				if(div1 == 2)
				{
					ans++;
				}
				else
				{
					ans+=2;
				}
			}
		}
	}
	cout<<ans<<"\n";
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}