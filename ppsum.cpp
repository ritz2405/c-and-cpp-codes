#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
	int sum=0;
	for(int i=1; i<=n; i++)
	{
		sum = sum + i;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x=0;
		int n,d;
		cin>>d>>n;
		while(d--)
		{
			x = sum(n);
			n=x;
		}
		cout<<x<<"\n";
	}
}