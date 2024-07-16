#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,n,z=1;
		cin>>a>>b>>n;
		while(z<n)
		{
			z=z*2;
		}
		if((a^b) == 0)
		{
			cout<<0<<"\n";
		}
		else if((a^b)<n)
		{
			cout<<1<<"\n";
		}
		else if((a^b)<z)
		{
			cout<<2<<"\n";
		}
		else
		{
			cout<<-1<<"\n";
		}
	}
} 