#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g=0;
		string s;
		cin>>s;
		for(int i=0; i<s.length(); i++)
		{
			if(s[i] == '0' && s[i+1] == '1' && s[i+2] == '0')
			{
				g = 1;
				break;
			}
			else if(s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')
			{
				g = 1;
				break;
			}
		}
		if(g == 1)
		{
			cout<<"Good"<<"\n";
		}
		else
		{
			cout<<"Bad"<<"\n";
		}
	}
}