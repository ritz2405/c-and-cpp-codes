#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll r;
	cin>>r;
	if(r>=1 && r<=50)
	{
		cout<<100<<"\n";
	}
	else if(r>50 && r<=100)
	{
		cout<<50<<"\n";
	}
	else
	{
		cout<<0<<"\n";
	}
}