#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<string> v;
	int n;
	cin>>n;
	string a;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	string base = v[0];
	for(int i=1; i<v.size(); i++)
	{
		string s=v[i];
		for(int j=0; j<base.length(); j++)
		{
			if(base[j] == s[j])
			{
				base = "";
				base.append(s[j]);
			}
		}
	}
	cout<<base<<"\n";
}