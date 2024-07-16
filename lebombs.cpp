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
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		if(arr[0] == 1)
		{
			n=n-2;
		}
		else
		{
			for(int i=1; i<n-1; i++)
			{
				n=n-3;
			}
		}
		if(arr[n-1] == 1)
		{
			n=n-2;
		}

		

		cout<<n<<endl;
	}
}