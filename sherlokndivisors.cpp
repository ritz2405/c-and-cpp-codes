#include<bits/stdc++.h>
using namespace std;
int divisors(int n)
{
	int ans=0, count=0;
	ans = n/2;
	if(ans%2 == 0)
	{
		count++;
		divisors(ans);
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2 != 0)
		{
			cout<<0<<"\n";
		}
		else
		{
			cout<<count<<"\n";
		}
	}
}