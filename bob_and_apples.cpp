#include<bits/stdc++.h>
using namespace std;
vector<vector<vector<int> > > dp;
int knapsack(int v[], int p[], int m, int n, int flag)
{
	if(dp[n][m][flag] != -1)
	{
		return dp[n][m][flag];
	}
	if(n == 0 || m == 0)
	{
		return 0;
	}
	if(flag == 1)
	{
		if(p[n-1] <= m)
		{
			return dp[n][m][flag] = max(v[n-1] + knapsack(v, p, m - p[n-1], n-1, flag), knapsack(v,p,m,n-1, flag));
		}
		else if(p[n-1] > m)
		{
			return dp[n][m][flag] =  knapsack(v, p, m, n-1, flag);
		}
	}
	else
	{
		if(p[n-1]>m)
		{
			if(p[n-1]/2 > n)
			{
				return dp[n][m][flag] = knapsack(v, p,m,n-1,0);
			}
			else
			{
				return dp[n][m][flag] = max(v[n-1] + knapsack(v,p, m - p[n-1]/2, n-1, 1), knapsack(v,p,m,n-1, 0));
			}
		}
		else
		{
			int x = knapsack(v,p,m, n-1, flag);
			int y = v[n-1] + knapsack(v,p,m - p[n-1], n-1, 0);
			int z = v[n-1] + knapsack(v,p,m - p[n-1]/2, n-1, 1);

			return dp[n][m][flag] = max(max(x,y),z);
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int m;
		cin>>n>>m;
		int v[n], p[n];
		for(int i=0; i<n; i++)
		{
			cin>>v[i]>>p[i];
		}
		dp = vector<vector<vector<int> > > (n+1, vector<vector<int> > (m+1, vector<int>(2, -1)));
		cout<<knapsack(v, p, m, n, 0);
	}
}