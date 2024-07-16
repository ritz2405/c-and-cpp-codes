#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int k;
	cin>>k;
	int arr[k][k];
	for(int i=0; i<k; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(i == j)
			{
				cout<<k;
			}
		}
		cout<<"\n";
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