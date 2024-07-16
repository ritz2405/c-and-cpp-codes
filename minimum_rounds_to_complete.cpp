#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int tasks[5]={1,2,3,3,3};
	map<int, int> mp;
	for(int i=0; i<5; i++)
	{
		mp[tasks[i]]++;
	}
	for(auto i:mp)
	{
		cout<<i.first<<"->"<<i.second<<"\n";
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