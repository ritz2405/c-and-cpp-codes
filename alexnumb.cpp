#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		long long int r = n*(n-1)/2;
		cout<<r<<endl;
	}
}