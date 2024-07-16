#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n,c =0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		ll a;
		cin>>a;
		if(a == 1)
		{
			c++;
		}
	}
	if(n%2 != 0)
	{
		cout<<-1<<"\n";
	}
	else
	{
		cout<<c - (n/2)<<"\n";
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
