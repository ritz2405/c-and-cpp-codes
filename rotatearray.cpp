#include<bits/stdc++.h>
using namespace std;
void rotateArray(int arr[], int n)
{
	int temp = arr[n-1];
	for(int i=n-1; i>0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = temp;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	rotateArray(arr, n);
}