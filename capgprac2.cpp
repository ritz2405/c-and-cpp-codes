#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int count=1;
	cin>>s;
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i] == s[i+1])
		{
			count++;
		}
		else
		{
			count =1;
		}
	}
}