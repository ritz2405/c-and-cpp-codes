#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		int child_sum=0, father_sum=0;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr + n);
		k = min(k, n-k);
		for(int i=0; i<n; i++)
		{
			if(i<k)
			{
				child_sum += arr[i];
			}
			else
			{
				father_sum += arr[i];
			}
		}
		cout<<abs(father_sum - child_sum)<<"\n";
	}
}