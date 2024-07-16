#include<bits/stdc++.h>
using namespace std;
vector<int> rotate(int nums[], int n, int k)
{
	if(k>n)
		k = k%n;
	vector<int> ans(n);
	for(int i=0; i<k; i++)
	{
		ans[i] = nums[n-k+i];
	}
	int index = 0;
	for(int i=k; i<n; i++)
	{
		ans[i] = nums[index++];
	}
	return ans;
}
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

	vector<int> ans = rotate(arr, n, k);
	for(int i=0; i<n; i++)
	{
		cout<<ans[i]<<" ";
	}
}