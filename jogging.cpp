#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007;
using namespace std;
ll power(ll a, ll b)
{
	ll res=1;
	while(b)
	{
		if(b%2 == 1)
		{
			res = (res*a)%mod;
		}
		a = (a*a)%mod;
		b = b/2;
	}
	return res;
}
void solve()
{
	ll n,x;
	cin>>n>>x;
	ll a = power(2,n-1);
	ll ans  = a*x;
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