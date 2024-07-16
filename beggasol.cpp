#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	int sum=0;
	int s=0;
	cin>>n;
	int a[n]
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		sum = sum + a[i];
		s = s+ a[i];
		s--;
		if(s<0)
		{
			break;
		}
	}
	if(s<0)
	{
		cout<<i<<"\n";
		continue;
	}
	cout<<sum<<"\n";
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