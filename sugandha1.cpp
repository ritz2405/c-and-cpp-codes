#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, r;
	cin>>n;
	cin>>m;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int a = arr[1];
	int b = arr[0];
	for(int i=0; i<m; i++)
	{
		a++;
		b--;
		if(b%a == 0)
		{
			r = b;
			break;
		}
	}
	cout<<r<<endl;
	
}