#include<bits/stdc++.h>
#define ll long long
#define mod 100000000007
using namespace std;
ll power(ll a, ll b)
{
	if(b==0)
	{
		return 1;
	}
	if(b==1)
	{
		return b;
	}
	ll ret = power(a,b/2);
	if(b%2 == 0)
	{
		return (ret * ret)%mod;
	}
	return ((ret * ret)%mod * a)%mod;
}
void solve()
{
	ll n;
	cin>>n;
	ll ans;
	ll sum = (power(2,n/2)-2)%mod;
	ans = (2+2*sum+power(2,n/2))%mod;

	if(n%2 == 1)
	{
		ans = (ans+power(2,n/2))%mod;
	}
	ans = (ans%mod + mod)%mod;
	cout<<ans<<"\n";
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