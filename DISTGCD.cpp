#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
	ll x,y;
	ll c=0;
	cin>>x>>y;
	ll n = abs(x-y);
	for(ll i=1; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			if(n/i ==i)
			{
				c++;
			}
			else
			{
				c+=2;
			}
		}
	}
	cout<<c<<"\n";
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