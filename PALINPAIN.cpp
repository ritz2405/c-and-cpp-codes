#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll a,b,ca1,ca2,cb1,cb2;
	cin>>a>>b;
	ll n = a+b;
	char s1[n];
	char s2[n];
	if(a == 1 || b == 1 || (a%2 == 1 && b%2 == 1))
	{
		cout<<-1<<"\n";
	}
	else
	{
		ca1 = a; ca2 = a;
		cb1 = b; cb2 = b;
		for(int i=0; i<n/2; i++)
		{
			if(ca1 >= 2)
			{
				ca1 -= 2;
				s1[i] = 'a';
				s1[n - i -1] = 'a';
			}
			else
			{
				cb1 -= 2;
				s1[i] = 'b';
				s1[n - i -1] = 'b';
			}
			if(cb2 >= 2)
			{
				cb2 -= 2;
				s2[i] = 'b';
				s2[n - i -1] = 'b';
			}
			else
			{
				ca2 -= 2;
				s2[i] = 'a';
				s2[n - i - 1] = 'a';
			}
		}
		if(ca1 > 0) {s1[n/2] = 'a';}
		if(cb1 > 0) {s1[n/2] = 'b';}
		if(ca2 > 0) {s2[n/2] = 'a';}
		if(cb2 > 0) {s2[n/2] = 'b';}

		for(int i=0 ;i <n; i++)
		{
			cout<<s1[i];
		}
		cout<<"\n";
		for(int i=0; i<n; i++)
		{
			cout<<s2[i];
		}
		cout<<"\n";
	}
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}