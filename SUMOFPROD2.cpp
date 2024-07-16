#include<bits/stdc++.h>
#define MOD 998244353
using namespace std;
long long fac[1000010], inv[1000010], finv[1000010];
long long C(long long x, long long y)
{
	if(x<0 || y>x)
	{
		return 0;
	}
	return fac[x] * finv[y] % MOD * finv[x-y] % MOD;
}
#define int long long
void solve()
{
	int n,x,c0=0,c1=0,t=0;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		c0+=x==0;
		c1+=x==1;
	}
	for(int i=0; i<=c1; i++)
	{
		t = (t+i*C(c1+c0-i,c0))%MOD;
	}
	cout<<(((t*(c0+1)-C(c1+c0-2,c0-1))%MOD+MOD)%MOD+C(c1+c0-2,c0-1))*fac[c1]%MOD*fac[c0]%MOD<<"\n";
}
signed main()
{
	fac[0] = inv[0] = inv[1] = finv[0] = finv[1] = 1;
	for(long long i=1; i<=1000000; i++)
	{
		fac[i] = fac[i-1]*i % MOD;
	}
	for(long long i=2; i<=1000000; i++)
	{
		inv[i] = MOD - MOD/i*inv[MOD%i]%MOD;
	}
	for(long long i=2; i<=1000000; i++)
	{
		finv[i] = finv[i-1]*inv[i] % MOD;
	}
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}