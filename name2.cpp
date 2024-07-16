#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1;
		string s2;

		cin>>s1;
		cin>>s2;

		int count = 0;
		int m = s1.size();
		int n = s2.size();

		if(m>n)
		{
			swap(s1, s2);
		}

		for(int i=0; i<s2.length(); i++)
		{
			if(s2[i] == s1[count])
			{
				count++;
			}
		}

		if(count == s1.length())
		{
			cout<<"YES"<<endl;
		}

		else
		{
			cout<<"NO"<<endl;
		}
	}
}