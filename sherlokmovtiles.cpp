#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll z,s1,s2,q;
	cin>>z>>s1>>s2>>q;
	if(s1<s2)
	{
		swap(s1,s2);
	}
	while(q--)
	{
		ll ki;
		cin>>ki;
		double p = sqrt(ki);
		printf("%.4lf\n", ((double)z - p)*sqrt(2) / (double)(s1-s2));
	}
}