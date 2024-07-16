#include<bits/stdc++.h>
#define m 998244353
#define n 109
#define ll long long int
using namespace std;
ll p1[n][n];
ll p2[n][n];
ll f1(ll a, ll b)
{
	if(a<b)
	{
		return 0;
	}
	if(b == 1)
	{
		return 1;
	}
	else if(p1[a][b]!=-1)
	{
		return p1[a][b];
	}
	else
	{
		return p1[a][b]= ((b*f1(a-1, b))%m + f1(a-1, b-1))%m;
	}
}
ll f2(ll a, ll b)
{
	if(a<=b)
	{
		return 0;
	}
	if(b == 1)
	{
		return 1;
	}
	else if(p2[a][b] != -1)
	{
		return p2[a][b];
	}
	else
	{
		return p2[a][b] = ((b*f2(a-1, b))%m + ((a-1)*f2(a-2, b-1))%m)%m;
	}
}
void solve()
{
	int p,q,r;
	cin>>p>>q>>r;
	ll s = 0;
	for(int i=1; i<=r-1; i++)
	{
		s+=((f1(p, i)) * (f2(q, r-i)))%m;
	}
	s=s%m;
	cout<<s<<"\n";
}
int main()
{
	memset(p1,-1, sizeof(p1));
	memset(p2,-1, sizeof(p2));
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}