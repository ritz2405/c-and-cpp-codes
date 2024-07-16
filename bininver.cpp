#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int ans=0;
	vector<int> arr(n);
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		int c=0;
		int temp=arr[i];
		while(temp % 2 == 0)
		{
			temp = temp/2;
			c++;
		}
		if(i == 0 || c < ans)
		{
			ans = c;
		}
	}
	cout<<ans<<"\n";
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