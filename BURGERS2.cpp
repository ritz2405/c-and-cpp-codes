#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
	ll normal, premium, burgerwants, totalmoney;
	cin>>normal>>premium>>burgerwants>>totalmoney;
	ll normal_burgers = 0;
	if(burgerwants*normal > totalmoney)
	{
		cout<<-1<<"\n";
	}
	else if(burgerwants*premium < totalmoney)
	{
		cout<<0<<" "<<burgerwants<<"\n";
	}
	else
	{
		normal_burgers = (totalmoney - (premium*burgerwants))/(normal - premium);
		if((totalmoney - (premium*burgerwants))%(normal - premium) != 0)
		{
			normal_burgers++;
		}
		cout<<normal_burgers<<" "<<burgerwants - normal_burgers<<"\n";
	}
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