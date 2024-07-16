#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll x1,y1,x2,y2;
	ll x3,y3,x4,y4;
	cin>>x1>>y1>>x2>>y2;
	cin>>x3>>y3>>x4>>y4;
	ll ans = 0;

	for(ll i=0; i<=1001; i++)
	{
		for(ll j=0; j<=1001; j++)
		{
			if((x1<=i and i < x2 and y1<=j and j<y2) or (x3<=i and i<x4 and y3<=j and j<y4))
			{
				ans++;
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