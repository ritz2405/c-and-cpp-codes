#include<bits/stdc++.h>
using namespace std;
bool isperfectsqute(int x)
{
	int s;
	s=sqrt(x);
	return (s*s == x);
}
bool isfibo(int n)
{
	return isperfectsqute(5*n*n + 4) || isperfectsqute(5*n*n - 4);
}
int main()
{
	int n, sum=0;
	int pn=0;
	int cun=1;
	cin>>n;
	if(isfibo(n))
	{
		cout<<n<<"\n";
	}
	else
	{
		while(cun<=n)
		{
			if(cun%2 != 0)
			{
				sum = sum + cun;
			}
			cun = cun + pn;
			pn = cun - pn;
		}
		cout<<sum<<"\n";
	}
}