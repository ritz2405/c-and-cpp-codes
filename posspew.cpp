#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	int sum=0;
	for(int i=0; i<n ;i++)
	{
		cin>>arr[i];
	}
	while(k--){
	for(int i=0; i<n ;i++)
	{
		if(arr[i]>0)
		{
			if(i%n >= n)
			{
				arr[i%n]++;
				arr[(i%n)-1]++;
				continue;
			}
			else
			{
				arr[(i%n)+1]++;
				arr[(i%n)-1]++;
				continue;
			}
		}
	}
	}
	for(int i=0; i<n ;i++)
	{
		sum = sum + arr[i];
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