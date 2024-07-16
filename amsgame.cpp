#include<bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;

		ll arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		ll g = arr[0];
		for(int i=1; i<n; i++)
		{
			g = __gcd(arr[i],g);
		}
		cout<<g<<endl;
	}
}