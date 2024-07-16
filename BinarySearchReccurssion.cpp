#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size)
{
	if(size == 0 || size == 1)
	{
		return true;
	}
	if(arr[0] > arr[1])
	{
		return false;
	}
	else
	{
		bool ans = isSorted(arr + 1, size-1);
		return ans;
	}
}
bool linearSearch(int *arr, int size, int k)
{
	if(size == 0)
	{
		return false;
	}
	if(arr[0] == k)
	{
		return true;
	}
	else
	{
		bool remainingpart = linearSearch(arr+1, size-1, k);
		return remainingpart;
	}
}
bool binarySearch(int *arr, int s, int e, int k)
{
	if(s>e)
	{
		return false;
	}
	int mid = s + (e-s)/2;
	if(arr[mid] == k)
	{
		return true;
	}
	if(arr[mid] < k)
	{
		return binarySearch(arr, mid+1, e, k);
	}
	else
	{
		return binarySearch(arr, s, mid-1, k);
	}
}
int main()
{
	int arr[5] = {2,4,5,6,7};
	int size = 5;

	// bool ans = isSorted(arr, size);
	// if(ans)
	// {
	// 	cout<<"Sorted\n";
	// }
	// else{
	// 	cout<<"Not Sorted";
	// }
	bool ans = binarySearch(arr, 0, 5, 6);
	if(ans)
	{
		cout<<"Found";
	}
	else{
		cout<<"Not Found";
	}
}