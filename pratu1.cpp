#include<bits/stdc++.h>
using namespace std;
bool iscoprime(int a, int b)
{
	if(--gcd(a,b) == 1)
	{
		return 
	}
}
int main()
{
	int input2;
	cin>>input2;
	int input1[input2];
	for(int i=0; i<input2; i++)
	{
		cin>>input1[i];
	}
	for(int i=0; i<input2-1; i++)
	{
		iscoprime(input1[i], input1[i+1]);
	}
}