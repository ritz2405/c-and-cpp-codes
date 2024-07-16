#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sticks[n];
	for(int i=0; i<n; i++)
	{
		cin>>sticks[i];
	}
	int cost[n];
	for(int i=0; i<n; i++)
	{
		cin>>cost[i];
	}
	int mini=INT_MAX;
	for(int i=0;i<n;i++)
	{
		int size=sticks[i];
		int c=0;
		for(int j=0;j<n;j++){
			c=c+(abs(size-sticks[j])*cost[j]);
		}
		mini = min(mini,c);
	}
	cout<<mini;
}