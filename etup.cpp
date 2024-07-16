#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int arr[n+1], x;
		arr[0] = 0;
		for(int i=1; i<=n; i++)
		{
			cin>>x;
			if(x%2 == 0)
			{
				arr[i] = 1 + arr[i-1];
			}
			else
			{
				arr[i] = arr[i-1];
			}
		}
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			int even = arr[r] - arr[l-1];
			int odd = r-l+1-even;
			int even_combi = (even * (even -1)*(even - 2))/6;
			int odd_combi = ((odd * (odd-1))/2)*even;
			cout<<even_combi+odd_combi<<endl;
		}
	}
	return 0;
}