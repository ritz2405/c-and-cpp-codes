#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,a,b;
		cin>>x>>a>>b;

		int result;
		result = 10*(a + (100 - x)*b);
		cout<<result<<endl;
	}
}