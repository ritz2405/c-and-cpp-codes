#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long int arr[n];
		long long int max=INT_MIN;
		long long int min=INT_MAX;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]>max)
			{
				max=arr[i];
			}
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
		long long int ans=max-min;
		ans*=2;
		cout<<ans<<endl;
	}
}