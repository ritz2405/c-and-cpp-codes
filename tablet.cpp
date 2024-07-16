#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,b;
	cin>>n>>b;
	int arr[n][3], maxi=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>arr[i][j];
		}
		if(arr[i][2] > b)
		{
			continue;
		}
		else
		{
			maxi = max(maxi, arr[i][0]*arr[i][1]);
		}
	}
	if(maxi == 0)
	{
		cout<<"no tablet\n";
	}
	else
	{
		cout<<maxi<<"\n";
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