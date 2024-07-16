#include<bits/stdc++.h>
using namespace std;
void solve()
{
	float n,v1,v2;
	cin>>n>>v1>>v2;
	float timeStairs, timeElevator;
	timeElevator = 2*n/v2;
	timeStairs = n*sqrt(2)/v1;
	if(timeStairs > timeElevator)
	{
		cout<<"Elevator\n";
	}
	else
	{
		cout<<"Stairs\n";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}