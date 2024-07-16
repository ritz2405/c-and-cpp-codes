#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll maxN = 1e6+2;
	ll precompute[maxN];
	precompute[1] = 1;
	ll mod = 1e9+7;
	for(ll i = 2; i<maxN; i++)
	{
		precompute[i] = (precompute[i-1] % mod * i % mod) % mod;
	}
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<(precompute[n+1] - 1) % mod<<"\n";
	}
}
