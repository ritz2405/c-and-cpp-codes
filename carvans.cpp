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
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int min = arr[0];
		int count = 1;
		for(int i=0; i<n; i++)
		{
			if(min > arr[i])
			{
				count = count + 1;
				min = arr[i];
			}
		}
		cout<<count<<endl;
	}
}