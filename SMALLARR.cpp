#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll n,x;
	cin>>n>>x;
	vector<ll> arr(n);
	for(ll i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	vector<ll> prefixSum(arr.begin(), arr.end());
	for(ll i=1; i<n; i++)
	{
		prefixSum[i]+=prefixSum[i-1];
	}
	ll maxSum=0;
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<n; j++)
		{
			ll s = prefixSum[j] - prefixSum[i] + arr[i];
			maxSum = max(s, maxSum);
		}
	}
	double ans = (double)(prefixSum[n-1]) - (maxSum - (double)maxSum/(double)(x));
	cout<<fixed<<setprecision(2)<<ans<<"\n";
}
int main()
{
	solve();
}