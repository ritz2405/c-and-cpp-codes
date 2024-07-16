#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r,count=0;
		cin>>l>>r;
		for(int i=l; i<=r; i++)
		{
			if(i%10 == 2)
			{
				count++;
			}
			else if(i%10 == 3)
			{
				count++;
			}
			else if(i%10 == 9)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}