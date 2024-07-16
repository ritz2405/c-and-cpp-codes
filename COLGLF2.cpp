#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int s;
	cin>>s;
	vector<int> song;
	for(int i=0; i<s; i++)
	{
		int x;
		cin>>x;
		song.push_back(x);
	}
	long int ans=0;
	for(int i=0; i<s; i++)
	{
		int num_of_eps;
		cin>>num_of_eps;
		for(int j=0; j<num_of_eps; j++)
		{
			int temp;
			cin>>temp;
			if(j==0)
			{
				ans+=temp;
			}
			else
			{
				ans = ans + (temp-song[i]);
			}
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