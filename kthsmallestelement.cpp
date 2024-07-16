#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	int k;
	cin>>k;

	cout<<k<<"th smallest element "<<arr[k-1]<<"\n";
	cout<<k<<"th largest element "<<arr[n-k]<<"\n";
}