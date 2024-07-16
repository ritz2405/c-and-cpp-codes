#include<bits/stdc++.h>
using namespace std;
// long long int count=0;
long long int charge(long long int A[], long long int L[], long long int n)
{
	// int count=0;
	int sum = 0;
	if(n == 0)
	{
		return 0;
	}
	if(A[n-1] <= L[n-1])
	{
		sum = sum + A[n-1];	
	}
	if(sum <= *max_element(L,L+n))
	{
		return max(A[n-1] + charge(A, L, n-1), charge(A, L, n-1));
	}
	else if(A[n-1] > L[n-1])
	{
		return charge(A,L,n-1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int A[n];
		long long int L[n];
		for(int i=0; i<n; i++)
		{
			cin>>A[i];
		}
		for(int i=0; i<n; i++)
		{
			cin>>L[i];
		}
		cout<<charge(A,L,n)<<"\n";
	}
}