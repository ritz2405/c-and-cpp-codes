#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		set<ll> st;
		for(ll i=0; i<n; i++)
		{
			ll type; cin>>type;
			st.insert(type);
		}
		ll cnt = st.size();
		cout<<min(n-x, cnt)<<"\n";
	}
}