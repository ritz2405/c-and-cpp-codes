#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	if(n<=1)
	{
		return false;
	}
	for(int i=2; i*i <= n; i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr[4]; 		//based on given testcase
	int sum = 0;       
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
		if(isprime(arr[i]) == false)
		{
			sum = sum + arr[i];
		}
	}
	cout<<sum<<"\n";
}