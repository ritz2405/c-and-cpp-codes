#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long s=0;
		while(n--)
		{
			int a;
			cin>>a;
			s += a;
		}
		cout<<(s%3 == 0 ? "Yes\n":"No\n");
	}
}