#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2;
	float s,e,sum=0,ans=1;
	string stops[8] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
	float path[8]={800,600,750,900,1400,1200,1100,1500};
	cin>>s1>>s2;
	for(int i=0;i<8;i++)
	{
		if(s1 == stops[i])
		{
			s=i;
		}
		if(s2 == stops[i])
		{
			e = i;
		}
	}
	if(s == e)
	{
		cout<<"INVALID INPUT";
	}
	else
	{
		int i=s+1;
		cout<<i<<"\n";
		while(i!=e+1)
		{
			sum = sum + path[i];
			i = (i+1)%8;
		}
		cout<<ceil(sum*0.005);
	}
}