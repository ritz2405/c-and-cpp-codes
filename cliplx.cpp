#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		if(x%2 == 0)
		{
			cout<<x/2<<"\n";
		}
		else
		{
			x--;
			cout<<x/2<<"\n";
		}
	}
}