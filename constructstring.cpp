#include<bits/stdc++.h>
using namespace std;
string generateans(int n, int m)
{
	int temp = m+1;
	string s;
	while(temp--)
	{
		int each = n / (m+1);
		while(each--)
		{
			s.push_back('A');
			n--;
		}
		if(m>0)
		{
			s.push_back('B');
			m--;
		}
	}
	return s;
}
int main()
{
	int n,m;
	cin>>n>>m;
	if(n<m)
	{
		cout<<"Please enter proper inputs!!";
	}
	else
	{
		cout<<generateans(n,m);
	}
}