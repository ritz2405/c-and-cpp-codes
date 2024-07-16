#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k,s;
	cin>>n>>k>>s;
	int sum = s - (n*n);
	int ans = sum/(k-1);
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