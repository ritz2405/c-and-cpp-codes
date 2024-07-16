#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n, count=0; 
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		for(int i=0; i<n; i++)
		{
			if(arr[i] == 1)
			{
				count++;
			}
		}
		int result = count*(count + 1)/2;
		cout<<result<<"\n";
	}
}