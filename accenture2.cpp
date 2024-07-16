#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s=NULL)
	{
		cout<<-1<<"\n";
	}
	int i=1;
	int a=*s-'0';
	str++;
	while(*s!='\0')
	{
		char p = *s; 
		s++;
		if(p == 'A')
		{
			a&=(*s - '0');
		}
		else if(p == 'B')
		{
			a|=(*s - '0');
		}
		else
		{
			a^=(*s-'0');
		}
		s++;
	}
	cout<<a<<"\n";
}