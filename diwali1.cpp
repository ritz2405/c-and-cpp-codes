#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int p,a,b,c,x,y;
	cin>>p>>a>>b>>c>>x>>y;
	int anar = b+ x*a;
	int chakri = c + y*a;

	int res = min(anar,chakri);
	int ans = p/res;
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