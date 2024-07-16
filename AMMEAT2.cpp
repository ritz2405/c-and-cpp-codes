#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	if(n==k)
	{
		cout<<"-1"<<"\n";
	}
	else if(2*k > n)
	{
		cout<<"-1"<<"\n";
	}
	else
	{
		for(int i=1; i<k+1; i++)
		{
			cout<<2*i<<" ";
		}
		cout<<"\n";
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
