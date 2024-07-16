#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n,co=0,k;
	cin>>n;
	string a,b,c=" ";
	cin>>a>>b;
	for(ll i=0; i<n; i++)
	{
		if(a[i] == b[i])
		{
			co++;
		}
		else
		{
			k++;
			c+=b[i];
		}
	}
	sort(c.begin(),c.end());
	ll ans = 0;
	for(ll i=0; i<c.size()-1; i++)
	{
		if(c[i]!=c[i+1])
			ans++;
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