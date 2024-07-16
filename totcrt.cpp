#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	map<string, int> mp;
	int rep = 3;
	while(rep--)
	{
		for(int i=0; i<n; i++)
		{
			string s;
			int x;
			cin>>s>>x;
			mp[s] += x;
		}
	}
	vector<int> ans;
	for(auto [x,y]: mp)
	{
		ans.push_back(y);
	}
	sort(ans.begin(), ans.end())
	for(auto x: ans)
	{
		cout<<x<<" ";
	}
	cout<<"\n";
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