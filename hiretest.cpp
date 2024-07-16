#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,n,m;
		cin>>n>>m;
		cin>>x>>y;
		for(int i=1; i<=n; i++)
		{
			char s[m];
			scanf("%s", s);
			int f=0, p=0;
			for(int j=0; s[j] != '\0'; j++)
			{
				if(s[j] == 'F')
				{
					f++;
				}
				if(s[j] == 'P')
				{
					p++;
				}
			}
			if((f>=x) || (f == (x -1) && p >= y))
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
		cout<<"\n";
	}
}