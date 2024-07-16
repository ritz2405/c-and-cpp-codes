#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		int product = arr[i];
		int sum = arr[i];
		for(int j=i+1; j<n; j++)
		{
			if(product == sum)
			{
				count++;
			}

			product = product * arr[j];
			sum = sum + arr[j];
		}
		if(product == sum)
		{
			count++;
		}
	}
	cout<<count<<"\n";
}

int main()
{
	int t; cin>>t;
	while(t--)
	{
		solve();
	}
}