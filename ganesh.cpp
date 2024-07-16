#include<bits/stdc++.h>
using namespace std;

class A
{
public:
	int max_(int x, int y)
	{
		if(x>y)
		{
			cout<<x<<endl;
		}
		else
		{
			cout<<y<<endl;
		}
	}
	int max_(double x, double y)
	{
		if(x>y)
		{
			cout<<x<<endl;
		}
		else
		{
			cout<<y<<endl;
		}
	}
	int max_(int x, int y, int z)
	{
		if(x>y && x>z)
		{
			cout<<x<<endl;
		}
		else if(y>x && y>z)
		{
			cout<<y<<endl;
		}
		else
		{
			cout<<z<<endl;
		}
	}
	int max_(double x, double y, double z)
	{
		if(x>y && x>z)
		{
			cout<<x<<endl;
		}
		else if(y>x && y>z)
		{
			cout<<y<<endl;
		}
		else
		{
			cout<<z<<endl;
		}
	}
};
int main()
{
	A a;
	a.max_(1,2);
	a.max_(10.1, 12.3);
	a.max_(1,2,3);
	a.max_(10.1,12.1,14.2);
}