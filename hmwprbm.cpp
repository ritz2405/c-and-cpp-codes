#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;;
		vector<int> a(n);
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		if(n == k)
		{
			cout<<0<<endl;
			continue;
		}
		vector<int> dp(n);
		deque<pair<int, int> > dq;
		for(int i=0; i<=k; i++)
		{
			dp[i] = a[i];
			while(!dq.empty() && dq.back().first > dp[i])
				dq.pop_back();
			dq.push_back({dp[i], i});
		}
		for(int i=k+1; i<n; i++)
		{
			if(!dq.empty() && dq.front().second < i - k - 1)
			{
				dq.pop_front();
			}
			int pref_min = dq.front().first;
			dp[i] = a[i] + pref_min;
			while(!dq.empty() && dq.back().first > dp[i])
				dq.pop_back();
			dq.push_back({dp[i], i});
		}
		int ans = INT_MAX;
		for(int i=n-k-1;i<n; i++)
		{
			ans=min(ans, dp[i]);
		}
		cout<<ans<<endl;
	}
}