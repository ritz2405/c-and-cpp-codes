#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	if(n>1 && k==1)
	{
		cout<<-1<<"\n";
		continue;
	}
	vector<int> v(n);
	iota(v.begin(), v.end(), 1);
	reverse(v.end() - (n-k+1), v.end());
	for(int x:v)
	{
		cout<< x <<' ';
	}
	cout<<"\n";
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