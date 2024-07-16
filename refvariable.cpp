#include<bits/stdc++.h>
using namespace std;
void update(int& n)
{
	n = n+1;
}
int main()
{
	// int i=5;
	// cout<<i<<"\n";
	// i++;
	// cout<<i<<"\n";
	// int &j = i;
	// j++;
	// cout<<i<<"\n";
	int n = 5;
	cout<<"Before "<<n<<"\n";
	update(n);
	cout<<"After "<<n<<"\n";
}