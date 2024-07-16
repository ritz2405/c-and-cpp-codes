#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int k,c=0;
		cin>>k;
		if(k%2 == 0)
		{
			k = k/2;
			cout<<k*k<<endl;
		}
		else
		{
			k = k/2;
			c = k+1;
			cout<<k*c<<endl;
		}
	}
}