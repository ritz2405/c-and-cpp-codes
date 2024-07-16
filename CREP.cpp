#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	ll ma = 0;
	ll sum = 0;
	for(ll i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(ll i=0; i<n; i++)
	{
		ma = max(ma,arr[i]);
	}
	ll freq[ma+1] = {0};
	for(ll i=0; i<n; i++)
	{
		freq[arr[i]]++;
	}
	ll size = sizeof(freq)/sizeof(freq[0]);
	for(ll j=0; j<size; j++)
	{
		if(freq[j] == k)
		{
			sum = sum+j;
		}
	}
	if(sum!=0)
	{
		cout<<sum<<"\n";
	}
	else
	{
		cout<<-1<<"\n";
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