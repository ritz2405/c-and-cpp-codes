#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int team1 = 0, team2 = 0;
		for(int i=1; i<=10; i++)
		{
			int n;
			cin>>n;
			if(i%2 == 0)
			{
				team2+=n;
			}
			else
			{
				if(i%2 != 0)
					team1+=n;
			}
		}
		if(team1 > team2)
		{
			cout<<"1"<<"\n";
		}
		else
		{
			if(team1 == team2)
			{
				cout<<"0"<<"\n";
			}
			else
			{
				cout<<"2"<<"\n";
			}
		}
	}
}