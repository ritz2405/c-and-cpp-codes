#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int x,y,k,n;
		int pages, price, flag=0;
		cin>>x>>y>>k>>n;
		while(n--)
		{
			cin>>pages>>price;
			if(pages >= x-y && k>=price)
			{
				flag = flag + 1;
			}
		}
		if(flag >= 1)
		{
			cout<<"LuckyChef"<<"\n";
		}
		else
		{
			cout<<"UnluckyChef"<<"\n";
		}
	}
}