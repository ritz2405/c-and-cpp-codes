#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int px,py,qx,qy;
		cin>>px>>py>>qx>>qy;
		cout<<((2*qx)-px)<<((2*qy)-py)<<endl;
	}
}