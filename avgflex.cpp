#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int max = INT_MIN;
	int count=0;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	for(int i=0; i<n; i++)
	{
		if(max == arr[i])
		{
			count++;
		}
	}
	if(count < n)
	{
		count = n - count;
	}
	cout<<count<<"\n";
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
