#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		int max = INT_MIN;
		for(ll i=0; i<n-1; i++)
		{
			ll x;
			cin>>x;
			if(x > max)
			{
				max = x;
			}
		}
		ll ans = ((100000 - max) + (100000 - max + 1)) % 1000000007;
		cout<<ans<<"\n";
	}
}