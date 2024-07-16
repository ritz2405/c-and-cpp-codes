#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,d,sum=0;
	cin>>n>>d;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr + n);
	for(int i=0; i<n-1; i+=2)
	{
		if(arr[i+1] <= d+(arr[i]))
		{
			sum ++;
		}
		else
		{
			i--;
		}
	}
	cout<<sum<<endl;
}