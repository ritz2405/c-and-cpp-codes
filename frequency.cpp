#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,j;
	cin>>n;
	int arr[100] = {0};
	for(int i=0; i<n; i++)
	{
		cin>>j;
		arr[j]++;
	}
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}