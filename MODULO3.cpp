#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll a,b;
	ll c=0;
	cin>>a>>b;
	ll maxElement = max(a,b);
	ll minElement = min(a,b);
	// cout<<a<<" "<<b<<"\n";
	if(a%3 == 0 || b%3 == 0)
	{
		cout<<0<<"\n";
	}
	else
	{
		if(abs(maxElement - minElement) % 3 == 0)
		{
			cout<<1<<"\n";
		}
		else
		{
			cout<<2<<"\n";
		}
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