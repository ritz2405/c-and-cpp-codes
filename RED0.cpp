#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll x,y;
	cin>>x>>y;
	if(x>y)
	{
		swap(x,y);
	}
	if(x == 0 and y == 0)
	{
		cout<<0<<"\n";
	}
	else if(x == 0)
	{
		cout<<-1<<"\n";
	}
	else
	{
		ll ans = 0;
		while(x<y)
		{
			x *= 2;
			ans++;
		}
		cout<<ans + y<<"\n";
	}
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