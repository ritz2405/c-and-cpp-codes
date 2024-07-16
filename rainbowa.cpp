#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int i,j;
		cin>>n;
		int arr[n];
		bool flag=true;
		for(int l=0; l<n; l++)
		{
			cin>>arr[i];
		}
		for(i=0, j=n-1; i<j; i++, j--)
		{
			if(arr[i] != arr[j])
			{
				flag = false;
				break;
			}
			if(arr[i]!=arr[i+1] && arr[i+1]!=arr[i]+1)
			{
				flag = false;
				break;
			}
		}
		if(arr[0]!=1)
		{
			flag = false;
		}
		if(arr[i] != 7)
		{
			flag = false;
		}
		if(flag)
		{
			cout<<"yes\n";
		}
		else
		{
			cout<<"no\n";
		}
	}
}