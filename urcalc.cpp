#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	cout.precision(6);
	string c;
	cin>>c;
	if(c == "+")
	{
		cout<<a+b<<"\n";
	}
	if(c == "-")
	{
		cout<<a-b<<"\n";
	}
	if(c == "*")
	{
		cout<<fixed<<a*b<<"\n";
	}
	if(c == "/")
	{
		cout<<fixed<<a/b<<"\n";
	}
}