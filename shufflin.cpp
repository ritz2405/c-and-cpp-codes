#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	int odd=0, even = 0, res = 0, num;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>num;
		if(num%2!=0)
		{
			odd++;
		}
		else
		{
			even++;
		}
	}
	if(n%2!=0)
	{
		res = min(n/2+1, odd);
		res += min(n/2, even);
	}
	else
	{
		res = min(n/2, odd);
		res += min(n/2, even);
	}
	cout<<res<<"\n";
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