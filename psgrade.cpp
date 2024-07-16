#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int amin,bmin,cmin,tmin,a,b,c;
		cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
		if(a < amin || b < bmin || c < cmin)
		{
			cout<<"No"<<"\n";
		}
		else
		{
			if(a+b+c >= tmin)
			{
				cout<<"Yes"<<"\n";
			}
			else
			{
				cout<<"No"<<"\n";
			}
		}
	}
}