#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(k<n/2)
		{
			cout<<(2*k+1);
		}
		else
		{
			cout<<(n-1-k)*2;
		}
	}
}