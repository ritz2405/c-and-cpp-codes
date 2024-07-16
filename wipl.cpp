#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,k;
	cin>>n>>k;
	vector<ll> suffix(n+1);
	vector<ll> heights(n);
	for(ll i=0; i<n; i++)
	{
		cin>>heights[i];
	}
	vector<vector< ll> > dp(n+1, vector<ll>(k+1, INT_MAX));
	sort(heights.begin(), heights.end());
	suffix[n] = 0;
	for(ll i=n-1; i>=0; i--)
	{
		suffix[i] = suffix[i+1] + heights[i];
	}
	dp[n][0] = 0;
	for(ll i=n-1; i>=0; i--)
	{
		for(ll j=k; j>=0; j--)
		{
			if(heights[i]>=j)
			{
				dp[i][j] = heights[i];
				continue;
			}
			if(dp[i+1][j-heights[i]] == INT_MAX)
			{
				dp[i][j] = INT_MAX;
			}
			else
			{
				dp[i][j] = min(dp[i+1][j], dp[i+1][j-heights[i]]+heights[i]);
			}
		}
	}
	ll flag=0;
	ll ans;
	for(ll i=n-1; i>=0; i--)
	{
		if(suffix[i] - dp[i][k] >= k)
		{
			ans = n-i;
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<ans<<"\n";
	}
	else
	{
		cout<<-1<<"\n";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}