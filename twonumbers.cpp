#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long int n;
	cin>>n;
	if(n == 2)
	{
		cout<<0<<"\n";
	}
	else if(n % 2 != 0)
	{
		cout<<((n/2)*((n/2) + 1)) - 1<<"\n";
	}
	else
	{
		if((n/2) % 2 == 0)
		{
			cout<< ((n/2) - 1) * ((n/2) + 1) - 1 <<"\n";
		}
		else
		{
			cout<<((n/2) - 2) * ((n/2) + 2) - 1 <<"\n"; 
		}
	}
}
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}