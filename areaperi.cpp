#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,b;
	cin>>l>>b;
	int area = l*b;
	int peri = 2*(l+b);
	if(area > peri)
	{
		cout<<"Area";
	}
	else if(peri > area)
	{
		cout<<"Peri";
	}
	else if(area == peri)
	{
		cout<<"Eq";
	}
}