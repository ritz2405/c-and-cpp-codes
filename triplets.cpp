#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin>>a>>b;
	if(b==1)
	{
		cout<<-1;
		return 0;
	}
	cout<< a <<" "<<a * b<<" "<< a * (b+1);
}