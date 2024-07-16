#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	int n;
	cin>>n;
	ll ans=0, count=0;
	for(int i=0; i<n; i++)
	{
		int temp;
		cin>>temp;
		if(temp == 1)
		{
			count++;
		}
		else
		{
			ans+=(count*(count+1)/2);
			count=0;
		}
	}
	ans += (count*(count+1)/2);
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