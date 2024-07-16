#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,j,m,p;
	float ab, ap;
	cin>>n>>k>>j>>m>>p;
	if(n<0 || k<0 || j<0 || m<0 || p<0)
	{
		cout<<"INVALID INPUT";
	}
	else
	{
		if(k>0)
		{
			ab = (float)m/k;
			m = m % k;
		}
		if(j>0)
		{
			ap = (float)p/j;
			p = p % j;
		}
		n = n - ab - ap;
		if( (m!= 0) || (p!= 0))
		{
			n = n-1;
		}
		cout<<"Number of monkeys on tree "<<n<<"\n";
	}
}