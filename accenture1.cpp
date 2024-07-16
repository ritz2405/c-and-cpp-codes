#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r, units, n;
	cin>>r>>units>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	if(n==0)
	{
		cout<<-1<<"\n";
	}
	else
	{
		int need;
		int sum=0;
		int c=0;
		need = r*units;
		for(int i=0; i<n; i++)
		{
			c++;
			sum = sum + arr[i];
			if(sum >= need)
			{
				break;
			}
		}
		if(need > sum)
		{
			cout<<0<<"\n";
		}
		else
		{
			cout<<c<<"\n";
		}
	}
}