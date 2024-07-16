#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,r,mod;
		mod = pow(10,9)+7;
		cin>>n;
		r = pow(n,2);
		r = r%mod;
		cout<<r<<endl;
	}
}