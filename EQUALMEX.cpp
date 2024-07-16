#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,x,f=1;
	cin>>n;
	int arr[2*n]={};
	for(int i=0; i<2*n; i++)
	{
		cin>>x;
		arr[x]++;
	}
	for(int i=0; i<2*n; i++)
	{
		if(arr[i] == 0)
		{
			break;
		}
		else if(arr[i]==1)
		{
			f=0;
			break;
		}
	}
	if(f)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
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