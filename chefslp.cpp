#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,l,x,r;
	cin>>n>>l>>x;
	if(n==0 || x == 0)
	{
		cout<<0<<"\n";
	}
	else
	{
		r = n - l;
		cout<<(min(l,r)*x)<<"\n";
	}
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