#include<bits/stdc++.h>
using namespace std;
#define int long long int
int query(int x)
{
	cout<<"? "<<x<<"\n";
	int y;
	cin>>y;
	return y;
}
void solve()
{
	int x1 = 1e18;
	int y1 = query(x1);

	int x2 = x1 - y1 - 1;
	int y2 = query(x2);
	cout<<"! "<<y2+1<<"\n";
}
signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}