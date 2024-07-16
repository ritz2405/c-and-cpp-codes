#include<bits/stdc++.h>
using namespace std;
bool isPrime(int sum)
{
	for(int i=2; i*i<sum; i++)
	{
		if(sum%i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
int main()
{
	int arr1[] = {14,12,23,4,10,7,10,12,9,14,2,14};
	int sum=0;
	for(int i=0; i<12-1; i+=2)
	{
		sum = arr1[i] + arr1[i+1];
		if(isPrime(sum))
		{
			swap(arr1[i], arr1[i+1]);
		}
	}
	for(int i=0; i<12; i++)
	{
		cout<<arr1[i]<<" ";
	}
}