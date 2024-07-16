#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,k;
	cin>>n>>k;
	cout<<n/__gcd(n,k)<<"\n";
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