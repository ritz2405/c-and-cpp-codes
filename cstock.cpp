#include<bits/stdc++.h>
using namespace std;
void solve()
{
	float s,a,b,c;
	cin>>s>>a>>b>>c;
	float total = s + s*c/100;
	if(total >= a && total <= b)
	{
		cout<<"Yes"<<"\n";
	}
	else
	{
		cout<<"No"<<"\n";
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