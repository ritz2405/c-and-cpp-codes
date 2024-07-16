#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i] == 'E')
		{
			if(s[i+1] == 'F')
				i = i+1;
			else
				cout<<s[i];
		}
		else if(s[i] == '5')
		{
			if(s[i+1] == '6')
				i = i+1;
			else
				cout<<s[i];
		}
		else if(s[i] == 'G')
		{
			continue;
		}
		else if(s[i] == '7')
		{
			continue;
		}
		else
		{
			cout<<s[i];
		}
	}
	return 0;
}