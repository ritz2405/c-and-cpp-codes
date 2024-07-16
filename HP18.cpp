#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,a,b,alice=0,bob=0;
	cin>>n>>a>>b;
	while(n--)
	{
		int i;
		cin>>i;
		if(i%a == 0 && i%b == 0)
		{
			bob++;
		}
		else if(i%a == 0)
		{
			bob++;
		}
		else if(i%b == 0)
		{
			alice++;
		}
	}
	if(bob<=alice)
	{
		cout<<"ALICE"<<"\n";
	}
	else
	{
		cout<<"BOB"<<"\n";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}