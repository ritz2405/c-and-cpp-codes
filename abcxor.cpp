#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve()
{
	ll n,k;
	cin>>n>>k;
	ll m = 1 << n;
	ll ans = (m-1)*(m-2);
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