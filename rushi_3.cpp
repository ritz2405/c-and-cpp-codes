#include<bits/stdc++.h>
using namespace std;
int multiply(int n, int i)
{
	int num = n * i;
	cout<<num<<"\n";
	if(i<10)
	{
		return multiply(n,i+1);
	}
	return num;
}
int main()
{
	int n = 3;
	multiply(n,1);
}