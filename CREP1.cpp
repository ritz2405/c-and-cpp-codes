#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
void solve()
{
	ll n,k;
	ll num;
	cin>>n>>k;
	ll sum=0;
	ll flag =0;
	unordered_map<ll, ll> count;
	for(ll i=0; i<n; i++)
	{
		cin>>num;
		count[num]++;
		if(count[num]==k)
		{
			sum = sum + num;
			flag++;
		}
		if(count[num] == k+1)
		{
			sum = sum-num;
			flag--;
		}
	}
	if(flag==0)
	{
		cout<<-1<<"\n";
	}
	else
	{
		cout<<sum<<"\n";
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