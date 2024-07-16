#include<bits/stdc++.h>
using namespace std;
int main()
{
	int in;
	cin>>in;
	int n=10, k=5;
	if(in == 0 || in > n)
	{
		cout<<"INVALID INPUT"<<"\n";
		cout<<"NO. OF CANDIES AVAILABLE "<<n<<"\n";
	}
	else
	{
		cout<<"NO. OF CANDIES SOLD "<<in<<"\n";
		n=n-in;
		cout<<"NO OF CANDIES AVAILABLE "<<n<<"\n";
		if(n <= k)
		{
			n=10;
		}
	}
}