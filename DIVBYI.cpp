#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll arr[n];
	arr[n-1] = n;
	ll k = n;
	for(ll i=1; i<n; i++)
	{
		if(i%2 != 0)
		{
			arr[n-i-1] = k - (n-i);
			k = arr[n-i-1];
		}
		else
		{
			arr[n-i-1] = k+(n-i);
			k = arr[n-i-1];
		}
	}
	for(ll i=0; i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
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