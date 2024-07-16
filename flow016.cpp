#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int g = __gcd(a,b);
		cout<<g<<" "<<a/g*b<<"\n";
	}
}