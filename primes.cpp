#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main()
{
	int n, cnt=0;
	cin>>n;
	for(int i=2; i<=n; i++)
	{
		if(isprime(i))
		{
			cnt++;
		}
	}
	cout<<cnt;
}