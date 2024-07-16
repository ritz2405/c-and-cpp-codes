#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ten=0, two=0;
		while(n%10 == 0)
		{
			n/=10;
			ten++;
		}
		while(n%2 == 0)
		{
			n/=2;
			two++;
		}
		if(n==1 && two<=ten)
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}
	}
}