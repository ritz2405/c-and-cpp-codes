#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		string s;
		cin>>s;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i] >= '0' && s[i] <= '9')
			{
				sum = sum + s[i]-'0';
			}
		}
		cout<<sum<<endl;
	}
}