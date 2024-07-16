#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	float y,r;
	cin>>x;
	cin>>y;
	if(x%5 == 0 && x<y)
	{
		r = y - x - 0.5;
		cout<<fixed<<r<<"\n";
	}
	else
	{
		cout<<fixed<<y<<"\n";
	}
}