#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	for(int i=2; i*i<= n; i++)
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
	int n;
	cin>>n;
	if(isprime(n))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}