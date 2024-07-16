#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
	ll n, sum = 0;
	cin>>n;
	ll i=n;
	while(i--)
	{
		ll x=0;
		cin>>x;
		sum = sum + x;
	}
	cout<<sum - n + 1<<"\n";
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