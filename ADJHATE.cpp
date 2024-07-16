#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll a;
	vector<ll> even,odd;
	for(ll i=0; i<n; i++)
	{
		cin>>a;
		if(a%2 == 0)
		{
			even.push_back(a);
		}
		else
		{
			odd.push_back(a);
		}
	}
	if(even.empty() || odd.empty())
	{
		cout<<-1<<"\n";
	}
	else
	{
		for(auto &i:even)
		{
			cout<<i<<" ";
		}
		for(auto &j:odd)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
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