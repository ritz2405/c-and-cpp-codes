#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n1, n2, n3;
	cin>>n1>>n2>>n3;
	long long int hash[5000000]={0};
	long long int m=0, d, j=0;
	long long int a[50002];

	for(int i=0; i<n1+n2+n3; i++)
	{
		cin>>d;
		hash[d]++;
	}	
	for(int i=0; i<1000000; i++)
	{
		if(hash[i] >= 2)
		{
			a[j] = i;
			j++;
		}
	}
	cout<<j<<endl;
	for(int i=0; i<j; i++)
	{
		cout<<a[i]<<endl;
	}
}