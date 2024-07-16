#include<bits/stdc++.h>
using namespace std;
void reachHome(int src, int dest)
{
	if(src == dest)
	{
		cout<<"Pohchloy bhava";
		return;
	}
	// cout<<src<<"\n";
	reachHome(++src, dest);
}
int main()
{
	int src =1, dest = 10;
	cout<<"\n";
	reachHome(src, dest);
}