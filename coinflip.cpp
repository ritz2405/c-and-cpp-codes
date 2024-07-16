#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g; 
		cin>>g;
		while(g--)
		{
			int i,q,n;
			cin>>i>>n>>q;
			if(n%2 == 0)
			{
				cout<<n/2<<"\n";
			}
			else if(i == q)
			{
				cout<<n/2<<"\n";
			}
			else
			{
				cout<<(n/2) + 1<<"\n";
			}
		}
	}
}