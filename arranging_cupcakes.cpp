#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, smallest = 100000000, a,b;
		cin>>n;
		for(int i=1; i<=sqrt(n); i++)
		{
			if(n%i == 0)
			{
				a = n/i;
				b = abs(a - i);
				smallest = min(smallest, b);
			}
		}
		cout<<smallest<<endl;
	}
}