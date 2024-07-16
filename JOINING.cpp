#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n,k;
	cin>>n>>k;
	ll t = n/5;
	if(n%5 == 0)
	{
		t--;
	}
	ll r = k/5;
	if(k%5 == 0)
	{
		r--;
	}
	cout<<t-r<<"\n";
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