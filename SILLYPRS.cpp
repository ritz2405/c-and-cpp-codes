#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll odd = 0, sum = 0;
	for(ll i=0; i<n; i++)
	{
		ll x; cin>>x;
		sum+=x;
		if(x&1)
		{
			odd++;
		}
	}
	for(ll i=0; i<n; i++)
	{
		ll x; cin>>x;
		sum+=x;
		if(x&1)
		{
			odd--;
		}
	}
	ll ans = (sum - abs(odd))/2;
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