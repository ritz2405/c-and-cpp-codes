#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int q;
	cin>>q;
	while(q--)
	{
		ll n, product, ans;
		cin>>n;
		for(int i=0; i<15; i++)
		{
			product = product * prime[i];
			if(product <= n)
			{
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
}