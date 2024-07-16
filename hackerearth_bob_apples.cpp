#include<bits/stdc++.h>
using namespace std;
vector<int> v,p;
vector<vector<vector<int> > > dp;
int maxVitamins(int n, int m, int flag)
{
	if(dp[n][m][flag] != -1)
	{
		return dp[n][m][flag];
	}
	if(n==0)
	{
		return 0;
	}
	if(flag == 1)
	{
		if(p[n-1] > m)
		{
			return dp[n][m][flag] = maxVitamins(n-1, m, flag);
		}
		else
		{
			return dp[n][m][flag] = max(v[n-1] + maxVitamins(n-1, m - p[n-1], flag), maxVitamins(n-1, m, flag));
		}
	}
	else
	{
		if(p[n-1] > m)
		{
			if(p[n-1]/2 > m)
			{
				return dp[n][m][flag] = maxVitamins(n-1, m, 0);
			}
			else
			{
				return dp[n][m][flag] = max(v[n-1] + maxVitamins(n-1, m - p[n-1]/2, 1), maxVitamins(n-1, m, 0));
			}
		}
		else
		{
			int a = maxVitamins(n-1, m, flag);
			int b = v[n-1] + maxVitamins(n-1, m - p[n-1], 0);
			int c = v[n-1] + maxVitamins(n-1, m - p[n-1]/2, 1);

			return dp[n][m][flag] = max(max(a,b), c);
		}
	}
}
void solve()
{
	int n,m;
	cin>>n>>m;
	v = vector<int> (n);
	p = vector<int> (n);
	dp = vector<vector<vector<int> > > (n+1, vector<vector<int> > (m+1, vector<int> (2,-1)));
	for(int i=0; i<n; i++)
	{
		cin>>v[i]>>p[i];
	}

	cout<<maxVitamins(n, m, 0);
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