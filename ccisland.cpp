#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,xr,yr,d;
		cin>>x>>y>>xr>>yr>>d;
		int a = x/xr;
		int b = y/yr;
		int c;
		c = min(a,b);
		if(c>=d)
		{
			cout<<"Yes"<<"\n";
		}
		else
		{
			cout<<"No"<<"\n";
		}
	}
}