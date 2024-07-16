#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll x,y;
	cin>>x>>y;
	cout<<abs(ceil(x/10.0) - ceil(y/10.0))<<"\n";
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