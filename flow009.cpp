#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int q,p;
		cin>>q>>p;
		double ans = p*q;
		if(q > 1000)
		{
			ans = ans - ans*0.1;
		}
		cout<<setprecision(10)<<fixed;
		cout<<ans<<endl;
	}
}