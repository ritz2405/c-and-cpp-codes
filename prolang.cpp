#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a,b,a1,b1,a2,b2;
	cin>>a>>b>>a1>>b1>>a2>>b2;
	if((a==a1 && b==b1) || (a==b1 && b==a1))
	{
		cout<<1<<"\n";
	}
	else if((a==a2 && b==b2) || (a==b2 && b==a2))
	{
		cout<<2<<"\n";
	}
	else{
		cout<<0<<"\n";
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