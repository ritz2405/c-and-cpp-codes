#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>n;
	}
	int temp=0;
	int cnt=0;
	int i=0;
	while(temp<n)
	{
		temp = temp + arr[temp];
		cnt++;
	}
	cout<<cnt;
}