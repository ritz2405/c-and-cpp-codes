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
		vector<int> arr(n);
		vector<int> ans(n);
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		ans[0] = arr[0] & arr[1];
		ans[n-1] = arr[n-1] & ans[n-2];
		for(int i=0; i<n; i++)
		{
			ans[i] = max(arr[i] & arr[i-1], arr[i] & arr[i+1]);
		}
		for(int i=0; i<n; i++)
		{
			cout<<ans[i]<<"\n";n
		}
	}
}