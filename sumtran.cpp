#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1][n+1];
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=i; j++)
			{
				cin>>arr[i][j];
			}
		}
		int dp[n+1][n+1];
		for(int j=1; j<=n; j++)
		{
			dp[n][j] = arr[n][j];
		}
		for(int i=n-1; i>=0; i--)
		{
			for(int j=1; j<=i; j++)
			{
				dp[i][j] = arr[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
			}
		}
		cout<<dp[1][1];
	}
}