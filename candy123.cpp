#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a,b;
	cin>>a>>b;
	int sumLimak=0, sumBob=0;
	for(int i=1;;i++)
	{
		if(a>=sumLimak)
		{
			sumLimak = sumLimak + 2*i-1;
		}
		else
		{
			break;
		}
		if(b>=sumBob)
		{
			sumBob = sumBob + 2*i;
		}
		else
		{
			break;
		}
	}
	if(sumLimak > sumBob)
	{
		cout<<"Limak\n";
	}
	else
	{
		cout<<"Bob\n";
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}