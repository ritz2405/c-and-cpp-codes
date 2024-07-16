#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		static int sum = 0;
		for(int i=0; i<n; i++)
		{
			int xi,li,fi;
			cin>>xi>>li>>fi;
			sum = sum + xi + li;
		}
		cout<<sum<<endl;
	}
}