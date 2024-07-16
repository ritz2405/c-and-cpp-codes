	#include<bits/stdc++.h>
	using namespace std;
	#define ll long long int
	void solve()
	{
		int n,x;
		cin>>n>>x;
		if(n%6 == 0)
		{
			int a;
			a = n/6;
			cout<<a*x<<"\n";
		}
		else
		{
			int a;
			a = n/6;
			cout<<(a+1)*x<<"\n";
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