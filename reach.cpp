#include<bits/stdc++.h>
using namespace std;
bool rechable(int x1,int y1,int x2,int y2)
{
	if(x1>x2 || y1>y2)
	{
		return false;
	}
	if(x1==x2 && y1==y2)
	{
		return true;
	}

	return (rechable(x1 + y1, y1, x2, y2) || rechable(x1, x1 + y1, x2, y2));
}
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1;
	cin>>x2>>y2;
	bool r=rechable(x1,y1,x2,y2);
	if(r == true)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}