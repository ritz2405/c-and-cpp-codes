#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n,m;
	cin>>n>>m;
	ll ans1, ans2;
	if(m<2*n)
	{
		cout<<m<<" "<<m<<"\n";
	}
	else if(m>=2*n && m%n==0)
	{
		cout<<m<<" "<<n<<"\n";
	}
	else
	{
		ll x=m/2;
		if(m>=2*n)
		{
			x = 2*n;
		}
		int difference = INT_MIN;
		for(int i=n; i<x; i++)
		{
			ll d = m/i;
			ll currdiff = (i*d)-i;
			if(currdiff > difference)
			{
				ans1 = i;
				ans2 = i*d;
				difference = currdiff;
			}
		}
		cout<<ans1<<" "<<ans2<<"\n";
	}
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