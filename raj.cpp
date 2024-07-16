#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	s1 = "HELLO";
	s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i=0; i<26; i++)
	{
		for(int j=0; j<s1.length(); j++)
		{
			cout<<s2[i]<<endl;
			if(s2[i] == s1[j])
			{
				cout<<s1[i]<<endl;
				break;
			}
		}
		
	}

}