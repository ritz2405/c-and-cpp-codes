#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,p,x,y;
	cin>>n>>p>>x>>y;
	int arr[n];
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<p; i++)
	{
		if(arr[i] == 0)
		{
			sum = sum + x;
		}
		else
		{
			sum = sum + y;
		}
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