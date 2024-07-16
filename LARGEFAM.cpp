#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	vector<ll> v;
	ll z=0;
	for(ll i=0; i<n; i++)
	{
		ll y;
		cin>>y;
		if(y == 0)
		{
			z++;
		}
		else
		{
			v.push_back(y);
		}
	}
	sort(v.begin(), v.end());
	for(ll i=0; i<z; i++)
	{
		v.push_back(0);
	}
	ll o=0, p=1;
	for(ll i=0; i<n; i++)
	{
		int f=1;
		for(ll k=0; k<v[i]; k++)
		{
			if(p<n)
				p++;
			else
			{
				f=0;
				break;
			}
		}
		o+=f;
	}
	cout<<o<<"\n";
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