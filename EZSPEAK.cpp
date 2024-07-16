#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count = 0;
	for(int i=0; i<n; i++)
	{
		char ch = s[i];
		if(count>3)
		{
			break;
		}
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			count = 0;
		}
		else
		{
			count++;
		}
	}
	if(count>3)
	{
		cout<<"NO"<<"\n";
	}
	else
	{
		cout<<"YES"<<"\n";
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