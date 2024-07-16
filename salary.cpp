#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int total = 0;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			total = total + arr[i];
		}
		int a = total-n*(*min_element(arr, arr + n));
		cout<<a<<"\n";
	}
}
