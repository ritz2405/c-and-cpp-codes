#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,c;
	cin>>n;
	if(n%2 == 0)
	{
		cout<<"NO"<<"\n";
	}
	else
	{
		c = (n-1)/2;
		cout<<"YES"<<"\n";
		int arr[n][n];
		for(int i=1; i<n+1; i++)
		{
			for(int j=1; j<n+1; j++)
			{
				if(i == j)
				{
					arr[i-1][j-1] = 0;
				}
				else if(j>i && ((j-i)<=c))
				{
					arr[i-1][j-1] = 1;
				}
				else if((j-i) > c)
				{
					arr[i-1][j-1] = 0;
				}
				else if(i>j)
				{
					arr[i-1][j-1] = (!arr[j-1][i-1]);
				}
				cout<<arr[i-1][j-1];
			}
			cout<<"\n";
		}
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