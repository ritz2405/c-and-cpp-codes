#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i] != i+1)
		{
			cout<<i+1;
		}
	}
	return 0;
}