#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n)
{
	int start=0;
	int end=n-1;
	int temp;
	while(start<end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

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
	reverseArray(arr,n);
}