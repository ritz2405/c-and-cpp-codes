#include<bits/stdc++.h>
using namespace std;
void solve()
{
	double pa,pb;
	cin>>pa;
	pb = 1 - pa;
	long double ans = 10000(3.0 * pb - 2 * pb * pb);
	if(1 - 2*pb > 0)
	{
		ans += (1 -2*pb)*10000;
	}
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