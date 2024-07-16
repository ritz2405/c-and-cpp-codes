#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int w1,w2,x1,x2,m;
	cin>>w1>>w2>>x1>>x2>>m;
	int diffWts = w2-w1;
	int flag=0;
	for(int i=x1*m; i<= x2*m; i++)
	{
		if(diffWts == i)
		{
			flag++;
			break;
		}
	}
	if(flag!=0)
	{
		cout<<1<<"\n";
	}
	else
	{
		cout<<0<<"\n";
	}
}
int main()
{
	int t; cin>>t;
	while(t--){
		solve();
	}
}