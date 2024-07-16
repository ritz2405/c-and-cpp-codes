#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ni, ne;
	float sumi=0, sume=0, total=0;
	cin>>ni>>ne;
	if(ni<0 || ne<0)
	{
		cout<<"INVALID INPUT";
	}
	for(int i=0; i<ni; i++)
	{
		float x;
		cin>>x;
		sumi = sumi + x;
	}
	float ansi = sumi*18;
	for(int i=0; i<ne; i++)
	{
		float y;
		cin>>y;
		sume = sume + y;
	}
	float anse = sume*12;
	cout<<ansi+anse<<"\n";
}