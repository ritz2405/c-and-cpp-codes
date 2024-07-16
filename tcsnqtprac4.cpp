#include<bits/stdc++.h>
using namespace std;
void ceaserciher(string s, int k)
{
	for(int i=0; i<s.size(); i++)
	{
		if(isdigit(s[i]))
		{
			if(s[i]+key <= 57)
			{
				s[i]=s[i] + key;
			}
			else
			{
				int l = (s[i] + key) - 57;
				s[i] = 47+l;
			}
		}
		else if(s[i]>=65 && s[i]<=90)
		{
			if(s[i]+ key <= 90)
			{
				s[i]=s[i]+key;
			}
			else
			{
				int l = (s[i] + key) - 90;
				s[i] = 64 + l;
			}
		}
		else if(s[i]>=97 && s[i] <= 122)
		{
			if(s[i] + key <= 97)
			{
				s[i] = s[i] + key;
			}
			else
			{
				int l = (s[i]+key) - 122;
				s[i] = 96 + l;
			}
		}
	}
	cout<<"The encrypted text is: "<<s;
}
int main()
{
	string s;
	cout<<"Enter plain text";

	getline(cin, s);
	int key;
	cout<<"Enter key";
	cin>>key;
	ceaserciher(s, k);
}