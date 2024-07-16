#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p;
		int s;
		cin>>p;
		cin>>s;

		float height, volume,l;

		height = (p-sqrt(p*p - 24*s))/12;
		l = (p-8*height)/4;
		volume = height*height*l;

		printf("%.2f\n", volume);
	}
}