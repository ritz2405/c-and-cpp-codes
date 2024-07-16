#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	if((a+b+c) < (d+e))
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
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