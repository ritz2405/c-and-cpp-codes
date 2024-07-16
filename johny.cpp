#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		cin>>k;
		k=k-1;
		int p=a[k];
		sort(a,a+n);
		for(int i=0; i<n; i++)
		{
			if(p == a[i])
			{
				cout<<i+1<<endl;
			}
		}

	}
}