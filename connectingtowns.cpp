#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, mul=1;
		cin>>n;
		for(int i=0; i<n-1; i++)
		{
			int s;
			cin>>s;
			mul = (mul * s)%1234567;
		}
		cout<<mul<<endl;
	}
}