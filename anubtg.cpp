#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum=0; cnt=0;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(arr,arr+n);
		for(int i=n-1; i>=0; i--)
		{
			if(cnt<2)
			{
				sum+=arr[i];
			}
			cnt++;
			cnt=cnt%4;
		}
		cout<<sum<<endl;
	}
}