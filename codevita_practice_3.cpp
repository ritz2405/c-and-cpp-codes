#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
	if(n==1)
	{
		return false;
	}
	for(int i=2; i<n/2; i++)
	{
		if(n%i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int D,P,p, t=1;
	cin>>D>>P;
	p = D/P;
	int time[p][P];
	for(int i=0; i<P; i++)
	{
		for(int j=0; j<p; j++)
		{
			time[j][i] = t++;
		}
	}

	t=0;
	for(int i=0; i<p; i++)
	{
		bool flag = true;
		for(int j=0; j<P; j++)
		{
			if(!isprime(time[i][j]))
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			t++;
		}
	}
}