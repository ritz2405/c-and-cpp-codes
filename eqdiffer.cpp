#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int ans=0;
	int high = 0;
	map <ll,int> mp;
	for(ll i=0; i<n; i++)
	{
		ll x;
		cin>>x;
		mp[x]++;
		high = max(high,mp[x]);
	}
	// sort(freq, freq+n);
	if(n>2)
	{
		if(high == 1)
		{
			ans = n-2;
		}
		else
		{
			ans = n - high;
		}
	}
	cout<<ans<<endl;
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