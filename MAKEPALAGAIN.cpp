#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<char> v1;
	vector<char> v2;

	for(int i=0; i<n; i++)
	{
		if(i%2 == 0)
		{
			v1.push_back(s[i]);
		}
		else
		{
			v2.push_back(s[i]);
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	if(v1 == v2)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
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