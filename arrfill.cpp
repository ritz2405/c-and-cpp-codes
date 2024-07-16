#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
  	cin.tie(0);
  	cout.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;

		vector<pair<int ,int> > pairs;
		for(int i=0; i<m; i++)
		{
			ll a,b;
			cin>>a>>b;
			pairs.push_back({a,b});
		}
		sort(pairs.begin(), pairs.end(), greater<pair<int, int> >());

		ll lcm = 1;
		ll rem = n;
		ll res = 0;

		for(int i=0; i<m && rem>0; i++)
		{
			ll x = pairs[i].first, y = pairs[i].second;
			lcm = lcm*y/__gcd(lcm,y);
			res += (rem-n/lcm)*x;
			rem = n/lcm;
		}
		cout<<res<<endl;

		// for(int i=1; i<=n; i++)
		// {
		// 	if(i%s!=0)
		// 	{
		// 		arr[i] = max;
		// 	}
		// 	cout<<arr[i]<<" ";
		// }
		// map<int, int> mp;
		// for(int i=0; i<m; i++)
		// {
		// 	int p = max(pairs[i].first, )
		// }
	}
	return 0;
}