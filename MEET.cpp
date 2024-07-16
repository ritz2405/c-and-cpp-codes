#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(string a, string b)
{
	int ans1 = stoi(a.substr(0,2))*60*(a.substr(0,2)!="12") + stoi(a.substr(3,2)) + 720*(a.substr(5,1) == "P");
	int ans2 = stoi(b.substr(0,2))*60*(b.substr(0,2)!="12") + stoi(b.substr(3,2)) + 720*(b.substr(5,1) == "P");

	return (ans1 <= ans2);
}
void solve()
{
	ll n;
	string p1,p2;
	cin>>p1>>p2;
	p1 += p2;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		string ltime1,ltime2,rtime1,rtime2;
		cin>>ltime1>>ltime2>>rtime1>>rtime2;
		ltime1 += ltime2;
		rtime1 += rtime2;
		if(compare(ltime1,p1) && compare(p1,rtime1))
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
	}
	cout<<"\n";
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