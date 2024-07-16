#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,a;
	cin>>b>>a;
	if(2*a % b == 0)
	{
		cout<<(2*a/b)<<endl;
	}
	else
	{
		cout<<(2*a/b)+1<<endl;
	}
}
 