#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		int a[n];
		int sum=0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum = sum + a[i];
		}
		sort(a, a+n);
		if((sum%x) >= a[0])
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<ceil(sum/x)<<endl;
		}
	}
}