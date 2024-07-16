#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int key;
	cin>>key;
	int left=0;
	cin>>s;
	for(int i=0; s[i]!='\0'; i++)
	{
		if(s[i] >= 97 && s[i] <=122)
		{
			if(s[i] + key <= 122)
			{
				s[i] = s[i] + key;
			}
			else
			{
				left = (s[i] + key) - 122;
				s[i] = 96 + left;
			}
		}
		if(s[i] >= 65 && s[i]<=90)
		{
			if(s[i] + key <= 90)
			{
				s[i] = s[i] + key;
			}
			else
			{
				left = (s[i] + key) - 90;
				s[i] = 64 + left;
			}
		}
		if(s[i] >= 33 && s[i] <= 64)
		{
			if(s[i] + key+1 <= 64)
			{
				s[i] = s[i] + key+1;
			}
			else
			{
				left = (s[i] + key+1) - 64;
				s[i] = 32 + left;
			}
		}
	}
	cout<<s;
}