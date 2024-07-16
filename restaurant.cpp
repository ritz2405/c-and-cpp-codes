#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(a == 0)
	{
		return b;
	}
	else if(b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,b;
		cin>>l>>b;
		cout<<((l*b)/(gcd(l,b)*gcd(l,b)))<<endl;
	}
}
