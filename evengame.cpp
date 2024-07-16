#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		sum = sum + x;
	}
	if(sum%2 == 0)
	{
		cout<<1<<"\n";
	}
	else
	{
		cout<<2<<"\n";
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