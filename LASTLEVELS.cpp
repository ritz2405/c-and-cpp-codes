#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x,y,z;
	cin>>x>>y>>z;
	int d = x/3;
	if(x%3 == 0)
	{
		d--;
	}
	int ans = x*y + d*z;
	cout<<ans<<"\n";
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