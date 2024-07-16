#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0;
	do
	{
		long long int a;
		cin>>a;
		a = a%6;
		if(a == 0 || a == 1 || a == 3)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}while(t--);
	
}