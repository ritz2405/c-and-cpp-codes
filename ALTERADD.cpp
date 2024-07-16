#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll a,b;
	cin>>a>>b;
	if((b-a)%3 == 2)
	{
		cout<<"NO"<<"\n";
	}
	else
	{
		cout<<"YES"<<"\n";
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