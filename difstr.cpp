#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> str(n, ".");
		for(int i=0; i<n; i++)
		{
			cin>>str[i];
		}
		string ans= "";
		for(int i=0; i<n ;i++)
		{
			if(str[i][i] == '0')
			{
				ans += '1';
			}
			else
			{
				ans += '0';
			}
		}
		cout<<ans<<endl;
	}
}