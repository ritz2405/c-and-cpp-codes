#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long a,b,n,x;
	cin>>a>>b>>n;
	if(a%b==0)
	{
		cout<<-1<<"\n";
	}
	x = n;
	if(x%a != 0){
		x = n+a - (x%a);
	}
	while(!(x%a == 0 && x%b!=0))
	{
		x+=a;
	}
	cout<<x<<"\n";
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