#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int x,m,d;
	cin>>x>>m>>d;
	cout<<min(x*m, x+d)<<"\n";
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