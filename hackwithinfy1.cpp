#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ones = 0, zeros = 0, k=0;
	string s;
	cin>>s;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '1')
		{
			int k=zeros;
			if(k>=1)
			{
				zeros--;
				ones++;
			}
			else
			{
				ones++;
			}
		}
		else
		{
			int k=ones;
			if(k>=1)
			{
				ones--;
				zeros++;
			}
			else
			{
				zeros++;
			}
		}
	}
	cout<<(ones+zeros)<<"\n";
}