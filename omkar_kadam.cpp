#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void segregateEvenOdd(int arr[], int size)
{
	int left=0, right=size-1;
	while(left < right)
	{
		while(arr[left] % 2 == 0 && left < right)
		{
			left++;
		}
		while(arr[right] % 2 == 1 && left < right)
		{
			right--;
		}
		if(left < right)
		{
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
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
	segregateEvenOdd(arr, n);
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}