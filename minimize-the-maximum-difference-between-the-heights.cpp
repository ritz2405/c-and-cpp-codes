#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sort(arr, arr+n);
	int tempMax = arr[n-1];
	int tempMin = arr[0];
	int ans = tempMax - tempMin;
	for(int i=1; i<n; i++)
	{
		if(arr[i] - k < 0)
		{
			continue;
		}
		tempMin = min(arr[0]+k, arr[i]-k);
		tempMax = max(arr[i-1]+k, arr[n-1]-k);
		ans = min(ans, tempMax - tempMin);
	}
	cout<<ans;
}