#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int t, count=0;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a = pow(2, n) - 1;
		for(int i = 0; i<a; i++)
		{
			if(i^(i+1) == (i+2)^(i+3))
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
} 