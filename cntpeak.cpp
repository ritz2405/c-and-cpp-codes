#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans = 10*((n-2)*pow(3, n-3));
		if(ans < 0)
		{
			cout<<0<<"\n";
		}
		else
		{
			cout<<ans<<"\n";
		}
	}
}