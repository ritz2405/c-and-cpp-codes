#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float p;
		int x, y, z;
		cin>>x>>y;
		int a = x+y;
		if(a<6)
		{
			z = 6 - a;
			p = ((float)z/(float)6);
			cout<<p<<endl;
		}
		else
		{
			cout<<"0"<<endl;
		}
	}
}