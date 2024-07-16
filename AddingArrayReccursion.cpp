#include<bits/stdc++.h>
using namespace std;
int recSum(int *arr, int size)
{
	if(size <= 0){
		return 0;
	}
	return recSum(arr, size-1) + arr[size-1];
}
int main()
{
	int arr[5] = {3,5,6,8,9};
	int size = 5;
	int ans = recSum(arr, size);
	cout<<ans<<"\n";
}