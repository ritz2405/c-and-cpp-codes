#include<bits/stdc++.h>
using namespace std;
string reverse1(string s)
{
	string s1;
	for(int i=s.length()-1; i>=0; i--)
	{
		s1 = s1+s[i];
	}
	return s1;
}
void reverse2(char s[])
{
	vector<string> v;
	char *token = strtok(s, ".");
	while(token != NULL)
	{
		v.push_back(token);
		token = strtok(NULL, ".");
	}
	for(int i=0; i<v.size(); i++)
	{
		if(i%2==0)
		{
			v[i] = reverse1(v[i]);
		}
		cout<<v[i]<<"\n";
	}
}
int main()
{
	char s[] = "i.love.you.very.much";
	reverse2(s);
}