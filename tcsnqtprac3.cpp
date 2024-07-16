#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n == 0)
	{
		cout<<"Time Estimated "<<0<<"minutes\n";
	}
	if(n <= 2000)
	{
		cout<<"Time Estimated "<<25<<"minutes"<<"\n";
	}
	else if(n>2000 && n<=4000)
	{	
		cout<<"Time Estimated "<<35<<"minutes"<<"\n";
	}
	else if(n>4000 && n<7000)
	{
		cout<<"Time Estimated "<<45<<"minutes"<<"\n";
	}
	else
	{
		cout<<"INVALID INPUT\n";
	}
}