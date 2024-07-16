#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll l =0;
	ll r = 1;
	ll nextterm = 1;
	ll power = 1;
	for(int i=1; i<n; i++)
	{
		nextterm = 2 * l + r;
		l = r;
		r = nextterm;
		power = power * 2;
	}
	power = power * 2;

	cout<<nextterm<<" "<<power<<" ";
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