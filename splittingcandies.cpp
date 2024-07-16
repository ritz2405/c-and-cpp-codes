#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		int d = n / k;
		int r = n % k;
		if(k == 0)
		{
			cout<<0<<" "<<n<<endl;
		}
		else
		{
			cout<<d<<" "<<r<<endl;
		}	
	}
}