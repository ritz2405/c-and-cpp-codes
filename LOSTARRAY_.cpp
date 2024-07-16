#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int> arr;
	for(int i=0; i<n+1; i++)
	{
		int x;
		cin>>x;
		arr.push_back(x);
	}
	int xr = 0;
	for(int i=0; i<arr.size(); i++)
	{
		xr = xr^arr[i];
	}
	if(n%2 == 0)
	{
		xr = arr[0];
	}
	vector<int> res;
	for(int i=0; i<arr.size(); i++)
	{
		int ans = xr^arr[i];
		res.push_back(ans);
	}
	sort(res.begin(), res.end());
	for(int i=1; i<res.size(); i++)
	{
		cout<<res[i]<<" ";
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