#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
	ll n;
	string s;
	string ans = "";
	cin>>n;
	cin>>s;
	for(ll i=0; i<n; i+=2)
	{
		if(s[i] == '0' && s[i+1] == '0')
		{
			ans+="A";
		}
		else if(s[i] == '0' && s[i+1] == '1')
		{
			ans+="T";
		}
		else if(s[i] == '1' && s[i+1] == '0')
		{
			ans+="C";
		}
		else
		{
			ans+="G";
		}
	}
	cout<<ans<<"\n";
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}