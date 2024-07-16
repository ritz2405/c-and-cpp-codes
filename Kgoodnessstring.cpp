#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n,k;
		cin>>n>>k;
		string s;
		int score = 0;
		cin>>s;
		for(int j=0;j<n/2;j++)
		{
			if(s[j] != s[n-j-1])
			{
				score = score + 1;
			}
		}
		cout<<"Case #"<<i<<":"<<abs(score - k)<<"\n";
	}
}