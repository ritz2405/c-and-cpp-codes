#include<bits/stdc++.h>
#define ll long long
using namespace std;
int calculate(int m)
{
	int sum=0, r;
	while(m>0)
	{
		r = m%10;
		sum = sum + r;
		m=m/10;
	}
	return sum;
}
int main()
{
	ll n;
	cin>>n;
	int flag=0, m=99;
	for(ll i=n-99; i<=n; i++)
	{
		if(i+calculate(i) + calculate(calculate(i)) == n)
		{
			flag++;
		}
		m--;
	}
	cout<<flag<<"\n";
}