#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, prod=1;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			prod = prod * 2;
			prod %= 100000;
		}
		printf("%d\n",(prod -1 + 100000)%100000);
	}
}