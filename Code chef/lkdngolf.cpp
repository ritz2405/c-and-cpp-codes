#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, k;
		cin>>n>>x>>k;
		int r = (n+1)%k;
		if(x%k == 0 || x%k == r)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}