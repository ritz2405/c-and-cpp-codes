#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	if((min(n, m) == 1 and max(n, m) == 2) or (min(n, m) >= 2 and (n % 2 == 0 or m % 2 == 0)))
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
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