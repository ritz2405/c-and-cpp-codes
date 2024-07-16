#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n;
	cin>>n;
	ll arr[n],odd[n],even[n],j=0,k=0;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]%2 != 0)
		{
			odd[j] = arr[i];
			j++;
		}
		else
		{
			even[k] = arr[i];
			k++;
		}
	}
	if(j<=1)
	{
		cout<<"-1"<<"\n";
	}
	else if(j%2 != 0)
	{
		if(k == 0)
		{
			cout<<"-1"<<"\n";
		}
		else
		{
			cout<<odd[0]<<" ";
			for(int i=0; i<k; i++)
				cout<<even[i]<<" ";
			for(int i=1; i<j; i++)
				cout<<odd[i]<<" ";
		}
	}
	else if(j>=2)
	{
		for(int i=0; i<j; i++)
			cout<<odd[i]<<" ";
		for(int i=0; i<k; i++)
			cout<<even[i]<<" ";
	}
	cout<<"\n";
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