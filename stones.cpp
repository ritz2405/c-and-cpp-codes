#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string j, s;
	cin>>t;
	while(t--)
	{
		cin>>j;
		cin>>s;
		int count=0;
		for(int i=0; i<s.length(); i++)
		{
			for(int m = 0; m<j.length(); m++)
			{
				if(s[i] == j[m])

				{
					count++;
					break;
				}
			}
		}
		cout<<count<<"\n";
	}
}