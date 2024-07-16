#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k, count=0, maxv=0;
		cin>>n>>k;
		string a;
		cin>>a;
		for(int i=0; i<n; i++)
		{
			if(a[i] == '*')
			{
				count++;
				if(count >= maxv)
				{
					maxv = count;
				}
			}
			else
			{
				count = 0;
			}
		}
		if(maxv >= k)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}
	