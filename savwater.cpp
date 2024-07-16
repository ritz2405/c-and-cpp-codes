#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h,x,y,c;
		cin>>h>>x>>y>>c;
		int total_water=0;
		total_water = x + y/2;
		int total_consumption_water=0;
		total_consumption_water = h*total_water;
		if(total_consumption_water <= c)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
	}
}