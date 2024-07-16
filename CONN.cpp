#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	int res=0;
	cin>>n;
	if(n%2 == 0 || n%7 == 0)
	{
		res=1;
	}
	else
	{
		for(int i=n; i>=0; i-=2)
		{
			if(!(i%7))
			{
				res=1;
				break;
			}
		}
	}
	if(res)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
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