#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll x,n;
	ll ans;
	cin>>x>>n;
	ans = (x-1)*(2*n - x);
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