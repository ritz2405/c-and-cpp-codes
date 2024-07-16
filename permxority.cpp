#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		if(n == 2)
		{
			cout<<-1<<"\n";
		}
		if(n%2==1)
		{
			int x=n;
			for(int i=0; i<n; i++)
			{
				cout<<x<<" ";
				x--;
			}
			cout<<"\n";
		}
		int x = 1;
		for(int i=0; i<n; i++)
		{
			arr[i] = x;
			x--;
		}
		arr[0]=2;
		arr[1]=3;
		arr[2]=1;
		for(int i=0; i<n; i++)
		{
			cout<<arr[i]<<" ";
			cout<<"\n";
		}
	}
}