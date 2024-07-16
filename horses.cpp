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
		long long int a[n];
		long long int m=999999999;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<i; j++)
			{
				m=min(m, abs(a[i] - a[j]));
			}
		}
		cout<<m;
	}
	return 0;
}