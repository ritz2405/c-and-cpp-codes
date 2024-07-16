#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x;
		int dist;
		cin>>n>>m>>x;
		vector<pair<int, int> > v;
		for(int i=0; i<n ;i++)
		{
			cin>>dist;
			v.push_back(make_pair(dist, i+1));
		}
		sort(v.rbegin(), v.rend());
		vector<int> ans;
		for(int i=0; i<n; i++)
		{
			if(v[i].first >= m || ans.size() < x)
			{
				ans.push_back(v[i].second);
			}
		}
		sort(ans.begin(), ans.end());
		cout<<ans.size()<<" ";
		for(int i=0; i<ans.size(); i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<"\n";
	}
}