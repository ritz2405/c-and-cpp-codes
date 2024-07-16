#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,r;
		long long int sum = 0;
		long long int flag =0;
		long long int res=0;
		cin>>n>>r;
		long long int a[n], b[n];
		long long int c = r * (n-1);
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
		}
		for(int i=0; i<n; i++)
		{
			sum = sum + b[i];
			res = max(res, sum);
			if(i !=n-1)
			{
				sum -= r * (a[i+1] - a[i]);
			}
			if(sum < 0)
			{
				sum=0;
			}
		}
		cout<<res<<"\n";	
	}
	
}