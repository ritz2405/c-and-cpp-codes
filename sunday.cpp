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
		int ans = 8;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i]%7!=0 && arr[i]%7!=6)
			{
				ans++;
			}
		}
		cout<<ans<<"\n";
	}
}