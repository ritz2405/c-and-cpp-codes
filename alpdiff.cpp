#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s1,s2,s3;
	cin>>s1>>s2;
	for(int i=0; i<s2.length(); i++)
	{
		for(int j=0; j<s1.length(); j++)
		{
			if(s2[i] != s1[j])
			{
				string c;
				c = s2[j];
				s3.append(c);
			}
		}
	}
	cout<<s3;
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